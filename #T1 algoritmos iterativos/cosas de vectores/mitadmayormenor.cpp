#include <iostream>
using namespace std;

const int MAX = 100000;
int v[MAX];

void particion(int v[], int n){

    int p = v[0];
    int a = 1;
    int b = n-1;
    // COTA = b - a

    while( a < b ){
        if(v[a <= p])
            ++a;
        else if (v[b] > p)
            --b;
        else{
            swap(v[a], v[b]);
            ++a;--b;
        }
    }

}

int main(){

    int n;
    cin >> n ; 

    for(int i = 0 ; i < n ; i++){
        cin >> v[i]; 
        cout << v[i];
    }
    particion(v, n);

    for(int i = 0 ; i < n ; i++){
        cout << v[i];
    }


    return 0;
}