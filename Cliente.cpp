#include <Cliente.h>


/*CLIENTE*/

Cliente::Cliente(){
    string comprasTotalesAux, nombreAux, telefonoAux, correoAux, fechaAux, direccionAux;
    cout<<"Ingrese el id del cliente: ";
    cin>>this->idCliente;
    cout<<"Ingrese las compras totales: ";
    cin>>comprasTotalesAux;
    this->comprasTotales = stof(comprasTotalesAux);
    cout<<"Ingrese el nombre: ";
    cin>>nombreAux;
    this->setNombre(nombreAux);
    cout<<"Ingrese el telefono: ";
    cin>>telefonoAux;
    this->setTelefono(telefonoAux);
    cout<<"Ingrese el correo: ";
    cin>>correoAux;
    this->setCorreo(correoAux);
    cout<<"Ingrese la fecha de nacimiento: ";
    cin>>fechaAux;
    this->setFecha(fechaAux);
    cout<<"Ingrese la direccion: ";
    cin>>direccionAux;
    this->setDireccion(direccionAux);
}

Cliente::Cliente(string idCliente,float comprasTotales,string nombre,string telefono,string correo,string fecha,string direccion):Persona(nombre,telefono, correo,fecha, direccion){
    this->idCliente = idCliente;
    this->comprasTotales = comprasTotales;
};

string Cliente::getIdCliente(){return this->idCliente;}
void Cliente::setIdCliente(string a){this->idCliente= a;}

float Cliente::getComprasTotales(){return this->comprasTotales;}
void Cliente::setComprasTotales(float a){this->comprasTotales= a;}

void Cliente::toString(){
    cout<<
           "Cliente = [ "<<
           "ID cliente: " <<  this->idCliente <<
           ", Compras Totales: "<<this-> comprasTotales<<
           ", Nombre: "<<  this->getNombre() <<
           ", Telefono: "<<this-> getTelefono() <<
           ", Correo: " << this->getCorreo()<<
           ", Fecha de Nacimiento: " <<this-> getFecha() <<
           ", Direccion: "<<this-> getDireccion()<<
           " ]" <<endl;

};
