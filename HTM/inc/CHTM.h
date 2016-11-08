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

protected:
	htmTag_t   tag;
	CHTM*      chain;
	CHTM*      next;
	void connect( CHTM* htm );
	virtual void out( );
public:
	CHTM( htmTag_t tag );
	virtual ~CHTM();
};

#endif /* HTM_INC_CHTM_H_ */
