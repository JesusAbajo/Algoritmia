#include <iostream>
using namespace std;

const int MAX = 100000;
int v[MAX];

/* a = 2, b = 2, k = 1 */ // => complejidad n*log(n)

bool mergesort(int v[], int a , int b){

    if(a == b){
        return;
    }

    int m = (a + b) / 2;
    mergesort(a, m-1);
    mergesort(m, b);

    mezcla(v, a, m, b);
}

void mezcla(int v[], int a,int m, /*out*/ int b){ // hay que rehacer el mezcla
    int rv = 0;
    int rw = 0; 
    int ws = 0;

    while(rv < n && rw < n){
        if( v[rv] <= w[rw]){
            s[ws] = v[rv];
            ++rv;
        } else{
            s[ws] = v[rw];
            ++rw;
        }
        ++ws;
    }
    while(rv < n){
        s[ws] = v[rv];
        ++ws; ++rv;
    }
    while(rw < n){
        s[ws] = w[rw];
        ++ws; ++rw;
    }


}

int main(){

    int n;
    cin >> n ; 

    for(int i = 0 ; i < n ; i++){
        cin >> v[i]; 
        cout << v[i];
    }
    mergesort(v, 0, n);

    for(int i = 0 ; i < n ; i++){
        cout << v[i];
    }


    return 0;
}