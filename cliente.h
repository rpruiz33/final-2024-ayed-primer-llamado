#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED



struct Cliente;


typedef struct Cliente  * ClientePtr;

ClientePtr crearCliente(char n[15], int c, int e, float g);

void liberarCliente(ClientePtr c);

void mostrarCliente(ClientePtr c);


//hacer los getters y setters

char* getNombre(ClientePtr c);
#endif // CLIENTE_H_INCLUDED
