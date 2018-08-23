#include <iostream>
#include <cstdlib>
#include "Lista.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

typedef struct{
    int rg;
    string nome;
}Dados;


int main(){
    Dados listaseq[10];
    int rg,i=0;
    string rgAux,line,aux;
    ifstream listaTeste("NomeRG10.txt");
    if(listaTeste.is_open()){
        while (getline(listaTeste,line)){
            stringstream ss(line);
            getline(ss,listaseq[i].nome,',');
            getline(ss,rgAux,',');
            stringstream aux(rgAux);
            aux>>listaseq[i].rg;
            i++;
        }


    }
    for(i=0;i<10;i++)
        cout<<listaseq[i].nome<<endl;
    return 0;
}

