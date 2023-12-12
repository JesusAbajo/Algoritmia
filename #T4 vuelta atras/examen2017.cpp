#include <iostream>
using namespace std;

//1 1 2 2 2 3 3 3
/*
n = 8 => tamaño del vector
v[0] = 1 => nos dan el comienzo del vector
d = 2  => numero de veces maximo que se puede repetir un numero
*/

/*
Para hacer vuelta atras, necesitamos que
las soluciones parciales sean prometedoras

ejemplo para datos de arriba 1 1 2 2 
*/

const int max = 100;
int v[max];

void examne2017(
                //descipcion del problema
                int n,
                int d,
                //solucion parcial
                int solParcial[],
                int k //por lo general pasa con un 0 pero este caso es especial

){
    //caso base
    if(n == k){
        for(int i= 0; i < n; ++i){
            if(i != 0)cout << ' ';
            cout << solParcial[i];
        }
        cout <<'\n';
        return;
    }
    //caso recursivo

    //caso 1 añado v[k-1]
    if( (k < d) || v[k-1] != v[k-d] ){
        solParcial[k] = v[k-1];
        examne2017(n, d, solParcial, k+1);
    }

    //caso 2 añado v[k-1] + 1
    solParcial[k] = v[k-1] + 1;
    examne2017(n, d, solParcial, k+1);

}

int main(){

    int n , d, prim;
    cin >> n, d, prim;
    v[0] = prim;

    examne2017(n, d, v, 1);

}