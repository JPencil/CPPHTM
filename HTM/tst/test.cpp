/*
 * test.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */


#include "CHTMbuilder.h"

#define HTML_BUILDER     (CHTMbuilder::Builder())

#define SET_DOC( ttl )   ( HTML_BUILDER->initialize( new CHTMdoc(ttl) ) )
#define GET_DOC( doc )   ( doc = (CHTMdoc*)CHTM::Document() )

#define HTML(attr)       ( HTML_BUILDER->create(HTM_TAG_HTML) )
#define HEAD(attr)       ( HTML_BUILDER->create(HTM_TAG_HEAD) )
#define BODY(attr)       ( HTML_BUILDER->create(HTM_TAG_BODY) )

int main( void ) {
	CHTMdoc* doc;

	SET_DOC("Title");
	HTML(0);
	HEAD(0);
	BODY(0);
	GET_DOC(doc);

	doc->print();

    printf("\n\n");
	return 0;
}
