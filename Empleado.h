#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<iostream>
#include<Persona.h>
using namespace std;
class Empleado:public Persona{
private:
    int salario;
    string fechaContratacion;
    string idEmpleado;
public:
    Empleado();
    Empleado(int,string,string,string,string,string,string,string) ;
    string getFechaContratacion();
    string getIdEmpleado();
    void setFechaContratacion(string);
    void getIdEmpleado(string);

    void toString();
    int getSalario() const;
    void setSalario(int value);
};

#endif // EMPLEADO_H

