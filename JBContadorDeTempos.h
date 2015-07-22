//
//  ContadorDeTempos.h
//  JammingBand
//
//  Created by Lajotas on 16/07/15.
//  Copyright (c) 2015 Lajotas. All rights reserved.
//

#ifndef __JammingBand__JBContadorDeTempos__
#define __JammingBand__JBContadorDeTempos__

#include <stdio.h>
#include <iostream>
#include <chrono>

#define semicolcheiasPorTempo 4
#define milisegundosPorSegundo 1000
#define segundosPorMinuto 60


class JBContadorDeTempos {
    
    using clock             = std::chrono::steady_clock;
    using time_point_type   = std::chrono::time_point < clock, std::chrono::milliseconds >;
    
private:
    time_point_type startClock;

    long semicolcheia;
    int tempo;
    int compasso;
    int bpm;
    int duracaoSemicolcheia;
    long currentMillis;
    long lastSemicolcheiaMillis;



    
public:
    
    JBContadorDeTempos(int bpmTemp);
    ~JBContadorDeTempos();
    long getSemicolcheia();
    int getTempo();
    long getCompasso();
    long getCurrentMillis();
    
};



#endif /* defined(__JammingBand__ContadorDeTempos__) */
