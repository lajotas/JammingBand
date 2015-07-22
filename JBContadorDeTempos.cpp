//
//  ContadorDeTempos.cpp
//  JammingBand
//
//  Created by Lajotas on 16/07/15.
//  Copyright (c) 2015 Lajotas. All rights reserved.
//

#include "JBContadorDeTempos.h"


JBContadorDeTempos::JBContadorDeTempos (int bpmTemp) {
    

   startClock = std::chrono::time_point_cast<std::chrono::milliseconds>(clock::now());
   bpm = bpmTemp;
   duracaoSemicolcheia = bpm * milisegundosPorSegundo / segundosPorMinuto / semicolcheiasPorTempo;
    
   lastSemicolcheiaMillis = 0;
   semicolcheia = 0;
   tempo = 0;
   compasso = 0;
    
    
}

JBContadorDeTempos::~JBContadorDeTempos() {

    
}

long JBContadorDeTempos::getSemicolcheia() {
    
    currentMillis = getCurrentMillis();

    if (currentMillis - lastSemicolcheiaMillis < duracaoSemicolcheia) {
        return semicolcheia;
    }

    semicolcheia++;
    lastSemicolcheiaMillis = currentMillis;
    std::cout << "Semicolcheia: " << semicolcheia << "\n";


    return semicolcheia;

}

long JBContadorDeTempos::getCurrentMillis () {

    auto currentSystemClock = clock::now();
    long diferenca = (currentSystemClock - startClock).count()/1000000;
    
    return diferenca;
    
}
