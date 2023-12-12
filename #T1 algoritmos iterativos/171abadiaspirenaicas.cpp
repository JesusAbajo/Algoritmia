#include <iostream>
using namespace std;

const int MAX= 100000;
int montanas[MAX];

// {Pre: 0 < n <= longitud(n) }
int abadiasPirenaicas(int v[], int n){
    int max = 0;
    int ret = 0;
    int i = n-1;

    // {I : ( 0 <= i <= n ) ^
    //           max =  max v[j] ; j > i ; v[j] < v[i]  ^
    //           ret = #i ; 0 < i <= n ; i > max }
    while(i >= 0){
        if(v[i] > max){
            max = v[i];
            ++ret;
        }
        --i;
    }
    return ret;
}
/*
    {Post : ret = #i ; 0 < i <= n ; i > (max v[j] ; j > i ; v[j] < v[i] ) }

*/
int main(){
    int n;
    cin >> n;

    while(n != 0){
        for(int i = 0 ; i < n ; i++){
            cin >> montanas[i];
        }
        cout << abadiasPirenaicas(montanas, n) << '\n';
        cin >> n;
    }

    return 0;
}