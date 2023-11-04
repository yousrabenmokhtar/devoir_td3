#include<set>
#include<vector>
#include<list>
#include<array>
using namespace std;

bool recherche(const set<int>& liste, int x){
    set<int>::const_iterator itr = liste.find(x);
    if(itr!=liste.end())
        return true ;
    else
        return false;
}

bool recherche(set<int>::iterator debut,set<int>::iterator fin , int x){
    while(debut!=fin){
        if(*debut==x)

return true;
        else
            debut++;
    }
return false ;
}
template<typename TT>
void afficheElement(TT debut,TT fin){

