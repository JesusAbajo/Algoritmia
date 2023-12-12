#include <iostream>
using namespace std;

const int prime = 1000000007;

int xalak(int x, int k){
    /*COMPLEJIDAD
    a = 1, b = 2, k = 0 => O(log k)  logaritmo del exponente

    Pasamos de cuadrática a logaritmica => mucho mejor
    */
    if (k = 0){
        return 1;
    }
    int ret = xalak(x, k/2);

    ret = ret * ret;
    ret %= prime; //se pone esto por el desbordamiento :)

    if(k % 2 == 1){
        ret*= x;
        ret%= prime; // por el desboradmiento como arriba
    }

    return ret;
}

int potencia(int x, int k){ // manera iterativa

    //compleidad O(k)

    int ret = 1;

    for(int i = 0; i <= k; ++i){
        ret *= x;
        ret %= prime;
    }

    return ret;
}

int main(){

    int x , k ;
    cin >> x >> k;

    xalak(x ,k);

    return 0;
}