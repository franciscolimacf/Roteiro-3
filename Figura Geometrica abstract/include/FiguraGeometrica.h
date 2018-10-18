#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
protected:
    string nome;

public:
    FiguraGeometrica();
    virtual double calcularArea(double, double) = 0;
};

#endif // FIGURAGEOMETRICA_H
