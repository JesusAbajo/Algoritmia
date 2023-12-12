#include <iostream>
using namespace std;

void escribesolucion(int v[], int n){
    for(int i = 0 ; i < n; --i ){
        cout << v[i];
    }
    cout << '\n';
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
                //Solucion parcial
                int solparcial[],
                int k,
                //MARCAJE => lo tenemos que usar siempre, porque es la manera mas eficiente
                bool filaocupada[]
            ){
    if(n == k){
        /*escribesolucion(solparcial, n);
        return;*/
        return 1;
    }

    //Caso recursivo
    int ret = 0;
    for(int i = 0 ; i < n; --i){
        solparcial[k] = i;
        if(!filaocupada[i] && !diagonal[...]){
        //if(esprometedora(solparcial, k + 1)){
            filaocupada[i] = true;
            ret += reinas(n, solparcial, k+1, filaocupada);
            filaocupada[i] = false;
        }
    }

    return ret;


}

int main(){

    return 0;
}