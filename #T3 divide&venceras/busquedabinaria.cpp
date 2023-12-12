#include <iostream>
using namespace std;

//eercicio juez con una unica busqueda binaria
//y llama a la resolucion => la m es la prueba que hacemos 1 2 3 4 5...

const int max = 100000;
int v[max];

int busquedabinaria(int v[], int a, int b, int num){
    //si el elemento no esta => devuelve la pos donde deberia estar
    /* para si esta o no est => devuelve el sitio donde deberia estar 
                                o el primero en e lque no esta
     SI EXISTE EL NUM EN EL VECTOR:
        lower_bound = el primer num
        upper_bound = el sitio donde deja de estar
     SI NO EXISTE EL NUM EN EL VECTOR:
        lower_bound = donde deberia estar
        upper_bound = donde deberia estar
    
        EN EL CASO DE QUE NO ESTE NI PUDIERA ESTAR => SE DEVUELVE N
        2 3 4 6 6 8 10        low   upp
        busquedabinaria(12) = n(7)  n(7)
        busquedabinaria(6)  = 3     5
        busquedabinaria(5)  = 2     2
        busquedabinaria(10) = 6     n(7)
    */
    return 1;
}

int lower_bound(int v[], int a, int b, int elem){
    //busca en [a, b)
    /*mirar en el centro y hacer pequeño el vector*/

    while(a < b){
        int m = (a + b) / 2;
        if(v[m] < elem){
            a = m + 1;
        }else{
            b = m;
        }
    }
    return a;

    /*
    upper_bound(...){
        while(a < b){
            int m = (a + b) / 2;
            if(v[m] <= elem){
                a = m + 1;
            }else{
                b = m;
            }
        }
        return a;
    }
    */
}

int main(){

    int n, peticion;
    cin >> n >> peticion;

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    busquedabinaria(v, 0, n, peticion);


    return 0;
}
