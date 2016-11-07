/*
 * CHTM.cpp
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#include "CHTM.h"

CHTM::CHTM( htmTag_t tag ) {
	this->next = NULL;
	this->tag  = tag;
}

void CHTM::connect( CHTM* htm ) {

}

CHTM::~CHTM() {
}

