/*
 * CDocument.h
 *
 *  Created on: 4 Dec 2016
 *      Author: admin
 */

#ifndef HTM_INC_CDOCUMENT_H_
#define HTM_INC_CDOCUMENT_H_

#include "CTag.h"

class CDocument {
private:
	static CDocument* sHead;
	static CDocument* sTail;
	static CDocument* sFifo;

protected:
	docID_t    did;
	CDocument* chain;
	CDocument* fifo;

	CTag*      tags;
	CTag*      last;
	CTag*      stack;

	void  push( CTag* tag );
	CTag* pop();

public:
	CDocument( docID_t did );
	CTag* addTag( tagID_t tid, usrID_t uid );
	CTag* findTag( tagID_t tid );
	virtual ~CDocument();
};

#endif /* HTM_INC_CDOCUMENT_H_ */
