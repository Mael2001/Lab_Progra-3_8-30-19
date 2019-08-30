#include "ListaEnlazada.h"
#include <iostream>
using namespace std;
int main(){
    ListaEnlazada lista;
    lista.agregar(69);
    lista.agregar(4);
    lista.agregar(7);
    lista.agregar(3);
    lista.agregar(1);
    
    lista.imprimir();
    cout<<lista.buscar(69)<<endl;
    cout<<lista.buscar(62)<<endl;
    cout<<"\n\n\n";
    lista.eliminar(3);
    lista.imprimir();
    cout<<"\n\n\n";
    lista.eliminarEn(3);
    lista.imprimir();
}