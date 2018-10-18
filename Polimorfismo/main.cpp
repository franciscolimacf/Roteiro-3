#include <iostream>
#include <Filho.h>

using namespace std;
//Polimorfismo é a possibilidade de um objeto filho se converter para o formato da sua classe antecessora;


int main()
{
    Pai *pai = new Pai();
    Pai *filho = new Filho();

    cout << pai->grito() << endl;
    cout << filho->grito() << endl;

    delete(pai);
    delete(filho);
    return 0;
}
