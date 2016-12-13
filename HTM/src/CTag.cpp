/*
 * CTag.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#include "CTag.h"

static const char* sTags[] = {
		"!DOCTYPE html",
		"html",
		"head",
		"body",
		"h1",
		"h2",
		"h3",
		 NULL
};

CTag::CTag( usrID_t uid, tagID_t tid, CHTM* doc  ) {
	this->uid    = uid;
	this->tid    = tid;
	this->chain  = NULL;
	this->next   = NULL;
	this->doc    = doc;

	::Print("\nTag %d created...", uid);
}

CTag* CTag::find( usrID_t uid ) {
	if( this->uid == uid ) return this;
	else {
		if( chain ) return chain->find( uid );
		else        return NULL;
	}
}

CTag* CTag::connect( CTag* tag ) {
	if( chain ) chain->connect( tag );
	else        chain = tag;
	return tag;
}

CTag CTag::print() {
	printf("\n%s", htmlTag() );
	if( chain ) chain->print();
	return *this;
}


const char* CTag::htmlTag( ) {
	return sTags[ tid ];
}

CTag::~CTag() {

}
