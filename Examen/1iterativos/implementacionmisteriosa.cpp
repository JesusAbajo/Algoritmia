#include <iostream>
using namespace std;

const int tam = 200000;
int v[tam];

//{ Pre: }
int implMisteriosa(int v[], int n){
    int i = 2;
    int max1 = v[0];
    int max2 = v[1];
    while(i<n){
        if(v[i] > max1 || v[i] > max2){
            if(max1 < max2){
                max1 = v[i];
            }else{
                max2 = v[i];
            }

        }
        ++i;
    }

    return max1 + max2;
}

int main(){
    int casos;
    int uds;
    cin >> casos;

    while(casos > 0){
        cin >> uds;
        for(int i = 0; i < uds; i++){
            cin >> v[i];
        }
        cout << implMisteriosa(v, uds);
        --casos;
    }
    return 0;
}