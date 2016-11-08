/*
 * CHTM.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#include "CHTM.h"

CHTM* CHTM::sHTMchain = NULL;

CHTM::CHTM( char* tag ) {
	this->tag   = tag;   //TODO: create string object
	this->chain = NULL;  //use to chain all CHTM objects for cleaning
	if( sHTMchain ) sHTMchain->connect( this );
	else            sHTMchain = this;
}

void CHTM::Print(void) {
	if( sHTMchain ) sHTMchain->out();
}

void CHTM::connect( CHTM* htm ) {
	if( chain ) chain->connect( htm );
	else        chain = htm;
}

void CHTM::out(  ) {
	printf("\n<%s>",tag);
	if( chain ) chain->out();
	//printf("\n</%s>",tag);

}

CHTM::~CHTM() {
	if( chain ) delete chain;
}

