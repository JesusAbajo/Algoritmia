#include <iostream>
using namespace std;

const int tam = 100000;
int v[tam];

int parteascendente(int v[], int n){
    int i = 0;
    
    while(i < n && v[i] <= v[i+1]){
        if(v[i] == v[i+1]){
            
        }

    }



}

int partedescendente(int v[], int n){




}

int main(){
    int escalones;
    cin >> escalones;
   
    while(escalones != 0){
        for( int i = 0; i < escalones ; i++){
            cin >> v[i];
        }
    parteascendente(v, escalones);
    partedescendente(v, escalones);    
    cin >> escalones;

    }


    return 0;
}