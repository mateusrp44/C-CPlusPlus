#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Carro
{
    public:
        string marca;
        int ano;
};

main()
{
    Carro c1;
    c1.marca = "Fiat";
    c1.ano = 2017;
    
    Carro c2;
    c2.marca = "Ferrari";
    c2.ano = 2015;
    
    cout << c1.marca << endl;
    cout << c1.ano << endl;
    cout << c2.marca << endl;
    cout << c2.ano << endl;
}
