//
//  JBSolista.cpp
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#include "JBSolista.h"


JBSolista::JBSolista (JBEstilos estiloTempSolista) : contaTempos (60) {
    
    estiloSolista = estiloTempSolista;
    lastSemicolcheia = 0;

}


void JBSolista::sola() {
    
    long semicolcheiaAtual = contaTempos.getSemicolcheia();
    if (semicolcheiaAtual == lastSemicolcheia) return;
    
    lastSemicolcheia = semicolcheiaAtual;
    
    std::cout << estiloSolista.getAcentoEstilo (0, 0) << "\n";
    
}
