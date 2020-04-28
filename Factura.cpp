#include <Factura.h>
#include <Service.h>

/*FACTURA*/

Factura::Factura(){

    Service ser;

    string idClienteAux, idEmpleadoAux;
    cout<<"Ingrese el precio total: ";
    cin>> this-> precioTotal;
    cout<<"Ingrese el iva: ";
    cin>>this-> iva;
    cout<<"Ingrese la fecha: ";
    cin>>this-> fecha;
    cout<<"Ingrese el id de la Factura: ";
    cin>>this-> idFactura;
    cout<<"Ingrese el estado: ";
    cin>>this-> estado;
    cout<<"Ingrese la forma de pago: ";
    cin>>this-> forma_de_pago;
    cout<<"Ingrese el id del cliente: ";
    cin>>idClienteAux;
    cout<<"Ingrese el id del empleado: ";
    cin>>idEmpleadoAux;

    this->cliente = ser.buscarCliente(idClienteAux);
    this->empleado = ser.buscarEmpleado(idEmpleadoAux);

}

Factura::Factura(float precioTotal,float iva,string fecha,string idFactura,string estado,string forma_de_pago, Cliente *cliente , Empleado *empleado){
    this-> precioTotal = precioTotal;
    this-> iva = iva;
    this-> fecha = fecha;
    this-> idFactura = idFactura;
    this-> estado = estado;
    this-> forma_de_pago = forma_de_pago;
    this-> cliente = cliente;
    this-> empleado = empleado;
};

float Factura::getPrecioTotal(){return this->precioTotal;}
void Factura::setPrecioTotal(float a){this->precioTotal = a;}

string Factura::getFecha(){return this->fecha;}
void Factura::setFecha(string a){this->fecha = a;}

string Factura::getEstado(){return this->estado;}
void Factura::setEstado(string a){this->estado = a;}

string Factura::getIdFactura(){return this->idFactura;}
void Factura::setIdFactura(string a){this->idFactura = a;}

string Factura::getForma_de_Pago(){return this->forma_de_pago;}
void Factura::setForma_de_Pago(string a){this->forma_de_pago = a;}

float Factura::getIva(){return this->iva;}
void Factura::setIva(float a){this->iva = a;}

Empleado *Factura::getEmpleado(){return this->empleado;}
void Factura::setEmpleado(Empleado *value){this->empleado = value;}

Cliente *Factura::getCliente(){return this->cliente;}
void Factura::setCliente(Cliente *value){this->cliente = value;}

void Factura::toString(){
    cout<<
           "Factura = [ "<<
           "Precio total: " <<  this->precioTotal <<
           ", Fecha: "<<this-> fecha <<
           ", Estado:" << this-> estado <<
           ", ID Factura: " <<this-> idFactura <<
           ", Forma de Pago: "<<this-> forma_de_pago<<
           ", Iva: "<<this->iva <<
           "]" <<endl;

    this->empleado->toString();
    this->cliente->toString();
};
