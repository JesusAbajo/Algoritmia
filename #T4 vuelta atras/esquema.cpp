#include <iostream>
using namespace std;

//SON SIEMPRE EXPONENCIALES PERO HAY REDUCCIONES PARA MEJORARLA

void vueltaAtras (  
                    //descripcion del problema
                    int n, 
                    //parametro solucion parcial
                    Array solParcial, 
                    //"como vamos"
                    int k,...
                ){
    //Caso Base
    if(k == n){
        //tratar solucion
        return;
    }
                    
    
    //Caso Recursivo
    para cada posible "posicion"
        if(solParcial + posicion es prometedora)
            vueltaAtras(
                n,
                solParcial + psoicion,
                k + 1
            );


}

int main(){

    return 0;
}