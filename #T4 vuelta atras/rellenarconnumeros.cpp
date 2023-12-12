#include <iostream>
using namespace std;


/*
rellenar vector 2 x n [ , , , , , ,...]

el dos representa las repeticiones de los numeros
con los numeros (ejemplo) 1, 2, 3 
        => estando estos numeros separados por su valor
        3 1 2 1 3 2    1's separados por '2'
                       2's separados por '1 3'
                       3's separados por '1 2 1'


    en la sresolucion se dejan huecos y teemos que decidir que meter en ese hueco

    ver si posicion esta ocupada
    desde la posición que miramos, esta todo lleno
*/


void rellenarconnumeros(
                        //descripcion del problema
                        int n,
                        //solucion parcial
                        int solParcial[],
                        int nextPos,
                        bool ocupado[] //vector con las posiciones ocupadas a true

){
    //caso base
    if(nextPos == 2*n){
        for(int i= 0; i < n; ++i){
            if(i != 0)cout << ' ';
            cout << solParcial[i];
        }
        cout <<'\n';
        return;
    } 

    //caso recursivo
    if(ocupado[nextPos]){
        rellenarconnumeros(n, solParcial, nextPos + 1, ocupado);
        return;
    }


    //probamos a poner 1...n
    for(int i = 0; i <= n ; ++i){
        //¿Podemos poner i en solParcial[nextPos]?
        //usamos marcaje
        /* seguro q lo saco... s*/
    }

}
