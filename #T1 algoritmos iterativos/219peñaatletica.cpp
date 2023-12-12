#include <iostream>
using namespace std;

/* EN ESTE ARCHIVO C++ TENEMOS UN CONTADOR DE PARES Y UNA FUNCION QUE DETECTA SI HAY PARES O NO*/

const int MAX = 100000;
int v[MAX];

//{Pre: 0 <= n <= longitud(v)}
int numPares(int v[], int n)/* return ret*/{
    int ret = 0;
    int i = 0;
    // I   -> todos los sitios donde se tiene que cumplir
    while(i < n){// la condicion del bucle se llama B
        /* { I : (0 <= i <= n) ^
                ret = # j : 0 <= j < i: v[j] mod 2 = 0  (de 0 a i)
                }   ^ B         */  
        if(v[i] % 2 == 0)
            ++ret;
        ++i;
        // I
    }
    // I ^ ¬B
    

    return ret;
}/*
    {Post : ret = # i : 0 <= i < n: v[i] mod 2 = 0}
*/

int main(){
    int entradas; 
    int actuales;

    cin >> entradas;

    while(entradas != 0){
        cin >> actuales;
        for(int i = 0 ; i< actuales ; i++ ){
            cin >> v[i];
        }
               // hay pares?
        if(haypares(v,actuales))
            cout << "HAY " << numPares( v , actuales) << " NUMEROS PARES" << '\n';
        else 
            cout << "NO HAY PARES" << '\n';
       
        cout << numPares( v , actuales) << '\n';



        --entradas;
    }


    return 0;
}


//  {Pre : 0 <= n <= longitud(v)}
//  { O(n) }
bool haypares(int v[], int n){
    int i = 0;
    /*  I : (0<= i <= n) ^
            P.t. j : 0 <= j < i : v[j] mod 2 = 1
    */
    // Cota : n - 0
    while((i < n) && (v[i] % 2 != 0))
        ++i;

    return i < n;
}
/*
    {Post : ret = Ex. j : 0 <= j < n: v[j] mod 2 = 0}

*/