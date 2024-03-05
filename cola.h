#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

struct ColaE;
struct nodoaA;
typedef struct ColaE * ColaPtr;
typedef struct NodoA * NodoPtr;
NodoPtr crearNodoCola(ColaPtr c, void *data);
ColaPtr crearCola();
int encolar(ColaPtr c, void *data);
NodoPtr getPrimeroCola(ColaPtr c);
void setPrimeroCola(ColaPtr c, NodoPtr pri);
void mostrarCola(ColaPtr co);
#endif // COLA_H_INCLUDED
