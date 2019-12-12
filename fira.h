//Nicolás Clariana Basi: 48109799D
//Marc García Beseran: 21779143Y

#include "parada.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>

using namespace std;


class fira {

private:
  static int maxparades = 80;
  map<string,parada> fira;

public:
    //Constructors
    fira();
    //pre: cert
    //post: el resultat es un map amb clau buida i un struct buit.
    fira(map<string,parada> fira)
    //pre: cert
    //post: el resultat es una fira amb identificador i una parada
    ~fira();
    //Post: esborra automaticament els objectes locals en sortir d'un ambit de visibilitat

    //Modificadors
    void afeigirParada(string lloc, parada a);
    //pre: lloc correspon a un passadis i numero on no n'hi ha una parada anteriorment
    //pre: a es una parada valida.
    //post: la parada s'afeigeix a la fira amb la clau id.
}
