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
private:
	static CHTM* sHTMchain;
	void connect( CHTM* htm );

protected:
	htmTag_t   tag;
	CHTM*      chain;
	CHTM*      next;
	CHTM( htmTag_t tag );
	char*  strTag( htmTag_t tag );

public:
    void   link( CHTM* htm );
	virtual CHTM print( );
	virtual ~CHTM();
};

#endif /* HTM_INC_CHTM_H_ */
