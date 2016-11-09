/*
 * CHTMsection.h
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#ifndef HTM_INC_CHTMSECTION_H_
#define HTM_INC_CHTMSECTION_H_

#include "CHTM.h"

class CHTMsection : public CHTM {
private:

protected:

public:
	CHTMsection( htmTag_t tag );
	virtual CHTM print( );
	virtual ~CHTMsection();
	CHTMsection text( char* );
	CHTMsection attribute( char* );
};

#endif /* HTM_INC_CHTMSECTION_H_ */
