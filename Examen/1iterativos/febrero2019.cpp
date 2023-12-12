#include <iostream>
using namespace std;

const int tam = 100000;
int v[tam];

// {Pre : (0 < n <= longitud(n)) ^ ( p.t i ; 0 <= i < n ; ( v[i] = 0 ) v ( v[i] = 1 )) ^ (k > 0) }
int kceros(int v[], int n, int k) { // {return ret}
	int a = 0;
	int b = 0;
	int cont = 0;
	int tamano = n + 1;

	while (b < n) {
		if (v[a] == 0) {
			if (b == a) {
				++b;
			}
			++a;
		}
		else if (v[b] == 1) {
			++cont;
			++b;
		}
		else if (v[b] == 0) {
			++b;
		}
		if (cont == k) {
			if (tamano > (b - a)) {
				tamano = (b - a);
			}
			if (v[a] == 1) {
				--cont;
			}
			++a;

		}


	}


	return tamano;
} //{Post : ret = a - b : 0 <= a < b < n : cnt i : i > 0 ; v[i]  }

int main() {
	int n;
	cin >> n;
	int k;

	while (n != -1) {
		
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		cin >> k;
		cout << kceros(v, n, k) << '\n'; ;
		cin >> n;
	}


	return 0;
}