#include<Cliente.h>
#include<Empleado.h>
#include<Factura.h>
#include<Persona.h>
#include<VideoJuego.h>

Videojuego::Videojuego(string fechaLanzamiento,float precio,string genero,string nombre,string desarrolladora,int stock ){
    this-> fechaLanzamiento =fechaLanzamiento;
    this-> precio = precio;
    this-> genero = genero;
    this-> nombre = nombre;
    this-> desarrolladora = desarrolladora;
    this-> stock = stock;
};

Persona::Persona(string nombre,string telefono,string correo,string fecha,string direccion){
    this-> nombre = nombre;
    this-> telefono = telefono;
    this-> correo = correo;
    this-> fecha = fecha;
    this-> direccion = direccion;
};

Factura::Factura(float PrecioTotal,string fecha,string estado,string idFactura,string forma_de_pago,float iva, Cliente *cliente , Empleado *empleado){
    this-> PrecioTotal = PrecioTotal;
    this-> fecha = fecha;
    this-> estado = estado;
    this-> idFactura = idFactura;
    this-> forma_de_pago = forma_de_pago;
    this-> iva = iva;
    this-> cliente = cliente;
    this-> empleado = empleado;
};
Empleado::Empleado(int salario,string fechaContratacion,string idEmpleado,string nombre,string telefono,string correo,string fecha,string direccion) :Persona(nombre,telefono, correo,fecha, direccion){
    this-> salario= salario;
    this-> fechaContratacion = fechaContratacion;
    this-> idEmpleado = idEmpleado;
};

Cliente::Cliente(string idCliente,float comprasTotales,string nombre,string telefono,string correo,string fecha,string direccion):Persona(nombre,telefono, correo,fecha, direccion){
    this->idCliente = idCliente;
    this->comprasTotales = comprasTotales;
};
