#include <cstdlib>
#include <iostream>

#include "Lista.h"

using namespace std;

Lista::Lista(){
    primeiro = NULL;
    atual = NULL;
    aux = NULL;
}

void Lista::AdicionaNode(int addData){
    nodePnt n = new node;
    n->prox=NULL;
    n->rg = addData;

    if (primeiro != NULL){
        atual = primeiro;
        while(atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = n;
    }
    else{
        primeiro = n;
    }
}

void Lista::DeletaNode(int delData){
    nodePnt delPont = NULL;
    aux = primeiro;
    atual = primeiro;
    while(atual != NULL && atual->rg !=delData){
        aux = atual;
        atual = atual->prox;
    }
    if(atual==NULL){
        cout << delData << "Não estava na lista\n";
        delete delPont;
    }
    else{
        delPont = atual;
        atual = atual->prox;
        aux->prox=atual;
        if(delPont==primeiro){
            primeiro = primeiro->prox;
            atual = NULL;
        }
        delete delPont;
        cout << delData << " Foi deletado\n";
    }
}

void Lista::ImprimeLista(){
    atual = primeiro;
    while(atual != NULL){
        cout << atual->rg<<endl;
        atual= atual->prox;
    }

}
