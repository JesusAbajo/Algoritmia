#include <iostream>
using namespace std;

// {Pre : n >= 0 }
bool entretenido(int n){
    bool entretenido = true;
    int dig = n%10;
    n = n / 10;
    // {Cota : n / 10}
    while(n > 0 && entretenido){
        if(dig == n%10){
            entretenido = false;
        }
        dig = n%10;
        n = n / 10;
    }// {O(n)}

    return entretenido;
}//{Post : }

int main(){
    int numero;
    cin >> numero;

    while(numero != -1){
        if(entretenido(numero)){
            cout << "ENTRETENIDO" << '\n';   
        }else{
            cout << "NO ENTRETENIDO" << '\n';  
        }
        cin >> numero;
    }

    return 0;
}