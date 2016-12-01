/*
 * test.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */
#include "CHTM.h"

#define CREATE(tag,id) (*(CHTM::Make(tag,id)))

#define HTML( id ) (CREATE(HTM_TAG_HTML,id))
#define HEAD( id ) (CREATE(HTM_TAG_HEAD,id))
#define BODY( id ) (CREATE(HTM_TAG_BODY,id))
#define H1( id )   (CREATE(HTM_TAG_H1,id))
#define H2( id )   (CREATE(HTM_TAG_H2,id))

#define PRINT(id)  (CREATE(0,id)).print()

int main( void ) {

	HTML(0).open();
		HEAD(1).open();
			H1(2).open();
				H2(6);
			H1(2).close();
		HEAD(1).close();
		BODY(3).open();
			H2(4);
		BODY(3).close();
	HTML(0).close();

	PRINT(0);

#if 1
	HEAD(1).printParent();
	BODY(2).printParent();
	BODY(3).printParent();
	BODY(4).printParent();
	BODY(6).printParent();
#endif



    printf("\n~~ END ~~ \n");
	return 0;
}
