#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "negocio.h"
#include "cola.h"
struct NodoA {
    void * data;
    Nodo proximo;
};

struct ColaE{
  NodoPtr primero;
};
NodoPtr crearNodoCola(ColaPtr c, void *data){
NodoPtr no=malloc(sizeof(struct NodoA));
no->data=data;
no->proximo=NULL;
return no;

}
ColaPtr crearCola(){
ColaPtr co=malloc(sizeof (struct ColaE));
co->primero=NULL;
return co;


}
int encolar(ColaPtr c, void *data){
if (c==NULL){
    return 0;
}
if (data==NULL){
   return 0;
}
NodoPtr no =crearNodoCola(c,data);

   c->primero=no;
   printf("%s---encolando\n",(getNombre((ClientePtr)no->data)));

return 1;
}

