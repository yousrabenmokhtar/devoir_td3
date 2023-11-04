#include <iostream>
using namespace std;

class vect
{
protected:
    int nelem;
    int* adr;
public:

vect(int n) : nelem(n), adr(new int[n]) {}
    ~vect() { delete[] adr; }


class vectok : public vect
