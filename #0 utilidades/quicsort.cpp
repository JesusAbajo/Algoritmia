#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100000;
int v[MAX];

void swap(int v[], int a, int b){
    int aux = v[a];
    v[a]= v[b];
    v[b] = aux;

}

int particion(int v[], int a, int b){

    int p = v[a];
    // COTA = b - a

    while( a < b ){
        if(v[a] <= p)
            ++a;
        else if (v[b] > p)
            --b;
        else{
            swap(v, a, b);
            ++a;--b;
        }
    }
    return a - 1;

}

/*compleidad: a = 2; b = suerte => media = 2 (recursion x division); k = 1
    O(n log(n)) pero es mas rapido que e lde mezcla :)

    => pero si nos dan un vector ordenado: a = 1; b = 1; k = 1 se convierte en recursion x resta 
        O(n^2) :(
--------------------------------
    void quicksort(v, a, b){
        if(a < b){
        p = particion(v, a, b);
        particion(v, 0, p);
        particion(v, p+1, b);
        }
    }
*/

    void quicksort(int v[],int a,int b){
        if(a < b){
        int p = particion(v, a, b);
        quicksort(v, a, p);
        quicksort(v, p+1, b);
        }
    }



int main(){

    int n;
    cin >> n ; 

    for(int i = 0 ; i < n ; i++){
        cin >> v[i]; 
        cout << v[i];
    }
    sort(v, v + n);
    //quicksort(v, 0, n - 1);

    for(int i = 0 ; i < n ; i++){
        cout << v[i] << " ";
    }


    return 0;
}