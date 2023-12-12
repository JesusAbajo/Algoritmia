#include <iostream>
using namespace std;

void anual(
            //descripcion del problema
            int n,
            float tiempoDisponible,
            float c1[], float c2[], //cuatrimestres => puntuaciona en el exame de cada tema
            float tiempo[],  //tiempo por tema

            //solucion parcal
            bool solParcial[], //no hace falta la solucion parcial porque no nos preguntan los tema que hemos estudiado
            int k,

            //Marcaje
            float tiempoUsado,
            float notaParcial,
            float notaParcialC1,
            float notaParcialC2,
            float pendienteC1, //maxima puntuacion con los que nos nos 
            float pendienteC2, //vamos a estudiar descontados de la nota

            //Mejor solucion
            bool mejorSolucion[],
            //"marcaje de la mejor solucion"
            float &notaOptima
            ){


    //Caso base
    if(k == n){
        if(notaParcial > notaOptima){
            notaOptima = notaParcial;
            for(int i = 0; i < n; ++i){
                mejorSolucion[i] = solParcial[i];
            }
        }
        return;
    }

    //Caso recursivo

    //caso 1: me estudio el tema k+1
    solParcial[k] = true;
    if((tiempoUsado + tiempo[k]) <= tiempoDisponible){
        anual(n, tiempoDisponible, c1, c2, tiempo,
            solParcial, k+1,
            tiempoUsado + tiempo[k],
            notaParcial + c1[k] + c2[k],
            notaParcialC1 + c1[k], 
            notaParcialC2 + c2[k],
            pendienteC1 - c1[k],
            pendienteC2 - c2[k],
            mejorSolucion, notaOptima);
    }
    //caso 2: no me lo estudio
    if((notaParcialC1 + pendienteC1 - c1[k] >= 5) &&
        (notaParcialC2 + pendienteC2 - c2[k] >= 5)){

        if((notaParcialC1 + pendienteC1 - c1[k] + notaParcialC2 + pendienteC2 - c2[k]) > notaOptima){
            solParcial[k] = false;
            
            anual(n, tiempoDisponible, c1, c2, tiempo,
                        solParcial, k+1,
                        tiempoUsado, notaParcial,
                        notaParcialC1, notaParcialC2,
                        pendienteC1 - c1[k],
                        pendienteC2 - c2[k],
                        mejorSolucion, notaOptima);
        }
    }

    return;
}

int main(){

    anual();

    return 0;
}

