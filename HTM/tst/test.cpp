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


    printf("\n~~ END ~~ \n");
	return 0;
}
