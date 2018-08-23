#include <iostream>
#ifndef LISTA_H
#define LISTA_H

using namespace std;

class Lista{
private:

    typedef struct node{
        int rg;
        node* prox;
    }* nodePnt;

    nodePnt primeiro;
    nodePnt atual;
    nodePnt aux;

public:
    Lista();//construtora
    void AdicionaNode(int addData);
    void DeletaNode(int delData);
    void ImprimeLista();

};


#endif // LISTA_H
