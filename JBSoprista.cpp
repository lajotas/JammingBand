//
//  Soprista.cpp
//  JammingBand
//
//  Created by Lajotas on 06/07/15.
//
//

#include "JBSoprista.h"


JBSoprista::JBSoprista (JBEstilos estiloTempSoprista) : solistaSopros(estiloTempSoprista){
    
}


void JBSoprista::toca() {
    
    solistaSopros.sola();
    
}
