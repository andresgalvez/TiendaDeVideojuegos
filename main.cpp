#include <iostream>
#include <Service.h>
#include <stdio.h>
#include <stdlib.h>

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
            break;
        }
        case 6: {
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
            break;
        }
        case 10: {
            break;
        }
        case 11: {
            break;
        }
        case 12: {
            break;
        }
        case 13: {
            break;
        }
        case 14: {
            break;
        }
        case 15: {
            break;
        }
        case 16: {
            break;
        }
        default:
            break;
        }
        ser.escribirTodo();
        system( "read -n 1 -s -p \"Presiona una tecla para continuar\"" );
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
