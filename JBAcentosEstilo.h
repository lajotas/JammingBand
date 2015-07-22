//
//  JBAcentosEstilo.h
//  JammingBand
//
//  Created by Lajotas on 08/07/15.
//
//

#ifndef __JammingBand__JBAcentosEstilo__
#define __JammingBand__JBAcentosEstilo__

#include <stdio.h>
#include <iostream>

#define numAcentos 4
#define acentosMax 16



class JBAcentosEstilo {
    
private:
    int arrayAcentos [numAcentos][16];
    
    
public:
    JBAcentosEstilo (int* acentosEstilo);
    JBAcentosEstilo ();
    ~JBAcentosEstilo();
    int getAcento (int tipo, int index);
    void log();
    
};

#endif /* defined(__JammingBand__JBAcentosEstilo__) */
