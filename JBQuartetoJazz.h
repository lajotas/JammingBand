//
//  QuartetoJazz.h
//  JammingBand
//
//  Created by Lajotas on 04/07/15.
//
//

#ifndef __JammingBand__QuartetoJazz__
#define __JammingBand__QuartetoJazz__

#include <stdio.h>
#include "JBSoprista.h"
#include "JBBanda.h"
#include "JBMusico.h"
#include "JBEstilos.h"

//class Baterista;
//class Baixista;
//class Pianista;
class JBSoprista;
class JBMusico;

class JBQuartetoJazz : public JBBanda {
    
private:
    
    
//    Baterista baterista
//    Baixista baixista
//    Pianista pianista
    JBMusico* quarteto[4];
    JBSoprista soprista;

    
    
public:
    
    JBQuartetoJazz (JBEstilos estiloQuarteto);
    ~JBQuartetoJazz();
    void bandaToca();
    
};

#endif /* defined(__JammingBand__QuartetoJazz__) */
