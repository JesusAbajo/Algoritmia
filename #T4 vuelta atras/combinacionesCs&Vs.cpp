#include <iostream>
using namespace std;

void combinaciones(string prefix, int numV, int numC){
/*
    prefix => son las letras que ya sabemos que ntenemos que escribir

    [5, 5]    prefix
    C[4, 5] => "C" + C[3, 5] => ...
                       => ...
            => "C" + V[4, 4]
    V[5, 4]

    caso base [0, 0]
        Se escribe en el caso base

    
*/

//caso base 
if((numV == 0) && (numC == 0)){
    //if((prefix.find("CCC")) || (prefix.find("VVV"))) paraq que no salgan esas pero si se procesan => fuerza bruta (MALO)
    cout << prefix << '\n';
    return; //termina la iteracion de la funcion
}

//caso recursivo
//complejidad a = 2, b = 1, k = 0 => O(2^n) pero es mejor que fuerza bruta
if(numC > 0){ 
    if((prefix.size() < 2) || (prefix[prefix.size() - 1] != 'C' || prefix[prefix.size() - 1] != 'C'))
        combinaciones(prefix + "C", numC - 1, numV);
}
if(numV > 0){
    if((prefix.size() < 2) || (prefix[prefix.size() - 1] != 'V' || prefix[prefix.size() - 1] != 'V'))
        combinaciones(prefix + "V", numC, numV - 1);
}
    
}


int main(){
    combinaciones("", 5, 5);
    return 0;
}