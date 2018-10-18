#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{

}
ContaEspecial::ContaEspecial(string n,int num,double sal,double s,int lim)
{
    nomeCliente = n;
    numero = num;
    saldo = sal;
    salario = s;
    limite = lim;
}
double ContaEspecial::definirLimite()
{
    limite = 4*salario;
}
