#include <stdio.h>

int main(int argc, char const *argv[]){	
	int A, N, i, aux;

	scanf("%d %d", &A, &N);
	while(N <= 0){
		scanf("%d", &N);
	}
	aux = A;
	for(i=1; i < N; i++){
		aux += 1;
		A = A + aux;
	}
	printf("%d\n", A);
	return 0;
}
