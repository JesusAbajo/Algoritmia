#include <iostream>
using namespace std;

void dinero(int dias, float dinero, float diario){

    int contd = 1;

    while(contd != dias){

        dinero += (dinero*diario);

        cout << "dia " << contd << " -> " <<dinero << "\n";


        ++contd;
    }    
}
int main(){
    int a;
    float b , c;
    cin >> a;
    while(a != 0){
        cin >> b >> c;
        c = c/36500;
        dinero(a ,b ,c);
        cin >> a;
    }
    return 0;
}