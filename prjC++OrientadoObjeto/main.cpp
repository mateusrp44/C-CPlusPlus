#include <cstdlib>
#include <string>
#include <iostream>

#include "Carro.h"

using namespace std;

main()
{
    Carro c1;
    c1.setMarca("Ferrari");
    c1.setAno(2017);
    
    Carro c2("Fiat", 2017);
    c2.setAno(2018);

    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
}
