﻿#include<Cliente.h>
#include<Empleado.h>
#include<Factura.h>
#include<Persona.h>
#include<VideoJuego.h>

/*VIDEOJUEGO*/
Videojuego::Videojuego(string fechaLanzamiento,float precio,string genero,string nombre,string desarrolladora,int stock ){
    this-> fechaLanzamiento =fechaLanzamiento;
    this-> precio = precio;
    this-> genero = genero;
    this-> nombre = nombre;
    this-> desarrolladora = desarrolladora;
    this-> stock = stock;
};
//getters y stters.
string Videojuego::getFechaLanzamiento(){return this->fechaLanzamiento;}
void Videojuego::setFechaLanzamiento(string a){this->fechaLanzamiento = a;}

float Videojuego::getPrecio(){return this->precio;}
void Videojuego::setPrecio(float a){this->precio = a;}

string Videojuego::getGenero(){return this->genero;}
void Videojuego::setGenero(string a){this->genero = a;}

string Videojuego::getNombre(){return this->nombre;}
void Videojuego::setNombre(string a){this->nombre = a;}

string Videojuego::getDesarrolladora(){return this->desarrolladora;}
void Videojuego::setDesarrolladora(string a){this->desarrolladora = a;}

int Videojuego::getStock(){return this->stock;}
void Videojuego::setStock(int a){this->stock = a;}

void Videojuego::toString(){
    //Empleado=[id=3,nombre=jdajsd,.....]
    cout<<"Videojuego = [Fecha de lanzamiento: " <<  this->fechaLanzamiento << " , Precio: "<<this-> precio <<
", genero:" << this-> genero<< ", nombre: " <<this-> nombre <<",  desarrolladora "<<this-> desarrolladora <<
 ", stock: "<<this-> stock <<"]" <<endl;
};


/*PERSONA*/
Persona::Persona(string nombre,string telefono,string correo,string fecha,string direccion){
    this-> nombre = nombre;
    this-> telefono = telefono;
    this-> correo = correo;
    this-> fecha = fecha;
    this-> direccion = direccion;
};

string Persona::getNombre(){return this->nombre;}
void Persona::setNombre(string a){this->nombre = a;}

string Persona::getTelefono(){return this->telefono;}
void Persona::setTelefono(string a){this->telefono = a;}

string Persona::getCorreo(){return this->correo;}
void Persona::setCorreo(string a){this->correo = a;}

string Persona::getFecha(){return this->fecha;}
void Persona::setFecha(string a){this->fecha = a;}

string Persona::getDireccion(){return this->direccion;}
void Persona::setDireccion(string a){this->direccion = a;}

void Persona::toString(){
    cout<<"Persona = [Nombre: " <<  this->nombre << " , telefono: "<<this-> telefono <<
          ", correo:" << this-> correo<< ", fecha: " <<this-> fecha <<",  direccion "<<this-> direccion
       <<"]" <<endl;
};

/*FACTURA*/
Factura::Factura(float precioTotal,string fecha,string estado,string idFactura,string forma_de_pago,float iva, Cliente *cliente , Empleado *empleado){
    this-> precioTotal = precioTotal;
    this-> fecha = fecha;
    this-> estado = estado;
    this-> idFactura = idFactura;
    this-> forma_de_pago = forma_de_pago;
    this-> iva = iva;
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
    cout<<"Factura = [precio total: " <<  this->precioTotal << " , fecha: "<<this-> fecha <<
        ", estado:" << this-> estado <<" "<<", ID Factura: " <<this-> idFactura <<",  forma de pago "<<this-> forma_de_pago
        <<", Iva:"<<this->iva <<"]" <<endl;
        this->empleado->toString();
        this->cliente->toString();
};

/*EMPLEADO*/
Empleado::Empleado(int salario,string fechaContratacion,string idEmpleado,string nombre,string telefono,string correo,string fecha,string direccion) :Persona(nombre,telefono, correo,fecha, direccion){
    this-> salario= salario;
    this-> fechaContratacion = fechaContratacion;
    this-> idEmpleado = idEmpleado;
};
int Empleado::getSalario(){return this->salario;}
void Empleado::setSalario(int a){this->salario = a;}

string Empleado::getFechaContratacion(){return this->fechaContratacion;}
void Empleado::setFechaContratacion(string a){this->fechaContratacion= a;}

string Empleado::getIdEmpleado(){return this->idEmpleado;}
void Empleado::setIdEmpleado(string a){this->idEmpleado= a;}

void Empleado::toString(){
    cout<<"Empleado = [salario: " <<  this->salario << " , fecha contratacion: "<<this->fechaContratacion  <<
        ", ID Empleado:" << this->idEmpleado <<"]" <<endl;
    cout<<"Persona = [Nombre: " <<  this->getNombre() << " , telefono: "<<this-> getTelefono() <<
              ", correo:" << this->getCorreo() << ", fecha: " <<this-> getFecha() <<",  direccion "<<this-> getDireccion()
    <<"]" <<endl;
};

/*CLIENTE*/
Cliente::Cliente(string idCliente,float comprasTotales,string nombre,string telefono,string correo,string fecha,string direccion):Persona(nombre,telefono, correo,fecha, direccion){
    this->idCliente = idCliente;
    this->comprasTotales = comprasTotales;
};

string Cliente::getIdCliente(){return this->idCliente;}
void Cliente::setIdCliente(string a){this->idCliente= a;}

float Cliente::getComprasTotales(){return this->comprasTotales;}
void Cliente::setComprasTotales(float a){this->comprasTotales= a;}

void Cliente::toString(){
    cout<<"Cliente = [ID cleinte: " <<  this->idCliente << " , Compras Totales: "<<this-> comprasTotales
        <<"]" <<endl;
    cout<<"Persona = [Nombre: " <<  this->getNombre() << " , telefono: "<<this-> getTelefono() <<
              ", correo:" << this->getCorreo() << ", fecha: " <<this-> getFecha() <<",  direccion "<<this-> getDireccion()
    <<"]" <<endl;
};
