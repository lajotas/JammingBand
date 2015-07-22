//
//  JBMusico.h
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#ifndef __JammingBand__JBMusico__
#define __JammingBand__JBMusico__

#include <stdio.h>


class JBMusico {
public:
    virtual void toca() = 0;
//    virtual void listen(Musician& other) = 0;
    virtual ~JBMusico() {}

};




#endif /* defined(__JammingBand__JBMusico__) */

