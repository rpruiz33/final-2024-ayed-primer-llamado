#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "negocio.h"
#include "cliente.h"
#include "lista.h"



NegocioPtr crearNegocio(char nom[15], char dir[15]) {
    NegocioPtr n = (NegocioPtr) malloc(sizeof(struct Negocio));
    if (n == NULL) {
        // Manejo de error si la asignación de memoria falla
        return NULL;
    }

    strcpy(n->nombre, nom);
    strcpy(n->direccion, dir);

n->l=(Lista)crearLista(sizeof(ClientePtr));
    return n;
}


void liberarNegocio(NegocioPtr n){

    free(n);


}

void mostrarNegocio(NegocioPtr n) {
    ordenarElementosListaXedad(n->l);
    printf("---------- NEGOCIO ------------\n");
    printf("NOMBRE: %s\n", n->nombre);
    printf("DIRECCION: %s\n", n->direccion);
    printf("\nClientes:\n");

    mostrarClientesss(n);

}
void mostrarClientesss(NegocioPtr n){

   Nodo nodoActual = getPrimero(n->l);


    while (nodoActual != NULL) {

        ClientePtr clienteActual = getData(nodoActual);
        mostrarCliente(clienteActual);


        nodoActual = getProximo(nodoActual);
    }
}


void mostrarNegocio2(NegocioPtr n) {
void* backup;
remover(n->l,4 , &backup);

mostrarNegocio(n);
}

void duplicadoMostrar(Lista l){
    duplicarLista( l);
 // Obtener el primer nodo de la lista de clientes del negocio
    Nodo nodoActual = getPrimero(l);

    // Iterar sobre la lista de clientes e imprimir la información de cada cliente
    while (nodoActual != NULL) {
        // Obtener el cliente del nodo actual y mostrar su información
        ClientePtr clienteActual = getData(nodoActual);
        mostrarCliente(clienteActual);

        // Actualizar al siguiente nodo en la lista de clientes
        nodoActual = getProximo(nodoActual);
    }

}
//hacer los getters y setters
NegocioPtr getNego(NegocioPtr n){
return n;
}
