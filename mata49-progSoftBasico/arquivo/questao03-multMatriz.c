//Multiplicacao de matrizAes n x n utilizando ponteiros

#include <stdio.h>
#include <stdlib.h>

int main(){
	int **matrizA, **matrizB, **matrizC, i,j,k, resultado=0, N;

	printf("Informe a quantidade de dimensoes das matrizes: ");
	scanf("%d", &N);

	matrizA = malloc (N * sizeof(int *));
	matrizB = malloc (N * sizeof(int *));
	matrizC = malloc (N * sizeof(int *));

	if(matrizA == NULL || matrizB == NULL || matrizC == NULL){
		printf("Falha na alocacao de memoria! Programa esta sendo encerrado!\n" );
		return 0;
	}
	for(int i=0;i<N;i++){
		*(matrizA+i) = malloc(N*sizeof(int));
		*(matrizB+i) = malloc(N*sizeof(int));
		*(matrizC+i) = malloc(N*sizeof(int));

		if( *(matrizA+i)  == NULL || *(matrizB+i)  == NULL  || *(matrizC+i) == NULL){
			printf("Falha na alocacao de memoria! Programa esta sendo encerrado!\n");
			return 0;
		}
	}
	printf("Informe os números da matriz A: ");
	//lendo valores da matriz A
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d", &*(*(matrizA+i)+j));
	printf("\nOK.\ninforme os números da matriz B: ");
	//lendo valores da matriz B
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d", &*(*(matrizB+i)+j));

	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			for(k=0;k<N;k++)
				*(*(matrizC+i)+j) += *(*(matrizA+i)+k) * *(*(matrizB+k)+j);
printf("\n------------------------------------\n\nMatrizA:\n");
				for(i=0;i<N;i++){
					for(j=0;j<N;j++)
						printf("%d ", *(*(matrizA+i)+j));
					printf("\n");
				}
printf("\nMatrizB:\n");
				for(i=0;i<N;i++){
					for(j=0;j<N;j++)
						printf("%d ", *(*(matrizC+i)+j));
					printf("\n");
				}

	printf("\nMatriz(AxB) \n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%d ", *(*(matrizC+i)+j));
		printf("\n");
	}

	for(int i=0;i<N;i++){
		free(*(matrizA+i));
		free(*(matrizB+i));
		free(*(matrizC+i));
	}
	free(matrizA);
	free(matrizB);
	free(matrizC);

	return 0;
}
