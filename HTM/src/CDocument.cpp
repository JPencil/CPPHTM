/*
 * CDocument.cpp
 *
 *  Created on: 4 Dec 2016
 *      Author: admin
 */

#include "CDocument.h"

CDocument* CDocument::sHead  = NULL;
CDocument* CDocument::sTail  = NULL;
CDocument* CDocument::sCurr  = NULL;

CDocument* CDocument::Active() {
	return sCurr;
}

CDocument* CDocument::Manager( docID_t did ) {
	CDocument* doc = sHead ? sHead->find( did ) : NULL;
	if( !doc ) doc = new CDocument( did );
	return doc;
}

CDocument::CDocument( docID_t did ) {
	this->did    = did;
	this->chain  = NULL;

	this->tags   = NULL;
	this->last   = NULL;
	this->fifo  = NULL;

	if( sHead ) sTail->chain = this;
	else sHead = sTail = this;
	sTail = sCurr = this;

	Print("\nDoc %d created...", did);
}

CDocument CDocument::open(  ) {
	sCurr = this;
	Print("\nDoc %d got open...", did);
	return *this;
}

CDocument* CDocument::find( docID_t did ) {
	if( this->did == did ) return this;
	else {
		if( chain ) return chain->find( did );
		else        return NULL;
	}
}

CTag* CDocument::pop() {
	CTag* tag = fifo ? fifo : NULL;
	if( tag )   fifo = fifo->next;
	return tag;
}

void CDocument::push( CTag* tag ) {
	CTag* tmp = fifo;
	fifo = tag;
	fifo->next = tmp;
}

CTag* CDocument::findTag( usrID_t uid ) {
	if( tags ) return tags->find( uid );
	else       return NULL;
}

CTag* CDocument::addTag(  usrID_t uid, tagID_t tid ) {
	CTag* tag = findTag( uid );
	if( !tag ) {
		tag = new CTag( uid, tid, this );
		if( tags ) last = last->connect( tag );
		else       tags = last = tag;
	}//endif
	return tag;
}


CDocument::~CDocument() {

}

