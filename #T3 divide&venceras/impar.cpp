#include <iostream>
using namespace std;

const int max = 10000;
int v[max];


int impar(int v[], int a, int b){ // manera iterativa

    //CASO BASE



    //CASO RECURSIVO
    int m = (a + b) / 2;
    if(v[m] % 2 == 1){
        return v[m];
    } 

    //REVISAR EL VALOR ESPERADO , SEGURAMENTE ESTE MAL
    int valorEsperado = v[a] + 2*(m -a);

    if(v[m] < valorEsperado){

    }else if(v[m] > valorEsperado){

    }


    return 0;
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
    

    impar(v ,0 , n);

    return 0;
}