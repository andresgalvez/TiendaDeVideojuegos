#include <Persona.h>

/*PERSONA*/

Persona::Persona(string nombre,string telefono,string correo,string fecha,string direccion){
    this-> nombre = nombre;
    this-> telefono = telefono;
    this-> correo = correo;
    this-> fecha = fecha;
    this-> direccion = direccion;
};

string Persona::getNombre(){return this->nombre;}
void Persona::setNombre(string nombre){this->nombre = nombre;}

string Persona::getTelefono(){return this->telefono;}
void Persona::setTelefono(string a){this->telefono = a;}

string Persona::getCorreo(){return this->correo;}
void Persona::setCorreo(string a){this->correo = a;}

string Persona::getFecha(){return this->fecha;}
void Persona::setFecha(string a){this->fecha = a;}

string Persona::getDireccion(){return this->direccion;}
void Persona::setDireccion(string a){this->direccion = a;}

void Persona::toString(){
    cout<<
           "Persona = [ "<<
           "Nombre: "<<  this->nombre <<
           ", telefono: "<<this-> telefono <<
           ", correo: " << this-> correo<<
           ", fecha: " <<this-> fecha <<
           ", direccion: "<<this-> direccion<<
           " ]" <<endl;
};
