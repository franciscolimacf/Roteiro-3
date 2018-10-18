#include <iostream>
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
    FiguraGeometrica *f[3];
    string n;
    double base,altura,comp,lar,raio;
    double area = 0;

    f[0] = new Triangulo();
    f[1] = new  Retangulo();
    f[2] = new  Circulo();

    cout << "Qual figura geometrica voce deseja calcular a area? (Triangulo, Retangulo, Circulo)" << endl;
    cin >> n;

    if(n=="triangulo")
    {

        cout << "Digite a base do triangulo: ";
        cin >> base;
        cout << endl << "Digite a altura do triangulo: ";
        cin >> altura;

        area = f[0]->calcularArea(base,altura);

        delete(f[0]);
    }

    else if(n=="retangulo")
    {

        cout << "Digite o comprimento do retangulo: ";
        cin >> comp;
        cout << "Digite a largura do retangulo: ";
        cin >> lar;

        area = f[1]->calcularArea(comp,lar);

        delete(f[1]);
    }

    else if(n=="circulo")
    {
        cout << "Digite o raio: ";
        cin >> raio;

        area = f[2]->calcularArea(raio,0.0);

        delete(f[2]);
    }

    cout << endl << "Area = " << area << endl;
    return 0;
}
