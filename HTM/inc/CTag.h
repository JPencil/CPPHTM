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
	static CTag*   sHead;
	static CTag*   sTail;
	static CTag*   sStack;

protected:
	userID_t       ID;
	htmTag_t       tag;
	CTag*          chain;
	CTag*          fifo;
	CTag*          parent;

	CTag* pop();
	void  push( CTag* htm );
	const char* htmlTag( );
	CTag* find( userID_t id );
	CTag( htmTag_t tag, userID_t id );

public:
	static CTag* Make( htmTag_t tag, userID_t id );
	CTag  print();
	CTag  open();
	CTag  close();
	virtual ~CTag();

	void printParent();

};

#endif /* HTM_INC_CTAG_H_ */
