/*
 * CHTMleaf.h
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#ifndef HTM_INC_CHTMLEAF_H_
#define HTM_INC_CHTMLEAF_H_

#include "CHTM.h"

class CHTMleaf : public CHTM {
protected:

public:
	CHTMleaf( htmTag_t tag );
	virtual ~CHTMleaf();
};

#endif /* HTM_INC_CHTMLEAF_H_ */
