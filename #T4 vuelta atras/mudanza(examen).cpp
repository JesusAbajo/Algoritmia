#include <iostream>
using namespace std;

/*
    array con pesos/tamaños y cajas todas del mismo tamaño
    minimo numero de cajas
    */

void mudanza(    
            //descipcion del problema
            int peso[],
            int n, //numero de objetos
            int c, //capacidad caja
            //solucion parcial
            int solParcial[], // a que caja va cada objeto el numero representa donde esta
            int k,

            //Marcaje
            int numCajasParciales,
            int capacidadRestante[], // cada entrada es una caja y muestra cuanto espacio le queda libre

            //mejor solucion
            int mejorSolucion[], // formato solucion parcial
            int &minCajas //parametro de salida => el "return"
            ){
    
    if(n == k){
        if(minCajas < numCajasParciales){
            minCajas = numCajasParciales;
            //for.... meorsolucion = solParcial; => esto hay que implementarlo
        }
        return;
        
    }
    //probamos  ameter el obeto en una caja que ya esta a medias
    for(int i = 0; i < numCajasParciales ; ++i){
        if(capacidadRestante[i] >= peso[k]){
            capacidadRestante[i] -= peso[k];
            solParcial[k] = i;
            mudanza( peso, n, c, solParcial, k + 1,
                numCajasParciales, capacidadRestante,
                mejorSolucion, minCajas);
            capacidadRestante[i] -= peso[k];
        }

    }

    //metemos en una nueva caja
    if((numCajasParciales + 1) < mejorSolucion){
        capacidadRestante[numCajasParciales] = c - peso[k];
        solParcial[k] = numCajasParciales;
        mudanza( peso, n, c, solParcial, k + 1,
            numCajasParciales + 1, capacidadRestante,
            mejorSolucion, minCajas);
    }

}

int main(){

    mudanza();

    return 0;
}