#include<iostream>
using namespace std;
template<class T>T carre(T &x){
    T resultat=x*x;
    return resultat;}
int main(){
    int x=3;
    float y=5.3;
    cout<<"LE CARRE DE NOMBRE EST :"<< carre(x)<<endl;
    cout<<"LE CARRE DE NOMBRE EST :"<< carre(y)<<endl;
}

