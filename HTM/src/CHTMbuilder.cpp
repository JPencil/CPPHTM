/*
 * CHTMbuilder.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: admin
 */

#include "CHTMbuilder.h"

CHTMbuilder* CHTMbuilder::sInst = NULL;
CHTMdoc* CHTMbuilder::sDocs = NULL;
CHTMdoc* CHTMbuilder::sLast = NULL;

CHTMbuilder::CHTMbuilder() {
}

CHTMbuilder* CHTMbuilder::Builder() {
	if( !sInst ) sInst = new CHTMbuilder();
	return sInst;
}

CHTMdoc* CHTMbuilder::init( const char* ttl ) {
	CHTMdoc* doc = sDocs ? (CHTMdoc*)sDocs->find( ttl ) : NULL;
	if( !doc )  {
		doc = new CHTMdoc(ttl);
		if( sLast ) sLast->docChain = doc;
		else        sDocs = doc;
		sLast = doc;
	}
	docId = doc->ID();
	return doc;
}

CHTM* CHTMbuilder::make( htmTag_t tag ) {
	CHTMdoc* doc = (CHTMdoc*)sDocs->find(docId);
	CHTM*    htm = NULL;
	if( doc ) {
	    htm = new CHTMsec( tag );
		doc->add( htm );
	}
	return htm;
}

CHTMbuilder::~CHTMbuilder() {
}

