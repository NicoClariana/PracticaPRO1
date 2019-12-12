#ifndef PARADA_H
#define PARADA_H

#include <fmgia.h>
#include <stock.h>
#include <visitant.h>

typedef enum { buida, tancada, oberta } estat_tipus;
typedef struct {
  char passadis; // passadis que es una lletra de la 'A' a la 'Z'
  int num;       // numero dins els passadis
} adreca_tipus;

class parada {
  /* Tipus de mÃ²dul: Dades.
   * DescripciÃ³: Les caracteristiques d'una parada incloent tots els seus formatges i la quantitat disponible de cadascun.
  */
private:
  ...
  /*
  Invariant de la representacio:
      ...
  */
public:
  // CONSTRUCTORS
  parada();
  parada(string casa, adreca_tipus adr);
  ~parada();

  // MODIFICADORS
  int set_unitats(int n);

  bool obra_parada();

  void entra_client(visitant);
  /* El visitant passa a estar el darrer de la cua */

  bool serveix_client();
  /* Pre: el Client es el primer de la cua.
   * Post: Si el client tenia una comanda preparada i la parada tenia existencies per satisferla aleshores retorna true i la bossa del client passa a sumar la comanda i la parada la resta altrement no es produeix el servei i retorna false. */

  void entra_stock(stock s);
  /* Pre: La parada es buida.
   * Post: El stock de formatges del p.i. coincideix amb s. */

  bool tanca_parada();
  /* Pre:  La cua de la parada esta buida.
   * Post: El estat del p.i. passa a valdre tancada. */

   // CONSULTORS

  estat_tipus get_estat();
  /* Post: estat del p.i. */

  stock get_stock();
  /* stock del p.i. */


  // ENTRADA SORTIDA

  void escriu_fmgs() const;
  /* Post: Escriu pel COUT std el stock de formatges del p.i. cada formatge amb el seu nom i existencies. */

  void escriu_visitants();
  /* Post: Escriu els noms dels visitant que estan a la cua de la parada en el seu ordre. */


} // end class parada

#endif
