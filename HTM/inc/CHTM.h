/*
 * CHTM.h
 *
 *  Created on: 6 Nov 2016
 *      Author: JPencil
 */

#ifndef HTM_INC_CHTM_H_
#define HTM_INC_CHTM_H_

#include "HTMinclude.h"

typedef enum {
	eHtmRoot=0,
	eHtmBranch,
	eHtmLeaf
} htmComp_t;

class CHTM {
private:
	static CHTM*   sChain;
	static CHTM*   sNext;
	static tagID_t sGenID;

protected:
	tagID_t   id;
	htmTag_t  tag;
	htmComp_t comp;
	CHTM*     chain;
	CHTM*     list;

	CHTM( htmTag_t tag, htmComp_t comp  );
	const char* strTag( htmTag_t tag );

public:
	tagID_t ID();
	virtual CHTM* link( CHTM* htm );
	virtual CHTM* find( tagID_t id );
	virtual CHTM* print();
	virtual ~CHTM();

};

#endif /* HTM_INC_CHTM_H_ */
