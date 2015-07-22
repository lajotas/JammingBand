//
//  JBSolista.h
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#ifndef __JammingBand__JBSolista__
#define __JammingBand__JBSolista__

#include <stdio.h>
#include <iostream>
#include "JBEstilos.h"
#include "JBContadorDeTempos.h"

class JBSolista {
  
private:
    JBEstilos estiloSolista;
    JBContadorDeTempos contaTempos;
    long lastSemicolcheia;
    
    
public:
    JBSolista(JBEstilos estiloTempSolista); // Não consegui passar o int instrumento!!
    void sola();
    
};


#endif /* defined(__JammingBand__JBSolista__) */
