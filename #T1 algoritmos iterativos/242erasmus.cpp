#include <iostream>

using namespace std;

const int MAX = 100000;


//{Pre: 0 <= n <= longitud(n)}
long long erasmus(int v[], int n){//return ret
    long long ret = 0;
    int i = 0;
    long long sumAcum = 0;

    /* { I :
        ( 0 <= i <= n) ^
        ret = sum i,j; 0 <= i <= j <= n; v[i] * V[j] ^
        sumAcu = Sum j : 0 <= j < i : v[j]
        }
    */
    while(i < n){
        ret += (sumAcum * v[i]);
        sumAcum += v[i];
        i++;
    }
    return ret;
}
//{Post: ret = sum j,k; 0 <= j <= k <= n; v[j] * V[k]}


int main(){
    int numPaises;
    int estudiantesPais[MAX];
    cin>> numPaises;

    while(numPaises != 0){
        for(int i = 0 ; i < numPaises; i++){
            cin >> estudiantesPais[i];
        }

        cout << erasmus(estudiantesPais, numPaises) << "\n";

        cin>> numPaises;
    }


return 0;

}