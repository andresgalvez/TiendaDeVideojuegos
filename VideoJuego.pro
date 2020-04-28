TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QT += sql
SOURCES += \
        Cliente.cpp \
        Empleado.cpp \
        Factura.cpp \
        Persona.cpp \
        Service.cpp \
        Videojuego.cpp \
        main.cpp

HEADERS += \
    Cliente.h \
    Empleado.h \
    Factura.h \
    Persona.h \
    Service.h \
    VideoJuego.h \
    Videojuego.h
