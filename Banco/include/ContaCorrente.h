#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <Conta.h>


class ContaCorrente : public Conta
{
protected:

    double salario;
    int limite;

public:

    ContaCorrente();
    ContaCorrente(string,int,double,double,int);
    double getSalario();
    int getLimite();
    double definirLimite();

};

#endif // CONTACORRENTE_H
