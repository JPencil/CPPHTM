/*
 * CHTMcomposite.h
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#ifndef HTM_INC_CHTMCOMPOSITE_H_
#define HTM_INC_CHTMCOMPOSITE_H_

#include "CHTM.h"

class CHTMcomposite : public CHTM {
protected:
	CHTM*          child;
	CHTMcomposite( htmTag_t tag );

public:
	virtual void add( CHTM* htm );
	virtual ~CHTMcomposite();
};

#endif /* HTM_INC_CHTMCOMPOSITE_H_ */
