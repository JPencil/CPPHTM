/*
 * CHTMtagFactory.cpp
 *
 *  Created on: 8 Nov 2016
 *      Author: jpencil
 */

#include "CHTMtagFactory.h"

CHTMtagFactory* CHTMtagFactory::sInstance = NULL;

CHTMtagFactory::CHTMtagFactory() {
}

CHTMtagFactory* CHTMtagFactory::Factory(  ) {
	if( !sInstance ) sInstance = new CHTMtagFactory();
	return sInstance;
}

CHTM CHTMtagFactory::create( htmTag_t tag ) {
	//TODO add validation later
	CHTM* htm = NULL;
	if( tag < HTM_SEC_END ) {
		htm = new CHTMsection(tag);
	} else {
	}

	return *htm;
}

CHTMtagFactory::~CHTMtagFactory() {
}

