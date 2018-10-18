#ifndef CONTA_H
#define CONTA_H
#include <string>

using namespace std;

class Conta
{
protected:
    string nomeCliente;
    int numero;
    double saldo;

public:
    Conta();
    Conta(string,int,double);

    void setNome(string);
    void setNumero(int);
    void setSaldo(double);

    string getNome();
    int getNumero();
    double getSaldo();

    void sacar(double);
    void depositar(double);
};

#endif // CONTA_H
