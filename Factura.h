#ifndef FACTURA_H
#define FACTURA_H
#include<iostream>
#include<Empleado.h>
#include<Cliente.h>

using namespace std;
class Factura{
private:
    float precioTotal;
    float iva;

    string fecha;
    string idFactura;
    string estado;
    string forma_de_pago;
    Cliente *cliente;
    Empleado *empleado;

public:

    Factura();
    Factura(float,float,string,string,string,string,Cliente*, Empleado*);
    ~Factura(){};

    float getPrecioTotal();
    string getFecha();
    string getIdFactura();
    string getEstado();
    string getForma_de_Pago();
    float getIva();

    void setPrecioTotal(float);
    void setIdFactura(string);
    void setFecha(string);
    void setEstado(string);
    void setForma_de_Pago(string);
    void setIva(float);

    void toString();

    Cliente *getCliente();
    void setCliente(Cliente *);
    Empleado *getEmpleado();
    void setEmpleado(Empleado *);
};


#endif // FACTURA_H
