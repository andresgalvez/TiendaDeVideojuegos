#include <Empleado.h>

/*EMPLEADO*/

Empleado::Empleado(){
//    string comprasTotalesAux, nombreAux, telefonoAux, correoAux, fechaAux, direccionAux;
//    cout<<"Ingrese el id del cliente: ";
//    cin>>this->idCliente;
//    cout<<"Ingrese las compras totales: ";
//    cin>>comprasTotalesAux;
//    this->comprasTotales = stof(comprasTotalesAux);
//    cout<<"Ingrese el nombre: ";
//    cin>>nombreAux;
//    this->setNombre(nombreAux);
//    cout<<"Ingrese el telefono: ";
//    cin>>telefonoAux;
//    this->setTelefono(telefonoAux);
//    cout<<"Ingrese el correo: ";
//    cin>>correoAux;
//    this->setCorreo(correoAux);
//    cout<<"Ingrese la fecha de nacimiento: ";
//    cin>>fechaAux;
//    this->setFecha(fechaAux);
//    cout<<"Ingrese la direccion: ";
//    cin>>direccionAux;
//    this->setDireccion(direccionAux);
}


Empleado::Empleado(float salario,string fechaContratacion,string idEmpleado,string nombre,string telefono,string correo,string fecha,string direccion) :Persona(nombre,telefono, correo,fecha, direccion){
    this-> salario= salario;
    this-> fechaContratacion = fechaContratacion;
    this-> idEmpleado = idEmpleado;
};
float Empleado::getSalario(){return this->salario;}
void Empleado::setSalario(float a){this->salario = a;}

string Empleado::getFechaContratacion(){return this->fechaContratacion;}
void Empleado::setFechaContratacion(string a){this->fechaContratacion= a;}

string Empleado::getIdEmpleado(){return this->idEmpleado;}
void Empleado::setIdEmpleado(string a){this->idEmpleado= a;}

void Empleado::toString(){
    cout<<
           "Empleado = [ "<<
           "Salario: " <<  this->salario <<
           ", Fecha de contratacion: "<<this->fechaContratacion  <<
           ", ID Empleado: " << this->idEmpleado <<
           ", Nombre: "<<  this->getNombre() <<
           ", Telefono: "<<this-> getTelefono() <<
           ", Correo: " << this->getCorreo()<<
           ", Fecha de Nacimiento: " <<this-> getFecha() <<
           ", Direccion: "<<this-> getDireccion()<<
           "]" <<endl;
};
