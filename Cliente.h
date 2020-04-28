#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include<Persona.h>


using namespace std;
class Cliente:public Persona{
private:
    string idCliente;
    float comprasTotales;
public:

    Cliente();
    Cliente(string,float,string,string,string,string,string);
    ~Cliente(){};

    string getIdCliente();
    float getComprasTotales();

    void setIdCliente(string);
    void setComprasTotales(float);

    void toString();
};
#endif // CLIENTE_H
