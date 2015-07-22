//
//  QuartetoJazz.cpp
//  JammingBand
//
//  Created by Lajotas on 04/07/15.
//
//

#include "JBQuartetoJazz.h"


JBQuartetoJazz::JBQuartetoJazz (JBEstilos estiloQuartetoTemp) : soprista(estiloQuartetoTemp){
   
//   JBEstilos estiloBandaTemp = estiloQuartetoTemp;
//   JBSoprista sopristaTemp (estiloBandaTemp);
//    
//   soprista = sopristaTemp;
   quarteto [0] = &soprista;

}

JBQuartetoJazz::~JBQuartetoJazz () {
    
}

void JBQuartetoJazz::bandaToca() {

    for (int i = 0; i < 1; i++) {

        quarteto[i]->toca();
        
    }
}