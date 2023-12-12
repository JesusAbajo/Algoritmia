//ESXAMEN FEBRERO 2018
#include <iostream>
using namespace std;

const int MAX = 100000;
int secuencia[MAX];

// {Pre: 2 <= n <= longitud(v)}
bool quasisecuencia(int v[], int n, int k){
    
    if(v[1] != v[0] || (v[0] + v[1] > k))
        return false;

    int i = 2;
    int sum = v[0] + v[1];
    while( (i < n) && ( (v[i] == v[i-1]+v[i-2]) || (v[i] == v[i-1]) ) && (sum + v[i] <= k) ){

        sum += v[i];
        ++i;
    }


    return i == n;
}
/*  {Post :
        ret = quasiSeq(v, n) ^ sum(v, n) <= k
        donde:
            sum(v, n) = Sum j : 0 <= j < n : v[j]
            quasiSeq(v, n) = (v[0] = v[1]) ^ (P.t j :  : v[j] = v[j-1] v v[j] = v[j-1]+v[j-2])
        }
*/

int main(){
    int n, k ;
    cin >> n;
    
    while(n != 0){
        cin >> k;
        for(int i = 0 ; i < n ; i++){
            cin >> secuencia[i];
        }
        if(!quasisecuencia(secuencia, n, k)){
            cout << "QUASISECUENCIA" << '\n';
        }else
            cout << "NO" << '\n';
        
        cin >> n;

    }

    return 0;
}