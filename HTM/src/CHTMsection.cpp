/*
 * CHTMsection.cpp
 *
 *  Created on: 8 Nov 2016
 *      Author: jpencil
 */

#include "CHTMsection.h"

CHTMsection::CHTMsection( htmTag_t tag )
           : CHTM( tag ){
	this->child = NULL;
}

CHTM CHTMsection::add( CHTM* htm ) {
}

CHTMsection::~CHTMsection() {
}

