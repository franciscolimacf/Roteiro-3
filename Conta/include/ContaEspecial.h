#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <Conta.h>


class ContaEspecial : public Conta
{
public:
    ContaEspecial();
    ContaEspecial(string,int,double,double);
    void definirLimite();
};

#endif // CONTAESPECIAL_H
