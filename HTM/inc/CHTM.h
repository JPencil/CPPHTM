/*
 * CHTM.h
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#ifndef HTM_INC_CHTM_H_
#define HTM_INC_CHTM_H_

#include "HTMinclude.h"

class CHTM {
private:
	static CHTM*   sHead;
	static CHTM*   sTail;
	static CHTM*   sStack;

protected:
	userID_t       ID;
	htmTag_t       tag;
	CHTM*          chain;
	CHTM*          fifo;
	CHTM*          parent;

	CHTM* pop();
	void  push( CHTM* htm );
	const char* htmlTag( );
	CHTM* find( userID_t id );
	CHTM( htmTag_t tag, userID_t id );

public:
	static CHTM* Make( htmTag_t tag, userID_t id );
	CHTM  print();
	CHTM  open();
	CHTM  close();
	virtual ~CHTM();

	void printParent();

};

#endif /* HTM_INC_CHTM_H_ */
