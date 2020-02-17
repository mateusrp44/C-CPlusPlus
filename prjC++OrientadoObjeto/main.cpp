#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Carro
{
    private:
        string marca;
        int ano;
    public:
        void setMarca(string x) {
            marca = x;
        }
        string getMarca() {
            return marca;
        }
        void setAno(int y) {
            if(y > 1990) ano = y;
            else ano = 1990;
        }
        int getAno() {
            return ano;
        }
};

main()
{
    Carro c1;
    c1.setMarca("Fiat");
    c1.setAno(2017);
    
    Carro c2;
    c2.setMarca("Ferrari");
    c2.setAno(1989);
    
    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;
    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
}
