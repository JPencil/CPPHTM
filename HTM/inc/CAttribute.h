/*
 * CAttribute.h
 *
 *  Created on: 4 Dec 2016
 *      Author: admin
 */

#ifndef HTM_INC_CATTRIBUTE_H_
#define HTM_INC_CATTRIBUTE_H_

class CAttribute {
private:

protected:
	CAttribute* chain;
	attID_t     attr;
	char*       value;

public:
	CAttribute();
	virtual ~CAttribute();
};

#endif /* HTM_INC_CATTRIBUTE_H_ */
