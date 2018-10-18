#include <iostream>
#include <ContaEspecial.h>

using namespace std;

int main()
{
    Conta kejo = Conta("Bruno",2,2500.0,1000.0);
    ContaEspecial ambro = ContaEspecial("Matheus",13,3000.0,500.0);

    cout << "Saldo de " << kejo.getNomeCliente() << ": " << kejo.getSaldo() << endl;
    kejo.sacar(1000);
    cout << "Saldo de " << kejo.getNomeCliente() << ": " << kejo.getSaldo() << endl;
    kejo.depositar(500);
    cout << "Saldo de " << kejo.getNomeCliente() << ": " << kejo.getSaldo() << endl << endl;
    kejo.definirLimite();
    cout << "Limite de " << kejo.getNomeCliente() << ": " << kejo.getLimite() << endl << endl;

    cout << "Saldo de " << ambro.getNomeCliente() << ": " << ambro.getSaldo() << endl;
    ambro.sacar(200);
    cout << "Saldo de " << ambro.getNomeCliente() << ": " << ambro.getSaldo() << endl;
    ambro.depositar(100);
    cout << "Saldo de " << ambro.getNomeCliente() << ": " << ambro.getSaldo() << endl << endl;
    ambro.definirLimite();
    cout << "Limite de " << ambro.getNomeCliente() << ": " << ambro.getLimite() << endl << endl;

    return 0;
}
