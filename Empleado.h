#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<iostream>
#include<Persona.h>
using namespace std;
class Empleado:public Persona{
private:
    float salario;
    string fechaContratacion;
    string idEmpleado;
public:
    Empleado();
    Empleado(float,string,string,string,string,string,string,string) ;
    ~Empleado(){};

    float getSalario();
    void setSalario(float);

    string getFechaContratacion();
    void setFechaContratacion(string);

    string getIdEmpleado();
    void setIdEmpleado(string);

    void toString();
};

#endif // EMPLEADO_H

