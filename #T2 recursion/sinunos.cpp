#include <iostream>
using namespace std;

bool noTieneUnos(int n){


    return true;
}

int sinunos(int n){
    //CASO BASE
    if(n == 1)
        return 1;
    else if(n < 10)
        return n-1;
    //---
    
    int raiz = n /10;
    int d = n % 10; //numero menos significativo
    int ret = 0;

    //1.- contamos los numeros 
    //  con la misma raiz que n
    if(noTieneUnos(raiz)){
        if(d==1)
            ++ret;
        else if (d > 1)
            ret += d-1;
    }//aun asi este se puede mejorar

    /*SOLUCION NO TAN BUENA
        for(int i = 10*raiz; i< n; ++i){
            if(noTieneUnos(i))
            ++ret;
        }
    */


    //2.- contamos los numeros 
    //  con raiz menor que n
    ret += sinunos(n / 10) * 9;

    return ret;
}

//complejidad O(log n)
int sinunosGenerlizado(int n, /* out */ bool &tieneUnos){ //se hace asi
    //CASO BASE
    if(n == 1){
        tieneUnos = true;
        return 1;
    }
    else if(n < 10){
        tieneUnos = false;
        return n-1;
    }
    //---
    
    int raiz = n /10;
    int d = n % 10;
    int ret = 0;

    bool raizConUnos;
    ret +=sinunosGenerlizado(raiz , raizConUnos) * 9;

    //1.- contamos los numeros 
    //  con la misma raiz que n
    if(!raizConUnos){
        if(d==1)
            ++ret;
        else if (d > 1)
            ret += d-1;
    }//aun asi este se puede mejorar

    /*SOLUCION NO TAN BUENA
        for(int i = 10*raiz; i< n; ++i){
            if(noTieneUnos(i))
            ++ret;
        }
    */


    //2.- contamos los numeros 
    //  con raiz menor que n
    tieneUnos = raizConUnos || (d == 1);

    return ret;
}


int main(){
    int n;
    cin >> n;
    bool cosa;
    cout << sinunosGenerlizado(n, cosa);

    return 0;
}