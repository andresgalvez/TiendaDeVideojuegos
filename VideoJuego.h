#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include<iostream>
#endif // VIDEOJUEGO_H
using namespace std;

class Videojuego{
private:
    string fechaLanzamiento;
    float precio;
    string genero;
    string nombre;
    string desarrolladora;
    int stock ;
public:
    Videojuego();
    Videojuego(string,float,string,string,string,int);
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
