/*
 * test.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */


#include "CHTMbuilder.h"

#define BUILDER        CHTMbuilder::Builder()

#define DOCUMENT(ttl)  ( (BUILDER->init( ttl ) ) )
#define HTML(attr)     ( (BUILDER->make( HTM_TAG_HTML ) ) )
#define HEAD(attr)     ( (BUILDER->make( HTM_TAG_HEAD ) ) )
#define BODY(attr)     ( (BUILDER->make( HTM_TAG_BODY ) ) )

int main( void ) {

	DOCUMENT("test");
	HTML(0);
	HEAD(0);

	DOCUMENT("test")->print();


    printf("\n~~ END ~~ \n");
	return 0;
}
