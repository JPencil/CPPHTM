/*
 * test.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */
#include "CDocument.h"

#define CURRDOC()    (CDocument::Active())
#define DOCUMENT(id) (*(CDocument::Manager(id)))

#define HTML(id)     (*(CURRDOC()->addTag(id,HTM_TAG_HTML)))



int main( void ) {

	DOCUMENT(1).open();
	HTML(2);



    printf("\n~~ END ~~ \n");
	return 0;
}
