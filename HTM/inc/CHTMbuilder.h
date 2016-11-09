/*
 * CHTMbuilder.h
 *
 *  Created on: 9 Nov 2016
 *      Author: admin
 */

#ifndef HTM_INC_CHTMBUILDER_H_
#define HTM_INC_CHTMBUILDER_H_

#include "CHTMdoc.h"
#include "CHTMsec.h"

class CHTMbuilder {
private:
	static CHTMbuilder* sInst;
	static CHTMdoc* sDocs;
	static CHTMdoc* sLast;

protected:
	tagID_t   docId;
	CHTMbuilder();

public:
	static CHTMbuilder* Builder();
	CHTMdoc* init( const char* ttl );
	CHTM*    make( htmTag_t tag );
	virtual ~CHTMbuilder();

};

#endif /* HTM_INC_CHTMBUILDER_H_ */
