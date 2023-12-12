#include <iostream>
using namespace std;

const int tam = 100000;
int v[tam];

int maxtramopares(int v[], int a, int b, int n){
    int tramomax = 0;
    int tramo = 0;

    while(n > b ){
        if(v[b] % 2 == 0){
            //++tramo;
            if(b - a + 1 > tramomax){
                tramomax = b - a + 1;
            }
            ++b;
        }else{
            b++;
            a = b;
            /*if(tramo > tramomax){
                tramomax = tramo;
            }
            tramo = 0;*/
        }

    }


    return tramomax;   
}

int main(){

    int n;
    cin >> n ;

    while(n != -1){
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        cout << maxtramopares(v, 0, 0, n) << '\n';
        cin >> n;
    }


    return 0;
}