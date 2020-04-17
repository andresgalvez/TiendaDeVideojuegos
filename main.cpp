#include <iostream>
#include<VideoJuego.h>
#include<Persona.h>
using namespace std;

int main()
{
    Videojuego  vj1("12",14,"62","61","73",62);
    vj1.toString();

    Persona  p1("12","62","61","73","62");
    p1.toString();
    cout << "Hello World!" << endl;

    return 0;
}
