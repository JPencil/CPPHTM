/*
 * CHTMsec.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: admin
 */

#include "CHTMsec.h"

CHTMsec::CHTMsec( htmTag_t tag )
       : CHTM( tag, eHtmBranch ) {
	this->content = NULL;
}

CHTM* CHTMsec::find( tagID_t id ) {
}

CHTM* CHTMsec::find( const char* name ) {
}

CHTM* CHTMsec::add( CHTM* htm ) {
	if( content ) content->link( htm );
	else          content = htm;
	return htm;
}

CHTMsec::~CHTMsec() {
}

