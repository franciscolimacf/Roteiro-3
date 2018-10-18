#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{

}
ContaCorrente::ContaCorrente(string n,int num,double sal,double s,int lim)
{
    nomeCliente = n;
    numero = num;
    saldo = sal;
    salario = s;
    limite = lim;
}

double ContaCorrente::definirLimite()
{
    limite = 2*salario;
}
double ContaCorrente::getSalario()
{
    return salario;
}

int ContaCorrente::getLimite()
{
    return limite;
}
