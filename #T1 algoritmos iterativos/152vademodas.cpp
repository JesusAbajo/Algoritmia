#include <iostream>

using namespace std;

const int MAX = 25000;
int numeros[MAX];

//{Pre: 0 < n <= longitud(n) ^ ord(v, n)}
int vademodas(int v[], int n){//return ret
    int contActual = 1;
    int contModa = 1;
    int moda = v[0];
    int i = 1;

    while(i < n){
        if(v[i-1] == v[i]){
            ++contActual;
        }else {
            contActual = 1;
        }
        if(contActual >= contModa){
            contModa = contActual;
            moda = v[i];
        }
    ++i;
    }
    return moda; // El numero que mas se repite en el vector
}
/*{Post: ret = 
        frec(v, n, ret) = max i : 0 <= i < n : frec(v, n, v[i])
        donde:
            freq(v, n, e) = # i : 0 <= i <n : v[i] = e
}
*/

int vademods2(int v[], int n){

    int contmax = 1;
    int contact = 1;
    int i = 0;
    int ret = v[i];

    while(i <= n){
        if(v[i] == v[i+1]){
            ++contact;
            if(contact > contmax){
                contmax = contact;
                ret = v[i];
            }
        }else{
            contact = 1;
        }
    ++i;
    }

    return ret;

}














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
    cin>> n;

    while(n != 0){
        for(int i = 0 ; i < n; i++){
            cin >> numeros[i];
        }
        quicksort(numeros, 0, n);
        cout << vademodas(numeros, n) << "\n";
        cin >> n;
    }



return 0;

}