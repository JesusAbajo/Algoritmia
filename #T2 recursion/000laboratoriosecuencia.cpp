#include <iostream>
using namespace std;

/*long long tam2(int constructor) { //COMPLEJIDAD: O(n) lineal respecto al valor entrada n
                                    // a = 1, b = 1, k = 0
    long long taman = 0;
    if (constructor == 0) {
        return 1;
    }
    else {
        taman += tam(constructor - 1);
    }
    return ((taman * 2) + 1);

}*/

long long tam(int n){   // esta es la mejor implementación
    if(n == 0)
        return 1;
    return 2*tam(n-1) + 1;
}

/*int val2(int n, long long k) { // a = 1, b = 1, k = 1 => O(n*log(n))

    long long taman = tam(n);
    int valor = 0;

    valor = val( n - 1, k % ((taman/2) + 1) );
    
    if (k == ((taman / 2) + 1)) {
        return k;
    }else
     return valor;

}*/

int val(int n, long long k) { // implementacion buena

    if(n == 0){
        //assert(k == 0);
        return 0;
    }
    long long t = tam(n - 1);

    if(k > t){
        return val(n-1, k - (t + 1));
    }else if(k < t){
        return val(n-1, k );
    }else
        return n;


}

int main()
{
    int casos;
    cin >> casos;
    int n;
    long long k;
    cin >> n >> k;

    while (0 < casos) {
        cout << val(n, k) << '\n';
        cin >> n >> k;
        --casos;
    }
}