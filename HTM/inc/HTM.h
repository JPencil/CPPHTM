/*
 * HTM.h
 *
 *  Created on: 6 Nov 2016
 *      Author: admin
 */

#ifndef HTM_INC_HTM_H_
#define HTM_INC_HTM_H_

#include "CHTM.h"
#include "CHTMtagFactory.h"

#define HTM_TAG_FACTORY( tag ) (CHTMtagFactory::Factory()->create( tag ))

#define HTML( att )   (*((CHTMsection*)HTM_TAG_FACTORY( HTM_TAG_HTML )))
#define HEAD( att )   (*((CHTMsection*)HTM_TAG_FACTORY( HTM_TAG_HEAD )))
#define BODY( att )   (*((CHTMsection*)HTM_TAG_FACTORY( HTM_TAG_BODY )))

#endif /* HTM_INC_HTM_H_ */
