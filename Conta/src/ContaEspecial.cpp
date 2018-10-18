#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    nomeCliente = " ";
    numeroConta = 0;
    salarioMensal = 0.0;
    saldo = 0.0;
}
ContaEspecial::ContaEspecial(string n,int nc,double sm,double sal)
{
    nomeCliente = n;
    numeroConta = nc;
    salarioMensal = sm;
    saldo = sal;
}
void ContaEspecial::definirLimite()
{
    limite = 3*salarioMensal;
}
