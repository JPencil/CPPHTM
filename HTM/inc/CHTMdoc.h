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

protected:
	const char* docName;
	CHTM*       htmTags;

public:
	CHTMdoc( const char* docName );
	virtual ~CHTMdoc();
};

#endif /* HTM_INC_CHTMDOC_H_ */
