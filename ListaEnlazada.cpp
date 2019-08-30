#include "ListaEnlazada.h"
#include <iostream>

using std::cout;

ListaEnlazada::ListaEnlazada() : primero(nullptr) {}

bool ListaEnlazada::estaVacia()
{
    return primero == nullptr;
}

void ListaEnlazada::agregar(int _valor)
{
    Nodo *nuevo = new Nodo(_valor, nullptr);

    if (estaVacia())
    {
        primero = nuevo;
    }
    else
    {
        Nodo *actual = primero;
        while (actual != nullptr)
        {
            if (nuevo->getValor() < primero->getValor())
            {
                nuevo->setSiguiente(primero);
                primero = nuevo;
                return;
            }
            else if (actual->getSiguiente() == nullptr)
            {
                actual->setSiguiente(nuevo);
                return;
            }
            else if (nuevo->getValor() < actual->getSiguiente()->getValor())
            {
                nuevo->setSiguiente(actual->getSiguiente());
                actual->setSiguiente(nuevo);
                return;
            }
            actual = actual->getSiguiente();
        }
    }
}

void ListaEnlazada::imprimir()
{
    Nodo *actual = primero;
    while (actual != nullptr)
    {
        cout << "[" << actual->getValor() << "]" << std::endl;
        actual = actual->getSiguiente();
    }
}

void ListaEnlazada::eliminar(int valor)
{
    if (estaVacia())
    {
        cout << "La Lista Esta Vacia" << std::endl;
        return;
    }
    else
    {

        Nodo *actual = primero;
        Nodo *anterior = nullptr;
        while (actual != nullptr)
        {
            if (valor == actual->getValor())
            {
                if (actual == primero)
                {
                    primero = actual->getSiguiente();
                }
                else if (actual->getSiguiente() == nullptr)
                {
                    anterior->setSiguiente(nullptr);
                }
                else
                {
                    anterior->setSiguiente(actual->getSiguiente());
                }
                delete actual;
                return;
            }
            anterior = actual;
            actual = actual->getSiguiente();
        }
    }
}
void ListaEnlazada::eliminarEn(int pos)
{
    if (estaVacia())
    {
        return;
    }
    else if (pos > cantidadElementos())
    {
        cout << "No Esta En El Rango";
        return;
    }
    else
    {
        int cont = 1;
        Nodo *actual = primero;
        Nodo *anterior = nullptr;
        while (actual != nullptr)
        {
            if (pos == cont)
            {
                if (actual == primero)
                {
                    primero = primero->getSiguiente();
                }
                else
                {
                    anterior->setSiguiente(actual->getSiguiente());
                }
                return;
            }
            cont++;
            anterior = actual;
            actual = actual->getSiguiente();
        }
    }
}

int ListaEnlazada::cantidadElementos()
{
    int cont = 0;
    Nodo *actual = primero;
    while (actual != nullptr)
    {
        cont++;
        actual = actual->getSiguiente();
    }
    return cont;
}
bool ListaEnlazada::buscar(int _valor)
{
    Nodo *actual = primero;
    while (actual != nullptr)
    {
        if (actual->getValor() == _valor)
        {
            return true;
        }
        actual = actual->getSiguiente();
    }
    return false;
}