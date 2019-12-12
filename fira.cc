#ifndef FIRA_H
#define FIRA_H

#include "fira.h"
#include "cjt_fmgia.hh"
#include "parada.h"
#include "stock.h"
#include "visitant.hh"

#ifndef NO_DIAGRAM
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#endif

typedef vector<parada> passadis;
typedef vector<passadis> fira;

class fira {

private:
  static const int rows = 20;
  static const int cols = 4;
  static const int maxparades = 80;
  fira f(2,vector<parada>(20));
public:
    // CONSTRUCTORS
    fira();

    ~fira();

    // MODIFICADORS
    void entra_stock_parada(id_fmgia n);
    /* Pre: Al CIN td hi ha un nombre n i una llista de n formatges amb les seves dades.*/
    /* Post: Les dades dels formatges queden entrades a la parada del p.i. assignada a la formatgeria. */

    void afegir_parada(adreca_tipus a, fmgia f);
    /* Pre: el p.i. no conte cap parada amb la formatgeria f
     * i a.pass l'adreça es la posicio final d'un passadis existent o be una adreça existent en estat lliure */
    /* Post: s'ha afegit la parada al parametre implicit */

    bool entra_visitant(visitant v);
    /* El visitant v passa a formar part del p.i. amb estat de */
    bool es_posa_a_la_cua(visitant v, parada p);

    // CONSULTORS
	static int mida_max_parades();
    /* Post: el nombre maxim de parades que pot tenir una fira. */

	static int mida_max_passadis();
    /* Post: nombre de parades del passadis més llarg del p.i. */

    int mida_passadissos() const;
    /* Post: Nombre de passadissos del p.i. */

    int mida_passadis(char p) const;
    /* Post: Nombre de parades del passadis p del p.i. */

    int mida_parades() const;
    /* Post: Nombre de parades del p.i. */

    int get_estat_parada(adreça_tipus a) const;
    /* Post: Nombre de parades del p.i. */

    bool get_parada(id_fmgia_tipus id, adreca_tipus& a, estat_tipus& estat);
    /* Post: Si la formatgeria no hi es retorna false
     * altrement retorna true i a te l'adreça de la parada on esta la formatgeria id
     * i estat el seu estat actual. */

    bool get_fmgia(id_fmgia_tipus id, fmgia& f);
    /* Post: Si la formatgeria no hi es retorna false
     * altrement retorna true i a te l'adreça de la parada on esta la formatgeria id
     * i estat el seu estat actual. */

    bool get_stock(id_fmgia_tipus id, stock& s);
    /* Post: Si la formatgeria no hi es retorna false
     * altrement retorna true i s te l'stock actual de la formatgeria. */

    // LECTURA I ESCRIPTURA

    void llegeix_i_inialitza_fira(){
    /* Pre: Preparats al CIN std ...  */
    /* Post: ... */
      int numparades;
      cin >> numparades;
      int i = 0;
      string casa;
      int passadis, numero;
      while(i < numparades){

        parada()
      }
    }
    void escriu_fira() const;
    /* Post: S'han escrit pel COUT std les parades dl p.i. per passadissos i dins de cada passadis per numero de parada.
     * Els passadissos s'han de pintar verticals amb els nombres correlatius de dalt a baix, amb els nombres senar a l'esquerra i els parells a la dreta. */

    void escriu_passadis(int p) const;
    /* Post: S'han escrit pel COUT std les parades dl passadis p del p.i. cadascuna amb els seus formatges i existencies de cadascun. */
};

#endif
