#include <iostream>

int somaNegativos(int v[][2], int n, int m){
	int soma;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(v[i][j] < 0) soma += v[i][j];
		}
	}
	
	return soma;
}

int main(int argc, char** argv) {
	int a[2][2] = {{-1, 5},{2, -3}};
	int n = 2;
	int m = 2;
	printf("%d", somaNegativos(a, n, m));
}

