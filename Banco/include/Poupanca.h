#ifndef POUPANCA_H
#define POUPANCA_H

#include <Conta.h>


class Poupanca : public Conta
{
private:
    int variacao;
    double taxaRendimento;

public:
    Poupanca();
    Poupanca(string,int,double,int,double);

    void setVariacao(int);
    void setTaxaRendimento(double);

    int getVariacao();
    double getTaxaRendimento();

    double render();

};

#endif // POUPANCA_H
