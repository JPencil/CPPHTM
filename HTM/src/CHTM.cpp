/*
 * CHTM.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#include "CHTM.h"

static const char* sTags[] = {
		"!DOCTYPE html",
		"html",
		"head",
		"body",
		"h1",
		"h2",
		"h3",
		 NULL
};

CHTM* CHTM::sHead = NULL;
CHTM* CHTM::sTail = NULL;
CHTM* CHTM::sStack = NULL;

CHTM* CHTM::Make( htmTag_t tag, userID_t id ) {
	CHTM* htm = sHead ? sHead->find(id) : NULL;
	if( !htm ) htm = new CHTM(tag,id);
	return htm;
}

CHTM::CHTM( htmTag_t tag, userID_t id ) {
	this->ID     = id;
	this->tag    = tag;
	this->chain  = NULL;
	this->next   = NULL;
	this->parent = sStack;
	if( sTail ) sTail->chain = this;
	else        sHead = this;
	sTail = this;
}

CHTM* CHTM::pop() {
	CHTM* htm = sStack ? sStack : NULL;
	if( htm ) 	sStack = sStack->next;
	return htm;
}

void CHTM::push( CHTM* htm ) {
	CHTM* tmp = sStack;
	sStack = htm;
	sStack->next = tmp;
}

CHTM* CHTM::find( userID_t id ) {
	if( ID == id ) return this;
	else {
		if( chain ) return chain->find( id );
		else        return NULL;
	}
}

CHTM CHTM::print() {
	printf("\n%s", htmlTag() );
	if( chain ) chain->print();
	return *this;
}

CHTM CHTM::open() {
	push( this );
	return *this;
}

CHTM CHTM::close() {
	pop();
	return *this;
}


void CHTM::printParent() {
	printf("\n%s <-- %s", parent ? parent->htmlTag() : "No Parent", htmlTag() );
}


const char* CHTM::htmlTag( ) {
	return sTags[ tag ];
}

CHTM::~CHTM() {

}
