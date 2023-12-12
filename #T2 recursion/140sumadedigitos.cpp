#include <iostream>
using namespace std;

int sumadedigitos(int n){

    if(n < 10){
        cout << n;
        return n;
    }else{
        
        int suma = sumadedigitos(n / 10);
        cout << " + " << n % 10 ;
        return suma + n % 10;
    }


    
}

int main(){
    int n;
    cin >> n;

    while(n != -1){
        int suma = sumadedigitos(n);
        cout << " = " << suma;
        cin >> n;       
    }


    return 0;
}