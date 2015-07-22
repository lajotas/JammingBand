
#include "JBQuartetoJazz.h"
#include "JBForro.h"

//========================================================================
int main( ){


    // Setup //
   

    // Define o estilo
    JBForro forroMain;
    
    // Pega uma cópia do estilo criado
    JBEstilos estiloMain = forroMain.getEstilo();

    // Cria a banda a partir do estilo
    JBQuartetoJazz banda (estiloMain);
    
    // Loop
    
    while (true) {
        
        banda.bandaToca();

    }

}
