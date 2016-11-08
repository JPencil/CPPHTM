/*
 * CHTMcomposite.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#include "CHTMcomposite.h"

CHTMcomposite::CHTMcomposite( htmTag_t tag )
             : CHTM( tag ) {
	this->child = NULL;
}

CHTMcomposite::~CHTMcomposite() {

}

void CHTMcomposite::add( CHTM* htm ) {
	if( child ) child->connect( htm );
	else        child = htm;
}

