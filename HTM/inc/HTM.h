/*
 * HTM.h
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#ifndef HTM_INC_HTM_H_
#define HTM_INC_HTM_H_

#include "CHTM.h"

#define HTML(attr)  (new CHTM("html"))
#define HEAD(attr)  (new CHTM("head"))
#define BODY(attr)  (new CHTM("body"))
#define H1(attr)    (new CHTM("h1"))
#define H2(attr)    (new CHTM("h2"))

#define HTMLPRINT()  CHTM::Print()


#endif /* HTM_INC_HTM_H_ */
