#ifndef SERVICE_H
#define SERVICE_H

#include <vector>
#include <Cliente.h>
#include <Empleado.h>
#include <VideoJuego.h>
#include <Factura.h>

class Service {
private:
    double ganancias;
public:

    Service();

    void escribirTodo();

    void cargarClientes();
    void cargarEmpleados();
    void cargarVideojuegos();
    void cargarFacturas();

    void escribirClientes();
    void escribirEmpleados();
    void escribirVideojuegos();
    void escribirFacturas();

    vector<Cliente *> listaClientes;
    vector<Empleado *> listaEmpleados;
    vector<Videojuego *> listaVideojuegos;
    vector<Factura *> listaFacturas;

    double getGanancias();
    void setGanancias(double);

    Cliente* buscarCliente(string);
    Empleado* buscarEmpleado(string);

};

#endif // SERVICE_H

