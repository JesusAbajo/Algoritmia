#include <iostream>
using namespace std;

int cuadradosfractales(int n,int longitud){

    
    if(n == 1){
        return 1;
    }
    else{
        int cosa = cuadradosfractales(n/2,longitud);
        longitud = longitud * 4 + cosa * 4;
    }
    

    

    return longitud;
}

int main(){
    int ladomax;

    cin >> ladomax;

    cout << cuadradosfractales(ladomax,0) << '\n';
    return 0;
}