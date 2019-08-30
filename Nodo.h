#ifndef NODO_H
#define NODO_H

class Nodo
{
private:
    int valor;
    Nodo *siguiente;

public:
    Nodo();
    Nodo(int, Nodo *);
    ~Nodo();

    void setValor(int);
    int getValor();

    void setSiguiente(Nodo *);
    Nodo *getSiguiente();
};

#endif