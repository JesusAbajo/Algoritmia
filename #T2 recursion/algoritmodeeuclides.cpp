#include <iostream>
using namespace std;

int euclides(int a, int b){ // un ejemplo de recursion final => 

    if(b == 0) return a;

    return euclides(b, a%b);
}

int main(){

    int uno, dos;
    cin >> uno >> dos;


    int mcd = euclides(uno, dos);

    cout << mcd;

    return 0;
}