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

protected:
	CHTM*      next;
	htmTag_t   tag;

	CHTM( htmTag_t tag );
public:
	void connect( CHTM* htm );
	virtual void print( int out );
	virtual ~CHTM();
};

#endif /* HTM_INC_CHTM_H_ */
