#include <iostream>
#include<list>
using namespace std;
struct Personne{
    int age;
    string nom;
    string prenom;};


int main()
{
   list<Personne>liste;
   int x=1;
   Personne P;
   while(x) {
       cout << "entrer votre age  :  ";
       cin >> P.age;
       cout << endl;
       cout << "entrer votre nom  :  ";
       cin >> P.prenom;
       cout << endl;
       cout << "entrer votre prenom :  ";
       cin >> P.nom;
       cout << endl;
   }

    return 0;