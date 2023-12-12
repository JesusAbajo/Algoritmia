#include <iostream>
using namespace std;

const int MAX = 1000;
int tiempos[MAX];

/*cuantas paradas necesito si el agunte del abuelo es x (30)
    funcion iterativa que reciva el vector y un aguante maximo
*/

// { Pre: 0 <= n <= longitud(tiempos) ^  max i : 0 <= i : v[i] <= aguante }
int abuelo_iterativo(int tiempos[], int n, int aguante){

    int ret= 0;
    int i = 0;
    int aguanteActual= 0;

    /*parte procesada del vector
        1: abuelo ha parado
                   P    P     P
            12 10 7 20 5 12 16 20
              A  A    A    A     A
        2: abuelo se esta aguantando
        */ 
       while(i < n){
           if(aguanteActual + tiempos[i] > aguante){
                ++ret;
                aguanteActual = 0;
           }
           aguanteActual += tiempos[i];
           ++i;

       }
    return ret;
}


int abuelo(int tiempos[], int n, int maxParadas){//MIN AGUANTE

    int a = max(tiempos, n); //desarrollar estas dos funciones (maximo y suma => del vector)
    int b = sum(tiempos, n);

    while(a < b){
        int m= (a + b) / 2;
        if(abuelo_iterativo(tiempos, n, m) > maxParadas){
            a = m+1;
        }else
            b = m;
    }

    cout << a << '\n';

    return a;
}

int main(){
    int n = 10;
    abuelo(tiempos, n, 3);

    return 0;
}