#ifndef CONTA_H
#define CONTA_H

#include <IConta.h>


class Conta : public IConta
{
public:

    Conta();
    Conta(string,int,double,double);

    string getNomeCliente();
    int getNumeroConta();
    double getSalarioMensal();
    double getSaldo();
    double getLimite();

    void setNomeCliente(string);
    void setNumeroConta(int);
    void setSalarioMensal(double);
    void setSaldo(double);
    void setLimite(double);

    void definirLimite();
    void sacar(double);
    void depositar(double);

protected:
    string nomeCliente;
    int numeroConta;
    double salarioMensal, saldo, limite;


};

#endif // CONTA_H
