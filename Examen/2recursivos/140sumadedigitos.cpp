#include <iostream>
using namespace std;

int sumadedigitos(int numero){
    int ret = 0;
    if(numero < 10){
        cout << numero ;
        return numero;
    }else{
        int suma = sumadedigitos(numero/10); 
        cout << " + " << numero%10;
        return suma + numero%10;
    }

}

int main(){
    int numero;
    cin >> numero;
    
    while( numero != -1){
    int suma = sumadedigitos(numero);
    cout << " = " << suma << '\n';
    cin >> numero;
    }

    return 0;
}