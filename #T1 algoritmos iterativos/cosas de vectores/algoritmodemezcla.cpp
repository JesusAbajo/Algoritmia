#include <iostream>
using namespace std;

const int MAX = 100000;
int v[MAX];
int w[MAX];
int s[MAX];

void mezcla(int v[], int w[],int n, /*out*/ int s[]){
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



    return 0;
}