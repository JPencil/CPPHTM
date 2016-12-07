/*
 * CTAG.h
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#ifndef HTM_INC_CTAG_H_
#define HTM_INC_CTAG_H_

#include "HTMinclude.h"

class CTag {
private:

protected:
	usrID_t  uid;
	tagID_t  tid;
	CTag*    chain;
	CTag*    fifo;
	CTag*    parent;

	const char* htmlTag( );
	CTag* find( usrID_t id );
	CTag( tagID_t tid, usrID_t uid );

	void  setParent( CTag* tag );
    CTag* connect( CTag* tag );

public:
	CTag  print();
	CTag  open();
	CTag  close();
	virtual ~CTag();

	void printParent();

};

#endif /* HTM_INC_CTAG_H_ */
