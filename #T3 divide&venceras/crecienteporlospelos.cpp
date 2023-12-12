#include <iostream>
using namespace std;

const int max = 10000;
int v[max];

// 1 1 1 2 3 3 3 4 4 5 5 5 5 5 -> 5 escalones
// -> CUANTOS ESCALONES TIENE
//COMPLEJIDAD => retativa al numero de escalones
int crecienteporlospelos(int v[], int a, int b){ // manera iterativa 


    if(v[a] - v[b] <= 1){
        return true;
    }
    if(v[a] - v[b] > b - a){
        return false;
    }
    //CASO RECURSIVO
    int m = (a + b) / 2;
    int izq = crecienteporlospelos(v ,0 , m);
    int dch = crecienteporlospelos(v ,m + 1 , b);

    int ret;
    if(v[m] == v[m+1]){
        --ret;
    }
    return izq && dch && (v[m+1] - v[m] <= 1);
}

int main(){
    int tam;
    cin >> tam;
    int i = 0;
    while(tam > i){
        cin >> v[tam];
        ++i;
    }
    int n;
    

    crecienteporlospelos(v ,0 , n);

    return 0;
}