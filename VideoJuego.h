#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include<iostream>
#endif // VIDEOJUEGO_H
using namespace std;

class Videojuego{
private:

    int stock ;
    float precio;
    string genero;
    string nombre;
    string desarrolladora;
    string fechaLanzamiento;

public:
    Videojuego();
    Videojuego(int,float,string,string,string,string);
    ~Videojuego(){};

    string getFechaLanzamiento();
    float getPrecio();
    string getGenero();
    string getNombre();
    string getDesarrolladora();
    int getStock();

    void setFechaLanzamiento(string);
    void setPrecio(float);
    void setGenero(string);
    void setNombre(string);
    void setDesarrolladora(string);
    void setStock(int);

    void toString();
};
