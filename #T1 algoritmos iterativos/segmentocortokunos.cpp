//ESXAMEN FEBRERO 2018
#include <iostream>
using namespace std;

const int MAX = 100000;
int numeros[MAX];

int min(int actual, int cambio){
    int minimo;

    if(actual > cambio) minimo = cambio;
    else minimo = actual;

    return minimo;
}
// {Pre: 0 <= n <= longitud(v) ^ 
//      numUnos(v, 0, n-1) >= k }
int kunos(int v[], int n, int k){
    
    int a = 0;
    int b = 0;
    int ret = n+1;
    int numerodeunos = 0;
    
    //COTA : 2n - a - b
    /* { I : ( 0 <= a <= b <= n ) ^
             ( numUnos = numUnos(v, a, b-1)) ^
        (numUnos(v, 0, b-1) < k ^ ret = n+1) v 
        (numUnos(v, 0, b-1) >= k ^
        ret = min i, j : 
            (0 <= i <= a <= j < b) ^ numUnos(v, i, j) == k :
            j- i + 1 )
        )
            }
    */ 
    while(b < n || numerodeunos >= k){
        if(numerodeunos >= k){
           if(v[a] == 1) --numerodeunos;
            ++a;
        }else{
            if(v[b] == 1) ++numerodeunos;
            ++b;
        }
        if(numerodeunos == k){
            ret = min(ret, b - a);
        }
    }

    return ret;
}
/*  {Post :
        (numUnos(v, 0, n-1) < k ^ ret = n+1) v 
        (numUnos(v, 0, n-1) >= k ^
        ret = min i, j : 
            (0 <= i <= j < n) ^ numUnos(v, i, j) == k :
            j- i + 1 )
        )
        donde : 
            numUnos(v, a, b) = #i : a <= i <= b : v[i] == 1 
        }
*/

int main(){
    int n, numerodeunos ;
    cin >> n;
    
    while(n != 0){
        cin >> numerodeunos;
        for(int i = 0 ; i < n ; i++){
            cin >> numeros[i];
        }
            cout << kunos(numeros, n, numerodeunos) << '\n';
        
        cin >> n;

    }

    return 0;
}