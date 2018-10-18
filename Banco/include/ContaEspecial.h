#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <ContaCorrente.h>


class ContaEspecial : public ContaCorrente
{
public:
    ContaEspecial();
    ContaEspecial(string,int,double,double,int);
    double definirLimite();
};

#endif // CONTAESPECIAL_H
