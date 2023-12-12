#include <iostream>
using namespace std;


bool ordenado(int v[], int a, int b){

    return true;
}
/*
    a = 1, b = 2, k = 1 => nlogn
    ESTE NO VALE
*/
int chucknorris(int v[], int a, int b){

    //caso recursivo
    if(ordenado())
        return b-a+1;
    else    
        int m = (a + b) / 2;
        return chucknorris(v, m + 1, b);


    return 0;
}


/*
empezamos comprobando si una parte del vector esta ordenada => si no lo está coge el return 
                                                            => si lo está, prueba con el siguiente


    m => parte por la mitad
    llamo chucnorris(v, m+1, b) => la segunda mitad



    a = 2, b = 2, k = 0     => O(n) 
*/

int main(){

    chucknorris();

    return 0;
}