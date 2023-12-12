#include <iostream>

using namespace std;

const int MAX = 200000;
int v[MAX];

int max(int uno, int dos){
    int max = 0;
    if(uno>dos){
        max = uno;
    }else{
        max = dos;
    }
    return max;
}

//{Pre: 0 < n <= longitud(v) ^ k > 0 ^ ord(v, n)}
int numPapas(int v[], int n, int k){
    int a = 0;
    int b = 1;
    int ret = 1;

    while(b < n){
        if((v[b] - v[a]) < k){
            ++b;
        }else{
            ++a;
        }ret = max(ret, v[b] - v[a] + 1);
    }
    return ret;
}
/* {Post:
        ret = max i, j : (0 <= i <= j <= n) ^
                        (v[i] - v[j] < K) 
                        : j - i + 1
    }

prueba :
10 5
1 1 4 4 5 6 6 7 10 11
10 6
1 1 4 4 5 6 6 7 10 11
0 0

*/
/* pensar funcion de cota
    { I :  (0 <= l <= n)
        ^ ret = max k, l : (0 <= k <= l <= n) ^
                        (v[k] - v[l] < K) 
                        : l - k + 1
    }
*/

int main(){
    int n, k;
    cin>> n;
    cin>> k;

    while(n != 0 && k != 0){
        for(int i = 0 ; i < n; i++){
            cin >> v[i];
        }
        
        cout << numPapas(v, n, k) << "\n";
        cin >> n;
        cin >> k;
    }



return 0;

}