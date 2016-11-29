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

CHTM* CHTM::sChain = NULL;
CHTM* CHTM::sNext  = NULL;
tagID_t CHTM::sGenID = 0;

CHTM::CHTM( htmTag_t tag ) {
	this->tag    = tag;
	this->list   = NULL;
	this->chain  = NULL;
	this->id     = sGenID++;
	if( sNext ) sNext->chain = this;
	else        sChain       = this;
	sNext = this;
}

tagID_t CHTM::ID() {
	return id;
}


CHTM* CHTM::print() {
	printf("\n%s", strTag( tag ) );
	if( list ) list->print();
	return this;
}


const char* CHTM::strTag( htmTag_t tag ) {
	return sTags[ tag ];
}

CHTM::~CHTM() {
}
