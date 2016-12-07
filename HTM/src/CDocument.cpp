/*
 * CDocument.cpp
 *
 *  Created on: 4 Dec 2016
 *      Author: admin
 */

#include "CDocument.h"

CDocument::CDocument() {
	this->head   = NULL;
	this->tail   = NULL;
	this->stack  = NULL;

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

CTag* CDocument::findTag( userID_t uid ) {
	if( head ) return head->find( uid );
	else       return NULL;
}

CTag* CDocument::addTag( tagID_t tid, userID_t uid ) {
	CTag* tag = findTag( uid );
	if( !tag ) {
		tag = new CTag( tid, uid );
		if( head ) tail = tail->connect( tag );
		else       head = tail = tag;
	}//endif
	return tag;
}


CDocument::~CDocument() {

}

