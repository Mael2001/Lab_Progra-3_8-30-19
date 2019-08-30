#include "Nodo.h"

Nodo::Nodo() : valor(-1), siguiente(nullptr) {}
Nodo::Nodo(int _valor, Nodo *_siguiente)
{
    setValor(_valor);
    setSiguiente(_siguiente);
}
Nodo::~Nodo() {}

void Nodo::setValor(int _valor)
{
    this->valor = _valor;
}

int Nodo::getValor()
{
    return valor;
}

void Nodo::setSiguiente(Nodo *_siguiente)
{
    this->siguiente = _siguiente;
}

Nodo* Nodo::getSiguiente(void)
{
    return this->siguiente;
}