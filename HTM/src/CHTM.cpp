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

CHTM::CHTM( htmTag_t tag ) {
	this->tag    = tag;
	this->chain  = NULL;
	if( sTail ) sTail->chain = this;
	else        sHead = this;
	sTail = this;
}


CHTM CHTM::print() {
	printf("\n%s", strTag() );
	if( chain ) chain->print();
	return *this;
}


const char* CHTM::strTag( ) {
	return sTags[ tag ];
}

CHTM::~CHTM() {

}
