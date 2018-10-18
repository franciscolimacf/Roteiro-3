#include "Triangulo.h"

Triangulo::Triangulo()
{
    nome = "Triangulo";
}

double Triangulo::calcularArea(double b, double h)
{
    return b*h/2;
}
