/*
 * test.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */
#include "CHTM.h"

#define HTML( attr ) (*( new CHTM(HTM_TAG_HTML) ) )
#define HEAD( attr ) (*( new CHTM(HTM_TAG_HEAD) ) )
#define BODY( attr ) (*( new CHTM(HTM_TAG_BODY) ) )

int main( void ) {

	CHTM *doc = &HTML(0);
	HEAD(0);
	BODY(0);
	BODY(0);
	BODY(0);

	doc->print();


    printf("\n~~ END ~~ \n");
	return 0;
}
