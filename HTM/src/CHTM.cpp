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

void CHTM::out(  ) {

}

CHTM::~CHTM() {
	if( chain ) delete chain;
}

