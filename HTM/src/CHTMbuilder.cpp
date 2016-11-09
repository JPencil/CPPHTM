/*
 * CHTMbuilder.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#include "CHTMbuilder.h"

CHTMbuilder* CHTMbuilder::sInst = NULL;

CHTMbuilder::CHTMbuilder( ) {
	this->doc = NULL;
}

CHTMbuilder* CHTMbuilder::Builder(  ) {
	if( !sInst ) sInst = new CHTMbuilder();
	return sInst;
}

void CHTMbuilder::initialize( CHTMdoc* doc ) {
	this->doc = doc;
	CHTM::Initialize( doc );
}

CHTM* CHTMbuilder::create( htmTag_t tag ) {
	return new CHTM(tag);
}

CHTMbuilder::~CHTMbuilder() {
}

