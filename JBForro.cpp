//
//  JBForro.cpp
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#include "JBForro.h"

JBForro::JBForro()


{
    
    
    // Define os acentos do estilo
    
    int acentosForro[numAcentos][acentosMax] = { // 0 é o EOF
    

        {1, 4, 9, 12, 0},  // Graves
        {7, 15, 0},        // Médios
        {3, 7, 11, 15, 0}, // Agudos
        {2, 4, 6, 8, 10, 12, 14, 16, 0}  // Secundários

    };

    // To do: Harmonia, modos / escala, etc
    
    // Coloca os acentos no objeto
    JBAcentosEstilo acentosEstiloForroTemp ((int*) acentosForro);
    
    // Cria o estilo
    JBEstilos forroTemp (acentosEstiloForroTemp);
    forro = forroTemp;
    
}


JBForro::~JBForro() {
    
    
}

JBEstilos JBForro::getEstilo(){
    
    return forro;
    
}
