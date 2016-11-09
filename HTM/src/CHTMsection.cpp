/*
 * CHTMsection.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#include "CHTMsection.h"

CHTMsection::CHTMsection( htmTag_t tag )
           : CHTM( tag ){
}

CHTM CHTMsection::print() {
	printf("\n<%s>", strTag( tag ) );
	if( chain ) chain->print();
	return *this;
}

CHTMsection CHTMsection::text( char* ) {
	return *this;
}

CHTMsection::~CHTMsection() {
}

