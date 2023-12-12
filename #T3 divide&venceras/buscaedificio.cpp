#include <iostream>
using namespace std;

/*
 el medio de la matriz y mirar sus paredes inferior y derecha si es 1
        si es 0 mirar en el cuadrante inferior derecho

*/

void edificio(int n, int m, string preg_resp, int posx, int posy){
    int sino;
    cin >> sino;
    //caso base
    if(sino == 1){

    }

    while(posx != 0 && posy != 0){
        if(preg_resp == "?"){

        }else if(preg_resp == "Respuesta:"){

        }

    }

}


int main(){

    int n,m;
    string preg_resp;

    cin >> n >> m;

    edificio(n, m, "?", 1, 1);

    return 0;
}