#include "Conta.h"

Conta::Conta()
{
    nomeCliente = " ";
    numeroConta = 0;
    salarioMensal = 0.0;
    saldo = 0.0;
}

Conta::Conta(string n,int nc,double sm,double sal)
{
    nomeCliente = n;
    numeroConta = nc;
    salarioMensal = sm;
    saldo = sal;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

int Conta::getNumeroConta()
{
    return numeroConta;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}

void Conta::setNomeCliente(string n)
{
    nomeCliente = n;
}

void Conta::setNumeroConta(int nc)
{
    numeroConta = nc;
}

void Conta::setSalarioMensal(double sm)
{
    salarioMensal = sm;
}

void Conta::setSaldo(double sal)
{
    saldo = sal;
}

void Conta::setLimite(double lim)
{
    limite = lim;
}

void Conta::definirLimite()
{
    limite = 2*salarioMensal;
}

void Conta::sacar(double sacar)
{
    saldo = saldo - sacar;
}

void Conta::depositar(double depot)
{
    saldo = saldo + depot;
}
