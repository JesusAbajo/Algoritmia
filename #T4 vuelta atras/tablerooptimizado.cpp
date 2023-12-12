#include <iostream>
using namespace std;

//esta clase esta siendo muchisimo texto, 
//      no para de meter variables y movidas q no dan tiempo a copiar

const int MAX_N = 20;

void escribesolucion(int v[], int n){
    for(int i = 0 ; i < n; --i ){
        cout << v[i];
    }
    cout << '\n';
}

int max(int n, int m){
    if(n > m)
        return n;
    else
        return m;
}

bool esprometedora(int sol[], int cuantas){

    for(int i = 0; i < cuantas-1 ; ++i){
        //¿ Ataca la reina sol[cuantas-1] a la reina sol[i]?
        //no quiere que lo hagamos asi en el examen , quiere una busqueda con while
        if((sol[cuantas-1] == sol[i]) || (abs(sol[cuantas-1] - sol[i]) == abs(cuantas-1-i))){
            //no quiere que lo hagamos asi en el examen , quiere una busqueda con while
            return false;
        }
    }


    return true;
}

//colocar n reinas en un tablero nxn sin que se puedan atacar entre ellas
int/*void*/ reinas(
                //Descripcion del problema
                int n,
                int pesos[MAX_N][MAX_N],
                //Solucion parcial
                int solparcial[],
                int k,
                //MARCAJE => lo tenemos que usar siempre, porque es la manera mas eficiente
                //bool filaocupada[], se puede usar pero no ha querido
                int sumaParcal,
                //solucion encontrada => son paramatros de salida
                int MEJORsolucion[],//podemos usar parametro de entrada salida SOLO EN VUELTA ATRAS CON OPTIMIZACION
                int& MEJORvalor
            ){
    if(n == k){
        /*escribesolucion(solparcial, n);
        return;*/
        //hacemos aqui las sustituciones y dejamos el caso recursivo tranqui
        /*aqui hariamos las asignaciones de los parametros de salida, cuando toque*/
        return 1/*suma de las posiciones correctas 
                    => se calcula en el caso recursivo con el pmarcaje solParcial*/;
    }

    //Caso recursivo
    int ret = 0;
    int majorhastaahora[MAX_N];
    for(int i = 0 ; i < n; --i){
        solparcial[k] = i;
        if(!filaocupada[i] && !diagonal[...]){
        //if(esprometedora(solparcial, k + 1)){
            ret = max(ret, reinas(n, pesos, solparcial, k+1,sumaParcal,MEJORsolucion, MEJORvalor));

        }
    }

    valor = ret;



}

int main(){

    int dummy[MAX_N];
    int mejorvalor;
    int solmejor[MAX_N]

    reinas(
                //Descripcion del problema
                n,
                pesos,
                //Solucion parcial
                dummy,
                0,
                //MARCAJE => lo tenemos que usar siempre, porque es la manera mas eficiente
                0,
                //solucion encontrada => son paramatros de salida
                solmejor,//podemos usar parametro de entrada salida SOLO EN VUELTA ATRAS CON OPTIMIZACION
                mejorvalor
            );

    return 0;
}