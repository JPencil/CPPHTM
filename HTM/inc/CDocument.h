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

protected:
	CTag* head;
	CTag* tail;
	CTag* stack;

	void  push( CTag* tag );
	CTag* pop();

public:
	CDocument();
	CTag* addTag( tagID_t tid, userID_t uid );
	CTag* findTag( tagID_t tid );
	virtual ~CDocument();
};

#endif /* HTM_INC_CDOCUMENT_H_ */
