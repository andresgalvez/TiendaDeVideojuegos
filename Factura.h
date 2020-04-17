#ifndef FACTURA_H
#define FACTURA_H
#include<iostream>
#include<Empleado.h>
#include<Cliente.h>

using namespace std;
class Factura{
private:
    float precioTotal;
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
    void setCliente(Cliente *value);
    Empleado *getEmpleado();
    void setEmpleado(Empleado *value);
};


#endif // FACTURA_H
