#include <iostream>

#define N 4
int A[N][N]; int B[N][N]; int C[N][N];

void multiplyArray(){
	//Zerar matriz C
	for(int a = 0; a < N; a++)
		for(int b = 0; b < N; b++)
			C[a][b] = 0;
			
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			for(int k = 0; k < N; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
				
}

int main(int argc, char** argv) {
	//Preencher matrizes A e B
	printf("INSIRA VALORES DA MATRIZ A\n");
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("A%d,%d:", i, j);
			scanf("%d", &A[i][j]);
		}
	}
		
	system("cls");		
	printf("INSIRA VALORES DA MATRIZ B\n");
			
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("B%d,%d:", i, j);
			scanf("%d", &B[i][j]);
		}
	}

	system("cls");
	multiplyArray();
	return 0;
}


