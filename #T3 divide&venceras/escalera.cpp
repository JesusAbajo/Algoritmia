#include <iostream>
using namespace std;

const int MAXi = 10000;
int v[MAXi];


int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }

}

// 1 1 1 2 3 3 3 4 4 5 5 5 5 5 -> 5 escalones
// -> CUANTOS ESCALONES TIENE
//COMPLEJIDAD => retativa al numero de escalones
int escalera(int v[], int a, int b){ // manera iterativa 

    if(v[a] == v[b]){
        return 1;
    }

    //CASO RECURSIVO
    int m = (a + b) / 2;
    int izq = escalera(v ,0 , m);
    int dch = escalera(v ,m + 1 , b);

    int ret;
    if(v[m] == v[m+1]){
        --ret;
    }
    return ret;
}

void peldañomaslargo(int v[],int a, int b,
                int &anchoMax,
                int &anchoPrim,
                int &anchoUlt){

    if(v[a] == v[b]){
        anchoMax = anchoPrim = anchoUlt = b - a + 1;
        return;
    }



    int m =(a + b)/ 2;
    int anchoMaxIzq;
    int anchoPrimIzq;
    int anchoUltIzq;
    int anchoMaxDch;
    int anchoPrimDch;
    int anchoUltDch;

    peldañomaslargo(v, a, m, anchoMaxIzq, anchoPrimIzq, anchoUltIzq);
    peldañomaslargo(v, a, m, anchoMaxDch, anchoPrimDch, anchoUltDch);

    anchoPrim = anchoPrimIzq;
    anchoUlt = anchoUltDch;
    anchoMax = max(anchoMaxIzq, anchoPrimDch);

    if(v[a] == v[m + 1]){
        anchoPrim+= anchoPrimDch;
    }
    if(v[m] == v[b]){
        anchoUlt += anchoUltIzq;
    }

    if(v[m] == v[m+1]){
        anchoMax = max(anchoMax, anchoUltIzq + anchoUltDch);
    }

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
    

    escalera(v ,0 , n);

    return 0;
}