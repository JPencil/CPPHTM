/*
 * CHTMsection.h
 *
 *  Created on: 8 Nov 2016
 *      Author: jpencil
 */

#ifndef HTM_INC_CHTMSECTION_H_
#define HTM_INC_CHTMSECTION_H_

#include "CHTM.h"

class CHTMsection : public CHTM {
protected:
	CHTM*   child;

public:
	CHTMsection( htmTag_t tag );
	virtual CHTM add(  );
	virtual CHTM print( );
	virtual ~CHTMsection();
};

#endif /* HTM_INC_CHTMSECTION_H_ */
