#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

#include "Nodo.h"

class ListaEnlazada
{
private:
    Nodo *primero;
    int cantidadElementos();
    bool estaVacia(void);

public:
    ListaEnlazada();
    void agregar(int nodo);
    void imprimir(void);
    void eliminarEn(int);
    void eliminar(int);
    bool buscar(int);
};

#endif
