#include <iostream>
#include<VideoJuego.h>
#include<Persona.h>
#include<Empleado.h>
#include<Cliente.h>
#include<Factura.h>
using namespace std;

int main()
{

    Empleado *empleado;
        Empleado *listaEmpleado[3];
        empleado = new Empleado(300,"hola","hola","hola","hola","hola","hola","hola");
        listaEmpleado[0] = empleado;
        empleado = new Empleado(400,"ahola","ahola","ahola","ahola","ahola","ahola","ahola");
        listaEmpleado[1] = empleado;
        empleado = new Empleado(400,"bhola","bhola","bhola","bhola","bhola","bhola","bhola");
        listaEmpleado[2] = empleado;

    int opcion;
    do{
        cout<<"MENU"<<endl;
        cout<<"0. salir"<<endl;
        cout<<"1. LISTAR EMPLEADOS"<<endl;
        cout<<"2. LISTAR CLIENTES"<<endl;
        cout<<"3. LISTAR FACTURA"<<endl;
        cout<<"4. LISTAR PERSONA"<<endl;
        cout<<"5. LISTAR VIDEOJUEGO"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                for(int i = 0; i < 3; i ++){
                    listaEmpleado[i]->toString();
                    };
       };

    }while(opcion !=0);
    cout << "Hello World!" << endl;

    return 0;
}
