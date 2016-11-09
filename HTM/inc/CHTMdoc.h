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
friend class CHTMbuilder;

private:
	CHTMdoc*    docChain;

protected:
	const char* title;
	CHTM*       content;
	CHTMdoc( const char* title );

public:
	virtual CHTM* add( CHTM* htm );

	virtual CHTM* find( tagID_t id );
	        CHTM* find( const char* ttl );

	virtual CHTM* print( );

	virtual ~CHTMdoc();
};

#endif /* HTM_INC_CHTMDOC_H_ */
