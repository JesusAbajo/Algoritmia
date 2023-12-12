#include <iostream>
//#include <cmath>
using namespace std;

// {Pre: x > 0 , n > 0}
int serieDePotencias(int x, int n){
    int actPot = x;
    int ret = 1 + actPot;
    int i = 2; 

    while( i <= n ){
        actPot *= x;
        ret += actPot;
        ++i;
    }
    return ret;
}/*{ Post : ret = actProd(x, ret) = Sum j; 0 <= j <= n ; actProd(x, j) }
           donde :
                 actProd(x ,n) = x^n
*/


/* ALTERNATIVA <CMATH>
int serieDePotencias(int x, int n){
    int ret = 0;
    int i = n; 

    while( i >= 0 ){
        ret += pow(x, i);
        --i;
    }
    return ret;
}
*/
int main(){
    int base, exponente;
    cin >> base;
    cin >> exponente;

    while(base != 0 && exponente !=0){
        cout << serieDePotencias(base, exponente) % 1000007 << '\n';
        cin >> base;
        cin >> exponente;
    }

    return 0;
}