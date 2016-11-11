/*
 * CHTMsec.h
 *
 *  Created on: 9 Nov 2016
 *      Author: admin
 */

#ifndef HTM_INC_CHTMSEC_H_
#define HTM_INC_CHTMSEC_H_

#include "CHTM.h"

class CHTMsec : public CHTM {

private:

protected:
	const char* name;
	CHTM*       content;
	CHTMsec( htmTag_t tag );

public:
	virtual ~CHTMsec();
	virtual CHTM* add( CHTM* htm );
	virtual CHTM* find( tagID_t id );
	        CHTM* find( const char* str );
};

#endif /* HTM_INC_CHTMSEC_H_ */
