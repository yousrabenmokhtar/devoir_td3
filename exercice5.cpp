#include<iostream>
#include<exception>

using namespace std;
class Test {
public:
    static int tableau[];
public:


    static int division(int indice, int diviseur) {
        if (diviseur == 0) {
            throw "la Division par zéro impossible.";
        }
        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};

int main() {
    try {
        int x,u;
       cout<< "Entrez l'indice de l'entier à diviser: " << endl;
        cin >> x;
        cout<< "Entrez le diviseur: " << endl;
        cin >> u;
        cout << "Le résultat de la division est: " << endl;
        cout << Test::division(x, u) << endl;
    }

catch (const char*e ) {
    cerr <<"Erreur : " << e<< endl;
}
return 0;
}

