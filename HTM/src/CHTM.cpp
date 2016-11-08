/*
 * CHTM.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#include "CHTM.h"

static char* sTags[] = {
		"html",
		"head",
		"body",
		 NULL
};

CHTM* CHTM::sHTMchain = NULL;

CHTM::CHTM( htmTag_t tag ) {
	this->tag   = tag;   //TODO: create string object
	this->chain = NULL;  //use to chain all CHTM objects for cleaning
	this->next  = NULL;  //use to chain all CHTM objects for cleaning
	if( sHTMchain ) sHTMchain->connect( this );
	else            sHTMchain = this;
}

void CHTM::connect( CHTM* htm ) {
	if( chain ) chain->connect( htm );
	else        chain = htm;
}

void CHTM::link( CHTM* htm ) {
	if( next ) next->link( htm );
	else       next = htm;
}

CHTM CHTM::print(  ) {
    printf("\n<%s> ", strTag(tag) );
    if( next ) next->print();
    printf("\n</%s> ", strTag(tag) );
}

char* CHTM::strTag( htmTag_t tag ) {
	return sTags[ tag ];
}

CHTM::~CHTM() {
	if( chain ) delete chain;
}

