/*
 * CHTMdoc.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#include "CHTMdoc.h"

CHTMdoc::CHTMdoc( const char* docName )
       : CHTM( HTM_TAG_DOCT ){
	this->docName = docName;
	this->htmTags = NULL;
}


CHTMdoc::~CHTMdoc() {
}

