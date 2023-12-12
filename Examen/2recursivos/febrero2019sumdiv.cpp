#include <iostream>
using namespace std;


bool sumdivisible(int n, int & digitos, int & suma){

    if(n < 10){
        suma = n;
        return true;
    }else{
        if(sumdivisible(n / 10, digitos, suma)){
            suma = suma + n%10;
            digitos++;
            if( suma % digitos == 0){
                return true;
            }else{
                return false;
            }
        }
        return false;
    }
}

int main(){

    int numero;
    cin >> numero;
    int digitos = 1;
    int suma = 0;
    while(numero != 0){
        if(sumdivisible(numero, digitos, suma)){
            cout << "SI" << '\n';
        }else{
            cout << "NO" << '\n';
        }
        digitos = 0;
        cin >> numero;
    }



    return 0;
}