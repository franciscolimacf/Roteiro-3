#include "Poupanca.h"

Poupanca::Poupanca()
{

}
Poupanca::Poupanca(string n, int num, double sal, int var, double txrend)
{
    nomeCliente = n;
    numero = num;
    saldo = sal;
    variacao = var;
    taxaRendimento = txrend;
}

double Poupanca::render()
{
    double rendimento;

    if(variacao == 51)
    {
        rendimento = saldo + (saldo*taxaRendimento);
    }
    else if(variacao == 1)
    {
        rendimento = saldo + (saldo*(taxaRendimento+0.005));
    }

    return rendimento;
}


void Poupanca::setVariacao(int v)
{
    variacao = v;
}

void Poupanca::setTaxaRendimento(double txrend)
{
    taxaRendimento = txrend;
}

int Poupanca::getVariacao()
{
    return variacao;
}
double Poupanca::getTaxaRendimento()
{
    return taxaRendimento;
}
