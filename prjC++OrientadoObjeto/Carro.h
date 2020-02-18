#ifndef CARRO_H
#define CARRO_H

#include<string>

using  namespace std;

class Carro
{
    private:
        string marca;
        int ano;
    public:
        static int pneus;
        Carro();
        Carro(string marca, int ano);
        ~Carro();
        void setMarca(string marca);
        string getMarca();
        void setAno(int ano);
        int getAno();
};

#endif /* CARRO_H */

