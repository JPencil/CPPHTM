/*
 * CHTM.h
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#ifndef HTM_INC_CHTM_H_
#define HTM_INC_CHTM_H_

#include "HTMinclude.h"

class CHTM {
friend class CHTMbuilder;

private:
	static CHTM*   sHTMchain;
	static CHTM*   sHTMnext;
	static tagID_t sHTMgenID;
	static void Initialize( CHTM* htm );

protected:
	tagID_t  ID;
	CHTM*    chain;
	CHTM*    next;
	htmTag_t tag;
	char*    strTag( htmTag_t tag );

public:
	CHTM( htmTag_t tag );
	virtual CHTM print( );
	virtual ~CHTM();

	static void  Print( );
	static CHTM* Document();
};

#endif /* HTM_INC_CHTM_H_ */
