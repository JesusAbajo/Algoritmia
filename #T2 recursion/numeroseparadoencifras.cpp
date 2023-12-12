#include <iostream>
using namespace std;

int escribe(int n){

    if(n < 10){
        cout << n;
        return n;
    }

    int aux =escribe(n / 10);
    cout << "+" << n%10;
    return aux+ n%10;
}

int sumaDigitos(int n){
    if(n<10);
        return n;
    return sumaDigitos(n/ 10) + n%10;
}

int main(){
    int num;
    cin >> num;
    cout << escribe(num);



    return 0;
}