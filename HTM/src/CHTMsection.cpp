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

CHTM CHTMsection::add( ) {
	return *this;
}

CHTM CHTMsection::print( ) {
    printf("\n<%s> ", CHTM::strTag( tag ) );
    if( child ) child->CHTM::print( );
    printf("\n</%s> ", CHTM::strTag( tag ) );
}

CHTMsection::~CHTMsection() {

}

