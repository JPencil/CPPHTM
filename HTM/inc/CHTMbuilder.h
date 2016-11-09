/*
 * CHTMbuilder.h
 *
 *  Created on: 9 Nov 2016
 *      Author: jpencil
 */

#ifndef HTM_INC_CHTMBUILDER_H_
#define HTM_INC_CHTMBUILDER_H_

#include "CHTMdoc.h"

class CHTMbuilder {
private:
	static CHTMbuilder* sInst;

protected:
	CHTMdoc*  doc;
	CHTMbuilder( );

public:
	static CHTMbuilder* Builder( );
	void initialize( CHTMdoc* doc );
	CHTM* create( htmTag_t tag );
	virtual ~CHTMbuilder();
};

#endif /* HTM_INC_CHTMBUILDER_H_ */
