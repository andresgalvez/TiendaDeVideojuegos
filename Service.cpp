#include <Service.h>
#include <fstream>

Service::Service(){
    cargarClientes();
    cargarEmpleados();
    cargarFacturas();
    cargarVideojuegos();
}

double Service::getGanancias() { return ganancias; }
void Service::setGanancias(double value) { ganancias = value; }

void Service::cargarClientes(){
    string str;
    ifstream fin("clientes.txt");
    if(!fin){
        cout<< "No se puede abrir el archivo"<<endl;
        abort();
    }

    while(getline(fin,str)){
        float comprasTotales;
        string idCliente,nombre,telefono,correo,fechaNacimiento,direccion;
        size_t i;

        i = str.find("#");
        idCliente = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        comprasTotales = stof(str.substr(0,i));
        str = str.substr(i+1);

        i = str.find("#");
        nombre = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        telefono = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        correo = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        fechaNacimiento = str.substr(0,i);
        direccion = str.substr(i+1);

        listaClientes.push_back(new Cliente(idCliente,comprasTotales,nombre,telefono,correo,fechaNacimiento,direccion));

    }
    fin.close();
}

void Service::cargarEmpleados(){
    string str;
    ifstream fin("empleados.txt");
    if(!fin){
        cout<< "No se puede abrir el archivo"<<endl;
        abort();
    }

    while(getline(fin,str)){
        float salario;
        string fechaContratacion,idEmpleado,nombre,telefono,correo,fechaNacimiento,direccion;
        size_t i;

        i = str.find("#");
        salario = stof(str.substr(0,i)); //stof String TO Float
        str = str.substr(i+1);

        i = str.find("#");
        fechaContratacion = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        idEmpleado = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        nombre = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        telefono = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        correo = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        fechaNacimiento = str.substr(0,i);
        direccion = str.substr(i+1);

        listaEmpleados.push_back(new Empleado(salario,fechaContratacion,idEmpleado,nombre,telefono,correo,fechaNacimiento,direccion));

    }
    fin.close();
}

void Service::cargarFacturas(){
    string str;
    ifstream fin("facturas.txt");
    if(!fin){
        cout<< "No se puede abrir el archivo"<<endl;
        abort();
    }

    while(getline(fin,str)){
        float precioTotal, iva;
        string fecha,idFactura,estado,formaPago,idCliente,idEmpleado;
        size_t i;

        i = str.find("#");
        precioTotal = stof(str.substr(0,i));
        str = str.substr(i+1);

        i = str.find("#");
        iva = stof(str.substr(0,i));
        str = str.substr(i+1);

        i = str.find("#");
        fecha = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        idFactura = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        estado = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        formaPago = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        idCliente = str.substr(0,i);
        idEmpleado = str.substr(i+1);

        listaFacturas.push_back(new Factura(precioTotal,iva,fecha,idFactura,estado,formaPago,buscarCliente(idCliente),buscarEmpleado(idEmpleado)));

    }
    fin.close();
}

void Service::cargarVideojuegos(){

    string str;
    ifstream fin("videojuegos.txt");
    if(!fin){
        cout<< "No se puede abrir el archivo"<<endl;
        abort();
    }

    while(getline(fin,str)){
        int stock;
        float precio;
        string genero,nombre,desarrolladora,fechaLanzamiento;
        size_t i;

        i = str.find("#");
        stock = stoi(str.substr(0,i));
        str = str.substr(i+1);

        i = str.find("#");
        precio = stof(str.substr(0,i));
        str = str.substr(i+1);

        i = str.find("#");
        genero = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        nombre = str.substr(0,i);
        str = str.substr(i+1);

        i = str.find("#");
        desarrolladora = str.substr(0,i);

        fechaLanzamiento = str.substr(i+1);

        listaVideojuegos.push_back(new Videojuego(stock,precio,genero,nombre,desarrolladora,fechaLanzamiento));

    }
    fin.close();
}

void Service::escribirClientes(){
    ofstream myfile;
    myfile.open ("clientes.txt");
    for(int i = 0 ; i < listaClientes.size(); i++){
        myfile<<
                 listaClientes.at(i)->getIdCliente()<<"#"<<
                 listaClientes.at(i)->getComprasTotales()<<"#"<<
                 listaClientes.at(i)->getNombre()<<"#"<<
                 listaClientes.at(i)->getTelefono()<<"#"<<
                 listaClientes.at(i)->getCorreo()<<"#"<<
                 listaClientes.at(i)->getFecha()<<"#"<<
                 listaClientes.at(i)->getDireccion()<<
                 endl;
    }
    myfile.close();
}

void Service::escribirEmpleados(){
    ofstream myfile;
    myfile.open ("empleados.txt");
    for(int i = 0 ; i < listaEmpleados.size(); i++){
        myfile<<
                 listaEmpleados.at(i)->getSalario()<<"#"<<
                 listaEmpleados.at(i)->getFechaContratacion()<<"#"<<
                 listaEmpleados.at(i)->getIdEmpleado()<<"#"<<
                 listaEmpleados.at(i)->getNombre()<<"#"<<
                 listaEmpleados.at(i)->getTelefono()<<"#"<<
                 listaEmpleados.at(i)->getCorreo()<<"#"<<
                 listaEmpleados.at(i)->getFecha()<<"#"<<
                 listaEmpleados.at(i)->getDireccion()<<
                 endl;
    }
    myfile.close();
}

void Service::escribirFacturas(){
    ofstream myfile;
    myfile.open ("facturas.txt");
    // float precioTotal,float iva,string fecha,string idFactura,string estado,string forma_de_pago, Cliente *cliente , Empleado *empleado
    for(int i = 0 ; i < listaFacturas.size(); i++){
        myfile<<
                 listaFacturas.at(i)->getPrecioTotal()<<"#"<<
                 listaFacturas.at(i)->getIva()<<"#"<<
                 listaFacturas.at(i)->getFecha()<<"#"<<
                 listaFacturas.at(i)->getIdFactura()<<"#"<<
                 listaFacturas.at(i)->getEstado()<<"#"<<
                 listaFacturas.at(i)->getForma_de_Pago()<<"#"<<
                 listaFacturas.at(i)->getCliente()->getIdCliente()<<"#"<<
                 listaFacturas.at(i)->getEmpleado()->getIdEmpleado()<<
                 endl;
    }
    myfile.close();
}

void Service::escribirVideojuegos(){
    ofstream myfile;
    myfile.open ("videojuegos.txt");
    //int stock,float precio,string genero,string nombre,string desarrolladora, string fechaLanzamiento
    for(int i = 0 ; i < listaVideojuegos.size(); i++){
        myfile<<
                 listaVideojuegos.at(i)->getStock()<<"#"<<
                 listaVideojuegos.at(i)->getPrecio()<<"#"<<
                 listaVideojuegos.at(i)->getGenero()<<"#"<<
                 listaVideojuegos.at(i)->getNombre()<<"#"<<
                 listaVideojuegos.at(i)->getDesarrolladora()<<"#"<<
                 listaVideojuegos.at(i)->getFechaLanzamiento()<<
                 endl;
    }
    myfile.close();
}

void Service::escribirTodo(){
    escribirClientes();
    escribirEmpleados();
    escribirFacturas();
    escribirVideojuegos();
}

Cliente* Service::buscarCliente(string idCliente){
    Cliente * cliente;
    for(int i = 0; i < listaClientes.size(); i++){
        if(listaClientes.at(i)->getIdCliente() == idCliente) {
            cliente = listaClientes.at(i);
            break;
        }
    }
    return cliente;
}

Empleado* Service::buscarEmpleado(string idEmpleado){
    Empleado * empleado;
    for(int i = 0; i < listaEmpleados.size(); i++){
        if(listaEmpleados.at(i)->getIdEmpleado() == idEmpleado) {
            empleado = listaEmpleados.at(i);
            break;
        }
    }
    return empleado;
}
