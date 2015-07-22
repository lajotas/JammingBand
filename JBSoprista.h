//
//  Soprista.h
//  JammingBand
//
//  Created by Lajotas on 06/07/15.
//
//

#ifndef __JammingBand__Soprista__
#define __JammingBand__Soprista__

#include <stdio.h>
#include "JBMusico.h"
#include "JBSolista.h"
#include "JBEstilos.h"

#define flauta 74


class JBSolista;

class JBSoprista : public JBMusico {
    
private:
    JBSolista solistaSopros;

public:

    JBSoprista (JBEstilos estiloTempSoprista);
 //   JBSoprista();
    void toca();

};


#endif /* defined(__JammingBand__Soprista__) */
