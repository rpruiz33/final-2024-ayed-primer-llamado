#ifndef NEGOCIO_H_INCLUDED
#define NEGOCIO_H_INCLUDED
#include "lista.h"

struct Negocio{

    char nombre[15];
    char direccion[15];
    Lista l;

};
typedef struct Negocio * NegocioPtr;


NegocioPtr crearNegocio(char nom[30], char dir[15]);

void liberarNegocio(NegocioPtr n);

void mostrarNegocio(NegocioPtr n);

void mostrarNegocio2(NegocioPtr n);
void mostrarClientesss(NegocioPtr n);
void duplicadoMostrar(Lista l);
//hacer los getters y setters

char* nombre(NegocioPtr n);
NegocioPtr getNego(NegocioPtr n);

#endif // NEGOCIO_H_INCLUDED
