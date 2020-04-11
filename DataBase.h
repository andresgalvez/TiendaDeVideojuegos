#ifndef _DB_H
#define _DB_H
#include<libmysqlcppconn-dev>
#include <driver/mysql_connection.h>
#include <stdio.h>
#include<iostream>
#include<Cliente.h>
#include<Empleado.h>
#include<Factura.h>
#include<Persona.h>
#include<VideoJuego.h>


#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace sql;
using namespace std;
#define DB_NAME "nombredatabase"
#define DB_HOST "tcp://127.0.0.1/"
#define DB_PORT 3306
#define DB_USER "root"
#define DB_PASS "clave"

class Database {
private:
    // singleton instance
    static Database *instance;

    Driver *driver;
    ConnectOptionsMap connection_properties;

    // private CTOR (singleton)
    Database();
public:
    static Database& getInstance();

    Connection *getConnection();

    virtual ~Database() {}
};

#endif / Database_hpp /
