/*
 * CHTMdoc.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#include "CHTMdoc.h"

CHTMdoc* CHTMdoc::sChain = NULL;
CHTMdoc::CHTMdoc( )
       : CHTM( HTM_TAG_DOCT ){
	this->htmTags  = NULL;
    this->chain    = NULL;
	if( sChain ) sChain->connect( this );
	else         sChain = this;
}

void CHTMdoc::connect( CHTM* htm ) {
	CHTMdoc* doc = (CHTMdoc*)htm;
	if( chain ) chain->connect( htm );
	else        chain = doc;
}

CHTMdoc::~CHTMdoc() {
}

