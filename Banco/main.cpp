#include <iostream>
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    Poupanca popo = Poupanca("Lucas",0,3000.0,1,2);
    ContaCorrente chain = ContaCorrente("Matheus",1,5000.0,10000.0,10000);
    ContaEspecial esp = ContaEspecial("Bruno", 2, 1000.0, 1500.0,2000);

    double saque;
    double limite;

    cin >> saque;

    while(saque > popo.getSaldo())
    {
        cout << "Saque invalido, valor acima do seu saldo !" << endl << "Digite um novo saque: ";
        cin >> saque;
    }
    popo.sacar(saque);
    cout << popo.getSaldo() << endl;

    cout << "Rendimento: " << popo.render() << endl;

    chain.definirLimite();

    cout << "Limite conta corrente: " << chain.getLimite() << endl;

    esp.definirLimite();

    cout << "Limite conta especial: " << esp.getLimite() << endl;



    return 0;
}
