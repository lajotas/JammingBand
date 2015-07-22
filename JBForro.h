//
//  JBForro.h
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#ifndef __JammingBand__JBForro__
#define __JammingBand__JBForro__

#include <stdio.h>
#include "JBEstilos.h"
#include "JBAcentosEstilo.h"

#define numAcentos 4
#define acentosMax 16

class JBForro {

private:
    
    
public:
    JBForro();
    ~JBForro();
    JBEstilos forro;
    JBEstilos getEstilo();
    
};



#endif /* defined(__JammingBand__JBForro__) */

