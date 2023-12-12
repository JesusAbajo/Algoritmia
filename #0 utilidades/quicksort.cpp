#include <iostream>

using namespace std;

const int MAX = 100;

void swap(int v[], int a, int b){
    int aux= v[a];
    v[a] = v[b];
    v[b] = aux;
}

int partition(int v[], int low, int high){

    int pivot = v[high];
    int i = (low-1);

    for(int j = low ; j <= high-1 ; j++){
        if(v[j] < pivot){
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v, i+1, high);
    return (i+1);
}

void quicksort(int v[], int low, int high){ 
    if(low < high){

        int pivot= partition(v, low, high);

        quicksort(v, low, pivot-1);
        quicksort(v, pivot+1, high);
    }
}

int main(){
    int n;
    int numeros[MAX];
    cin>> n;

    while(n != 0){
        for(int i = 0 ; i < n; i++){
            cin >> numeros[i];
        }

       // cout << quickshort(numeros, 0, n) << "\n";
        quicksort(numeros, 0, n);

    for(int i = 0 ; i < n; i++){
            cout << numeros[i] << " ";
        }

        cin >> n;
    }


return 0;

}