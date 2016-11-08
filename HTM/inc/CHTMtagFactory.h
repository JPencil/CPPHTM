/*
 * CHTMtagFactory.h
 *
 *  Created on: 8 Nov 2016
 *      Author: jpencil
 */

#ifndef HTM_INC_CHTMTAGFACTORY_H_
#define HTM_INC_CHTMTAGFACTORY_H_

#include "CHTM.h"
#include "CHTMsection.h"

class CHTMtagFactory {
private:
	static CHTMtagFactory* sInstance;
protected:
	CHTMtagFactory();

public:
	static CHTMtagFactory* Factory( );
	CHTM   create( htmTag_t tag );
	virtual ~CHTMtagFactory();
};

#endif /* HTM_INC_CHTMTAGFACTORY_H_ */
