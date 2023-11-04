#include <iostream>
using namespace std;
class nbcomplexe{
    int reel;
    int imaginaire;
public:
    nbcomplexe( int r, int i): reel(r),imaginaire(i){}
    nbcomplexe operation_somme (const nbcomplexe c){
        int a,b;
        a=reel+c.reel;
        b=imaginaire+c.imaginaire ;
        return nbcomplexe(a,b);
    }
    nbcomplexe operation_sous (const nbcomplexe c){
        int a,b;
        a=reel-c.reel;
        b=imaginaire-c.imaginaire ;
        return nbcomplexe(a,b);
    }
    nbcomplexe  operation_produit (const nbcomplexe c){
        int a,b;
        a=(reel*c.reel)-(imaginaire*c.imaginaire);
        b=(reel*c.imaginaire )+(imaginaire*c.reel);
        return nbcomplexe(a,b);
    }
    void afficher(){
        cout<<reel<<"+"<<imaginaire<<"i"<<endl;}
};

int main (){
    int reelle,b,a,imag;
    cout<<"entrer la partie reel du premier nombre complexe :"<<endl;
    cin>>reelle;
    cout<<"entrer la partie imaginaire du premier nombre complexe :"<<endl;
    cin>>imag;
    cout<<"entrer la partie reel du deuxiÃ¨me nombre complexe :"<<endl;
    cin>>a;
    cout<<"entrer la partie imaginaire du deuxiÃ¨me nombre complexe :"<<endl;
    cin>>b;
    nbcomplexe n(reelle,imag), m(a,b);
    cout<<"l somme est :";
    nbcomplexe somme = n.operation_somme(m);
    somme.afficher();
    cout<<"la soustraction est :";
    nbcomplexe sous = n.operation_sous(m);
    sous.afficher();
    cout<<"le produit est :";
    nbcomplexe produit = n.operation_produit(m);
    produit.afficher();

    return 0;
}