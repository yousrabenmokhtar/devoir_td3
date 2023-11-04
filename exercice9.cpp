#include <iostream>
using namespace std;

int main()
{
    /*  a. Que se passe-t-il avec ces instructions :
  point <char> p (60, 65) ;
  p.affiche () ;
   ona definie T par char a cause de la creation d'objet avec des coordonnées de type int (60 et 65)
   b. Comment faut-il modifier la définition de notre patron pour que les instructions
  précédentes affichent bien :
  on doit ecrire :
  cout << "Coordonnees : " <<int(x );
     cout<< " " <<int ( y )<< endl;
  point <int> p (60, 65) ;
  p.affiche () ;


      return 0;
  }