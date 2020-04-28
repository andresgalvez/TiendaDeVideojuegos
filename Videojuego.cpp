#include <VideoJuego.h>
#include <string>

/*VIDEOJUEGO*/

Videojuego::Videojuego(){
    cout<<"Ingrese el nombre: ";
    cin>>this->nombre;
    cout<<"Ingrese el genero: ";
    cin>>this->genero;
    cout<<"Ingrese la desarrolladora: ";
    cin>>this->desarrolladora;
    cout<<"Ingrese la fecha de lanzamiento: ";
    cin>>this->fechaLanzamiento;
    cout<<"Ingrese el stock: ";
    cin>>this->stock;
    cout<<"Ingrese el precio: ";
    cin>>this->precio;
}

Videojuego::Videojuego(int stock,float precio,string genero,string nombre,string desarrolladora, string fechaLanzamiento){
    this-> stock = stock;
    this-> precio = precio;
    this-> genero = genero;
    this-> nombre = nombre;
    this-> desarrolladora = desarrolladora;
    this-> fechaLanzamiento =fechaLanzamiento;
};

//getters y stters.

int Videojuego::getStock(){return this->stock;}
void Videojuego::setStock(int a){this->stock = a;}

float Videojuego::getPrecio(){return this->precio;}
void Videojuego::setPrecio(float a){this->precio = a;}

string Videojuego::getGenero(){return this->genero;}
void Videojuego::setGenero(string a){this->genero = a;}

string Videojuego::getNombre(){return this->nombre;}
void Videojuego::setNombre(string a){this->nombre = a;}

string Videojuego::getDesarrolladora(){return this->desarrolladora;}
void Videojuego::setDesarrolladora(string a){this->desarrolladora = a;}

string Videojuego::getFechaLanzamiento(){return this->fechaLanzamiento;}
void Videojuego::setFechaLanzamiento(string a){this->fechaLanzamiento = a;}


void Videojuego::toString(){
    cout<<
           "Videojuego = [ "<<
           "Fecha de lanzamiento: " <<  this->fechaLanzamiento <<
           ", Precio: "<<this-> precio <<
           ", Genero:" << this-> genero<<
           ", Nombre: " <<this-> nombre <<
           ", Desarrolladora: "<<this-> desarrolladora <<
           ", Stock: "<<this-> stock <<
           "]" <<endl;
};
