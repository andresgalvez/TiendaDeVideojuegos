#ifndef FACTURA_H
#define FACTURA_H
#include<iostream>
#include<Empleado.h>
#include<Cliente.h>

using namespace std;
class Factura{
private:
    float PrecioTotal;
    string fecha;
    string idFactura;
    string estado;
    string forma_de_pago;
    float iva;
    Cliente *cliente;
    Empleado *empleado;
public:
    Factura();
    Factura(float,string,string,string,string,float,Cliente*, Empleado *);
    string getPrecioTotal();
    string getFecha();
    string geIdFactura();
    string getEstado();
    string getForma_de_Pago();
    float getIva();

    void setPrecioTotal(string);
    void seIdFactura(string);
    void setEstado(string);
    void setForma_de_Pago(string);
    void setIva(float);

    void toString();
};


#endif // FACTURA_H
