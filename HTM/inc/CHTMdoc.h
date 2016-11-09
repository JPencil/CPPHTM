/*
 * CHTMdoc.h
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#ifndef HTM_INC_CHTMDOC_H_
#define HTM_INC_CHTMDOC_H_

#include "CHTM.h"

class CHTMdoc : public CHTM {
private:
	static CHTMdoc* sChain;
	virtual void connect( CHTM* htm );

protected:
	CHTMdoc*    chain;
	CHTM*       htmTags;

public:
	CHTMdoc( );
	virtual ~CHTMdoc();
};

#endif /* HTM_INC_CHTMDOC_H_ */
