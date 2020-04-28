#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>

using namespace std;
class Persona{
private:
    string nombre;
    string telefono;
    string correo;
    string fecha;
    string direccion;
public:
    Persona(){};
    Persona(string,string,string,string,string);
    ~Persona(){};

    string getNombre();
    string getTelefono();
    string getCorreo();
    string getFecha();
    string getDireccion();

    void setNombre(string);
    void setTelefono(string);
    void setCorreo(string);
    void setFecha(string);
    void setDireccion(string);

    void toString();
};

#endif // PERSONA_H
