/*
 * CDocument.h
 *
 *  Created on: 4 Dec 2016
 *      Author: admin
 */

#ifndef HTM_INC_CDOCUMENT_H_
#define HTM_INC_CDOCUMENT_H_

#include "CTag.h"

class CDocument : public CHTM {
private:
	static CDocument* sHead;
	static CDocument* sTail;
	static CDocument* sCurr;

protected:
	docID_t    did;
	CDocument* chain;

	CTag*      tags;
	CTag*      last;
	CTag*      fifo;

	CDocument* find( docID_t did );

	void  push( CTag* tag );
	CTag* pop();

public:
	static CDocument* Active( );
	static CDocument* Manager( docID_t did );
	CDocument( docID_t did );

	CDocument open();
	CTag* addTag( usrID_t uid , tagID_t tid);
	CTag* findTag( usrID_t uid );
	virtual ~CDocument();
};

#endif /* HTM_INC_CDOCUMENT_H_ */
