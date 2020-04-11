#include<DataBase.h>

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

Factura::Factura(float PrecioTotal,string fecha,string estado,string forma_de_pago,float iva){
    this-> PrecioTotal = PrecioTotal;
    this-> fecha = fecha;
    this-> estado = estado;
    this-> forma_de_pago = forma_de_pago;
    this-> iva = iva;
};
Empleado::Empleado(int salario,string fechaContratacion,string idEmpleado){

};

Cliente(string idCliente,float comprasTotales){
    this->idCliente = idCliente;
    this->comprasTotales = comprasTotales;
};
