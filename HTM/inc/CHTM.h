/*
 * CHTM.h
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#ifndef HTM_INC_CHTM_H_
#define HTM_INC_CHTM_H_

#include "HTMinclude.h"

class CHTM {
private:
	static CHTM*   sHead;
	static CHTM*   sTail;

protected:
	htmTag_t       tag;
	CHTM*          chain;

	const char* strTag(  );

public:
	CHTM( htmTag_t tag );
	CHTM  print();
	virtual ~CHTM();

};

#endif /* HTM_INC_CHTM_H_ */
