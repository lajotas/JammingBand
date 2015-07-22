//
//  JBAcentosEstilo.cpp
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#include "JBAcentosEstilo.h"


JBAcentosEstilo::JBAcentosEstilo (int* acentosEstilo) { // Pega o array esticado em apenas uma dimensão

    // inicializa o array
    for (int linha = 0; linha < numAcentos; linha++) {
        for (int coluna = 0; coluna < acentosMax; coluna++) {
            arrayAcentos[linha][coluna] = 0;
        }
    }
    
    
    // Copia o array
    for (int linha = 0; linha < numAcentos; linha++) {
        for (int coluna = 0; coluna < acentosMax; coluna++) {
            arrayAcentos[linha][coluna] = acentosEstilo[linha * acentosMax + coluna];
            if (!arrayAcentos[linha][coluna]) coluna = acentosMax;
        }
    }
    log();
}

JBAcentosEstilo::JBAcentosEstilo() {
    
    // inicializa o array
    for (int linha = 0; linha < numAcentos; linha++) {
        for (int coluna = 0; coluna < acentosMax; coluna++) {
            arrayAcentos[linha][coluna] = 0;
        }
    }
    
    
}

JBAcentosEstilo::~JBAcentosEstilo() {
    
}

int JBAcentosEstilo::getAcento(int tipo, int index) {
    
    return arrayAcentos [tipo][index];
    
}

void JBAcentosEstilo::log() {
    
    for (int linha = 0; linha < numAcentos; linha++) {
        std::cout << "\n";
        for (int coluna = 0; coluna < acentosMax; coluna++) {
               std::cout << arrayAcentos[linha][coluna] << ", ";
            if (!arrayAcentos[linha][coluna]) return;
        }
    }
}