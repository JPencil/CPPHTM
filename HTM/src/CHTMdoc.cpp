/*
 * CHTMdoc.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#include "CHTMdoc.h"

CHTMdoc::CHTMdoc( const char* title )
       : CHTM( HTM_TAG_DOCT ){
	this->title    = title;
	this->docChain = NULL;
	this->content  = NULL;
}

CHTM* CHTMdoc::find( tagID_t id ) {
	if( CHTM::ID() == id ) return this;
	else
		if( docChain ) return docChain->find(id);
	return NULL;
}

CHTM* CHTMdoc::find( const char* ttl ) {
	if( !strcmp(ttl,title) )  return this;
	else
		if( docChain ) return docChain->find(ttl);
	return NULL;
}

CHTM* CHTMdoc::add( CHTM* htm ) {
	if( content ) content->link( htm );
	else          content = htm;
	return htm;
}

CHTM* CHTMdoc::print( ) {
	printf("\n%s", strTag( tag ) );
	if( content ) content->print();
	return this;
}

CHTMdoc::~CHTMdoc() {
}

