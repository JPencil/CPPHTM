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
	static CHTM*   sChain;
	static CHTM*   sNext;
	static tagID_t sGenID;

protected:
	tagID_t  ID;
	CHTM*    next;
	htmTag_t tag;
	CHTM( htmTag_t tag );
	const char* strTag( htmTag_t tag );

public:
	virtual CHTM print( );
	virtual ~CHTM();

};

#endif /* HTM_INC_CHTM_H_ */
