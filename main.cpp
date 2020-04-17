#include <iostream>
#include<VideoJuego.h>
#include<Persona.h>
#include<Empleado.h>
#include<Cliente.h>
#include<Factura.h>
using namespace std;

int main()
{
    Videojuego  vj1("12",14,"62","61","73",62);
    Persona  p1("12","62","61","73","62");
    Empleado e1(5,"421","abc","null","61","t24","2t4","Q3HG");
    Cliente c1("2ct",23,"c2","2c","v3y4","c4t2","52g");

    Cliente *ptrC1 = &c1;
    Empleado * ptrE1 = &e1;
    Factura f1(13,"c34","c43","t2c","c2t",315,ptrC1, ptrE1);
    vj1.toString();
    p1.toString();
    f1.toString();

    e1.Persona::toString();

    cout << "Hello World!" << endl;

    return 0;
}
