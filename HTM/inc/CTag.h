/*
 * CTAG.h
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#ifndef HTM_INC_CTAG_H_
#define HTM_INC_CTAG_H_

#include "CHTM.h"

class CTag : public CHTM {
friend class CDocument;

private:

protected:
	usrID_t    uid;
	tagID_t    tid;
	CTag*      chain;
	CTag*      next;
	CHTM*      doc;

	CTag( usrID_t uid, tagID_t tid, CHTM* doc );

	const char* htmlTag( );
	CTag* find( usrID_t id );

	void  setParent( CTag* tag );
    CTag* connect( CTag* tag );

public:

    CTag  open();

	CTag  print();
	virtual ~CTag();

	void printParent();

};

#endif /* HTM_INC_CTAG_H_ */
