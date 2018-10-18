#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"


class Retangulo: public FiguraGeometrica
{
public:
    Retangulo();
    double calcularArea(double, double);
};

#endif // RETANGULO_H
