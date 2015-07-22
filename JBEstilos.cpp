//
//  JBEstilos.cpp
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#include "JBEstilos.h"



// Construtor
JBEstilos::JBEstilos(JBAcentosEstilo acentosTemp){

 acentosEstilo = acentosTemp;

}


JBEstilos::~JBEstilos(){
    
}

JBEstilos::JBEstilos() {
    
}


int JBEstilos::getAcentoEstilo (int tipo, int index) {

    return acentosEstilo.getAcento (tipo, index);
    
}
