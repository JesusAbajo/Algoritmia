#include <iostream>
using namespace std;



void mochila(
                //descripcion del problema
                int n,
                int pesos[],
                int valor[],
                int capmochila,

                //solucion parcial
                bool solParcial[],
                int k,

                // marcaje
                int valorSolParcial,
                int pesoSolParcial,

                //solucion mejor
                bool mejorSolucion[],
                int &mejorValor,
                int &pesoOptimo

){

    if(k == n){
        if(valorSolParcial > mejorValor){
            mejorValor = valorSolParcial;
            pesoOptimo = pesoSolParcial;
                for(int i = 0; i < n ; ++i){
                    mejorSolucion[i] = solParcial[i];
                }

        }
    }

    // que hacemos con el producto k + 1?

    //caso 1: lo cogemos
    if(pesoSolParcial + pesos[k] <= capmochila)
    solParcial[k] = true;
    mochila(n, pesos, valor, capmochila, solParcial, k+1,
                valorSolParcial + valor[k], pesoSolParcial + pesos[k],
                mejorSolucion, mejorValor, pesoOptimo);

    //caso 2: no lo cohemos
    solParcial[k] = false;
    mochila(n, pesos, valor, capmochila, solParcial, k+1,
                valorSolParcial, pesoSolParcial,
                mejorSolucion, mejorValor, pesoOptimo);


}
