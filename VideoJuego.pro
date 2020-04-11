TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QT += sql
SOURCES += \
        Implementacion.cpp \
        main.cpp

HEADERS += \
    Cliente.h \
    Empleado.h \
    Factura.h \
    Persona.h \
    VideoJuego.h \
    Videojuego.h
