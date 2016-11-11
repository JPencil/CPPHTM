/*
 * test.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */


#include "CHTM.h"

#if 0
#define BUILDER           CHTMbuilder::Builder()

#define DOCUMENT(ttl)  ( (BUILDER->open(ttl)) )
#define HTML(attr)     ( (BUILDER->make( HTM_TAG_HTML ) ) )
#define HEAD(attr)     ( (BUILDER->make( HTM_TAG_HEAD ) ) )
#define BODY(attr)     ( (BUILDER->make( HTM_TAG_BODY ) ) )

#endif

int main( void ) {

#if 0
	DOCUMENT("test");
	HTML(0);
	HEAD(0);
#endif
    printf("\n~~ END ~~ \n");
	return 0;
}
