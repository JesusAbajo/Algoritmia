#include <iostream>
using namespace std;

const int tam = 1000000;
int usos[tam];

int bombines(int v[], int n, int suma){
    int newsum = v[0];
    int i = 1;
    int ret = 0;
    cout << suma << '\n';
    cout << (suma/2) << '\n';
    while((newsum < (suma/2)) && (i < n)){
        newsum += v[i];
        i++;
        
        
    }if(newsum >= (suma/2)){
        ret = i;
    }

    return ret;
}

int main(){
    int dias;
    cin >> dias;
    int suma = 0;
    
    while(dias != 0){
        for(int i = 0; i< dias; i++){
            cin >> usos[i];
            suma += usos[i];
        }
       
        cout << bombines(usos, dias, suma) << '\n';
        cin >> dias;
        suma = 0;
    }


    

    return 0;
}