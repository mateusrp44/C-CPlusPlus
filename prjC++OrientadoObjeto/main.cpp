#include <cstdlib>
#include <string>
#include <iostream>

#include "Carro.h"

using namespace std;

main()
{
    Carro c1;
    c1.setMarca("Fiat");
    c1.setAno(2017);
    
    Carro c2;
    c2.setMarca("Ferrari");
    c2.setAno(2017);
    
    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;
    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
}
