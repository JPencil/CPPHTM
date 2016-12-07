/*
 * CDocument.cpp
 *
 *  Created on: 4 Dec 2016
 *      Author: admin
 */

#include "CDocument.h"

CDocument* CDocument::sHead  = NULL;
CDocument* CDocument::sTail  = NULL;
CDocument* CDocument::sFifo  = NULL;

CDocument::CDocument( docID_t did ) {
	this->did    = did;
	this->chain  = NULL;
	this->fifo   = NULL;

	this->tags   = NULL;
	this->last   = NULL;
	this->stack  = NULL;

	if( sHead ) sTail->chain = this;
	else sHead = sTail = this;
	sTail = this;
}

CTag* CDocument::pop() {
	CTag* tag = stack ? stack : NULL;
	if( tag ) 	stack = stack->fifo;
	return tag;
}

void CDocument::push( CTag* tag ) {
	CTag* tmp = stack;
	stack = tag;
	stack->fifo = tmp;
}

CTag* CDocument::findTag( usrID_t uid ) {
	if( tags ) return tags->find( uid );
	else       return NULL;
}

CTag* CDocument::addTag( tagID_t tid, usrID_t uid ) {
	CTag* tag = findTag( uid );
	if( !tag ) {
		tag = new CTag( tid, uid );
		if( tags ) last = last->connect( tag );
		else       tags = last = tag;
	}//endif
	return tag;
}


CDocument::~CDocument() {

}

