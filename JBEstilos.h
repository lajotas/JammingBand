//
//  JBEstilos.h
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#ifndef __JammingBand__JBEstilos__
#define __JammingBand__JBEstilos__

#include <stdio.h>
#include <iostream>

#include "JBAcentosEstilo.h"



class JBEstilos {

private:
    JBAcentosEstilo acentosEstilo;


public:
    
    JBEstilos (JBAcentosEstilo acentosEstilo);
    ~JBEstilos();
    JBEstilos ();
    int getAcentoEstilo (int tipo, int index);
    
    
};


#endif /* defined(__JammingBand__JBEstilos__) */
