#include "Conta.h"

Conta::Conta()
{
    nomeCliente = " ";
    numero = 0;
    saldo = 0;
}
Conta::Conta(string n,int num,double sal)
{
    nomeCliente = n;
    numero = num;
    saldo = sal;
}

void Conta::setNome(string n)
{
    nomeCliente = n;
}

void Conta::setNumero(int num)
{
    numero = num;
}

void Conta::setSaldo(double sal)
{
    saldo = sal;
}

string Conta::getNome()
{
    return nomeCliente;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::sacar(double sacar)
{
    saldo = saldo - sacar;
}

void Conta::depositar(double depot)
{
    saldo = saldo + depot;
}
