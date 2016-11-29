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
	CHTMsec( htmTag_t tag );

public:
	virtual ~CHTMsec();
};

#endif /* HTM_INC_CHTMSEC_H_ */
