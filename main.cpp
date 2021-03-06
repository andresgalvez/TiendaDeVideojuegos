#include <iostream>
#include <Service.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

template<typename tipo>
void listar(vector<tipo*> lista);

int main()
{

    Service ser;

    int opcion;

    do{
        cout<<"*****\tMENU\t*****\t"<<endl<<endl;
        cout<<"---Listar---"<<endl;
        cout<<"1.\tListar Empleados"<<endl;
        cout<<"2.\tListar Clientes"<<endl;
        cout<<"3.\tListar Videojuegos"<<endl;
        cout<<"4.\tListar Facturas"<<endl;
        cout<<"---Crear---"<<endl;
        cout<<"5.\tCrear Empleado"<<endl;
        cout<<"6.\tCrear Cliente"<<endl;
        cout<<"7.\tCrear Videojuego"<<endl;
        cout<<"8.\tCrear Factura"<<endl;
        cout<<"---Actualizar---"<<endl;
        cout<<"9.\tActualizar Empleado"<<endl;
        cout<<"10.\tActualizar Cliente"<<endl;
        cout<<"11.\tActualizar Videojuego"<<endl;
        cout<<"12.\tActualizar Factura"<<endl;
        cout<<"---Eliminar---"<<endl;
        cout<<"13.\tEliminar Empleado"<<endl;
        cout<<"14.\tEliminar Cliente"<<endl;
        cout<<"15.\tEliminar Videojuego"<<endl;
        cout<<"16.\tEliminar Factura"<<endl<<endl;
        cout<<"0.\tpara salir"<<endl<<endl;
        cout<<"Ingrese su selección: ";

        cin>>opcion;

        switch (opcion) {
        case 1: {
            cout<<endl<<"EMPLEADOS"<<endl;
            listar(ser.listaEmpleados);
            break;
        }
        case 2: {
            cout<<endl<<"CLIENTES"<<endl;
            listar(ser.listaClientes);
            break;
        }
        case 3: {
            cout<<endl<<"VIDEOJUEGOS"<<endl;
            listar(ser.listaVideojuegos);
            break;
        }
        case 4: {
            cout<<endl<<"FACTURAS"<<endl;
            listar(ser.listaFacturas);
            break;
        }
        case 5: {
            cout<<endl<<"EMPLEADOS"<<endl;
            listar(ser.listaEmpleados);
            ser.listaEmpleados.push_back(new Empleado());
            listar(ser.listaEmpleados);
            break;
        }
        case 6: {
            cout<<endl<<"CLIENTES"<<endl;
            listar(ser.listaClientes);
            ser.listaClientes.push_back(new Cliente());
            listar(ser.listaClientes);
            break;
        }
        case 7: {
            cout<<endl<<"VIDEOJUEGOS"<<endl;
            listar(ser.listaVideojuegos);
            ser.listaVideojuegos.push_back(new Videojuego());
            listar(ser.listaVideojuegos);
            break;
        }
        case 8: {
            cout<<endl<<"FACTURAS"<<endl;
            listar(ser.listaFacturas);
            ser.listaFacturas.push_back(new Factura());
            listar(ser.listaFacturas);
            break;
        }
        case 9: {
            int atributo, aux;
            string nuevoValor;
            listar(ser.listaEmpleados);
            cout<<"Que empleado deseas modificar: "<<endl;
            cin>>aux;
            aux--;
            cout<<"Que atributo deseas modificar de Empleado: "<<endl;
            cout<<"1. salario"<<endl;
            cout<<"2. fecha de contratacion"<<endl;
            cout<<"3. id"<<endl;
            cout<<"4. nombre"<<endl;
            cout<<"5. telefono"<<endl;
            cout<<"6. correo"<<endl;
            cout<<"7. fecha"<<endl;
            cout<<"8. direccion"<<endl;
            cin>>atributo;

            cout<<"Ingresa el nuevo valor: ";
            cin>>nuevoValor;
            switch (atributo) {
            case 1: {
                ser.listaEmpleados.at(aux)->setSalario(stof(nuevoValor));
                break;
            }
            case 2: {
                ser.listaEmpleados.at(aux)->setFechaContratacion(nuevoValor);
                break;
            }
            case 3: {
                ser.listaEmpleados.at(aux)->setIdEmpleado(nuevoValor);
                break;
            }
            case 4: {
                ser.listaEmpleados.at(aux)->setNombre(nuevoValor);
                break;
            }
            case 5: {
                ser.listaEmpleados.at(aux)->setTelefono(nuevoValor);
                break;
            }
            case 6: {
                ser.listaEmpleados.at(aux)->setCorreo(nuevoValor);
                break;
            }
            case 7: {
                ser.listaEmpleados.at(aux)->setFecha(nuevoValor);
                break;
            }
            case 8: {
                ser.listaEmpleados.at(aux)->setDireccion(nuevoValor);
                break;
            }
            }
            listar(ser.listaEmpleados);
            break;
        }
        case 10: {
            int atributo, aux;
            string nuevoValor;
            listar(ser.listaClientes);
            cout<<"Que cliente deseas modificar: "<<endl;
            cin>>aux;
            aux--;
            cout<<"Que atributo deseas modificar de Cliente: "<<endl;
            cout<<"1. id"<<endl;
            cout<<"2. compras totales"<<endl;
            cout<<"3. nombre"<<endl;
            cout<<"4. telefono"<<endl;
            cout<<"5. correo"<<endl;
            cout<<"6. fecha"<<endl;
            cout<<"7. direccion"<<endl;
            cin>>atributo;

            cout<<"Ingresa el nuevo valor: ";
            cin>>nuevoValor;
            switch (atributo) {
            case 1: {
                ser.listaClientes.at(aux)->setIdCliente(nuevoValor);
                break;
            }
            case 2: {
                ser.listaClientes.at(aux)->setComprasTotales(stof(nuevoValor));
                break;
            }
            case 3: {
                ser.listaClientes.at(aux)->setNombre(nuevoValor);
                break;
            }
            case 4: {
                ser.listaClientes.at(aux)->setTelefono(nuevoValor);
                break;
            }
            case 5: {
                ser.listaClientes.at(aux)->setCorreo(nuevoValor);
                break;
            }
            case 6: {
                ser.listaClientes.at(aux)->setFecha(nuevoValor);
                break;
            }
            case 7: {
                ser.listaClientes.at(aux)->setDireccion(nuevoValor);
                break;
            }
            }
            listar(ser.listaClientes);
            break;
        }
        case 11: {
            int atributo, aux;
            string nuevoValor;
            listar(ser.listaVideojuegos);
            cout<<"Que videojuego deseas modificar: "<<endl;
            cin>>aux;
            aux--;
            cout<<"Que atributo deseas modificar de Videojuego: "<<endl;
            cout<<"1. stock"<<endl;
            cout<<"2. precio"<<endl;
            cout<<"3. genero"<<endl;
            cout<<"4. nombre"<<endl;
            cout<<"5. desarrolladora"<<endl;
            cout<<"6. fecha de lanzamiento"<<endl;
            cin>>atributo;

            cout<<"Ingresa el nuevo valor: ";
            cin>>nuevoValor;
            switch (atributo) {
            case 1: {
                ser.listaVideojuegos.at(aux)->setStock(stoi(nuevoValor));
                break;
            }
            case 2: {
                ser.listaVideojuegos.at(aux)->setPrecio(stof(nuevoValor));
                break;
            }
            case 3: {
                ser.listaVideojuegos.at(aux)->setGenero(nuevoValor);
                break;
            }
            case 4: {
                ser.listaVideojuegos.at(aux)->setNombre(nuevoValor);
                break;
            }
            case 5: {
                ser.listaVideojuegos.at(aux)->setDesarrolladora(nuevoValor);
                break;
            }
            case 6: {
                ser.listaVideojuegos.at(aux)->setFechaLanzamiento(nuevoValor);
                break;
            }
            }
            listar(ser.listaVideojuegos);
            break;
        }
        case 12: {
            int atributo, aux;
            string nuevoValor;
            listar(ser.listaFacturas);
            cout<<"Que factura deseas modificar: "<<endl;
            cin>>aux;
            aux--;
            cout<<"Que atributo deseas modificar de Factura: "<<endl;
            cout<<"1. Precio total"<<endl;
            cout<<"2. iva"<<endl;
            cout<<"3. fecha"<<endl;
            cout<<"4. id"<<endl;
            cout<<"5. estado"<<endl;
            cout<<"6. forma de pago"<<endl;
            cin>>atributo;

            cout<<"Ingresa el nuevo valor: ";
            cin>>nuevoValor;
            switch (atributo) {
            case 1: {
                ser.listaFacturas.at(aux)->setPrecioTotal(stof(nuevoValor));
                break;
            }
            case 2: {
                ser.listaFacturas.at(aux)->setIva(stof(nuevoValor));
                break;
            }
            case 3: {
                ser.listaFacturas.at(aux)->setFecha(nuevoValor);
                break;
            }
            case 4: {
                ser.listaFacturas.at(aux)->setIdFactura(nuevoValor);
                break;
            }
            case 5: {
                ser.listaFacturas.at(aux)->setEstado(nuevoValor);
                break;
            }
            case 6: {
                ser.listaFacturas.at(aux)->setForma_de_Pago(nuevoValor);
                break;
            }
            }
            listar(ser.listaFacturas);
            break;
        }
        case 13: {
            int aux;
            listar(ser.listaEmpleados);
            cout<<"Ingrese el empleado que desea eliminar: ";
            cin>>aux;
            ser.listaEmpleados.erase(ser.listaEmpleados.begin() + aux - 1);
            listar(ser.listaEmpleados);
            break;
        }
        case 14: {
            int aux;
            listar(ser.listaClientes);
            cout<<"Ingrese el cliente que desea eliminar: ";
            cin>>aux;
            ser.listaClientes.erase(ser.listaClientes.begin() + aux - 1);
            listar(ser.listaClientes);
            break;
        }
        case 15: {
            int aux;
            listar(ser.listaVideojuegos);
            cout<<"Ingrese el empleado que desea eliminar: ";
            cin>>aux;
            ser.listaVideojuegos.erase(ser.listaVideojuegos.begin() + aux - 1);
            listar(ser.listaVideojuegos);
            break;
        }
        case 16: {
            int aux;
            listar(ser.listaFacturas);
            cout<<"Ingrese el empleado que desea eliminar: ";
            cin>>aux;
            ser.listaFacturas.erase(ser.listaFacturas.begin() + aux - 1);
            listar(ser.listaFacturas);
            break;
        }
        default:
            break;
        }
        ser.escribirTodo();
        system( "pause" );
    }while(opcion != 0);

    return 0;
}

template<typename tipo>
void listar(vector<tipo*> lista){
    for(int i = 0; i < lista.size(); i++){
        cout<<i + 1<<". ";
        lista.at(i)->toString();
    }
}
