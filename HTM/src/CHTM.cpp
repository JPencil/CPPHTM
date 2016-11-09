/*
 * CHTM.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#include "CHTM.h"

static char* sTags[] = {
		"!DOCTYPE html",
		"html",
		"head",
		"body",
		"h1",
		"h2",
		"h3",
		 NULL
};

CHTM* CHTM::sHTMchain = NULL;
CHTM* CHTM::sHTMnext  = NULL;
tagID_t CHTM::sHTMgenID = 0;

CHTM::CHTM( htmTag_t tag ) {
	this->tag    = tag;
	this->chain  = NULL;
	this->next   = NULL;
	this->ID     = sHTMgenID++;
	if( sHTMnext ) sHTMnext->next = this;
	sHTMnext = this;
	//printf("HTML created: %s", sTags[tag]);
}

void CHTM::Initialize( CHTM* htm ) {
	sHTMchain = sHTMnext = htm;
}

CHTM* CHTM::Document() {
	return sHTMchain;
}

CHTM CHTM::print(  ) {
	printf("\n<%s>", strTag( tag ) );
	if( next ) next->print();
	return *this;
}

char* CHTM::strTag( htmTag_t tag ) {
	return sTags[ tag ];
}

CHTM::~CHTM() {
}
