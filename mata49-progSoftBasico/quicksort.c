//================================================================
// Nome Do Arquivo: quick.c
// File Name: quick.c
//
// Descrição: Implementação do algoritmo quicksort
// Description: Quick sort Algorithm
//================================================================

// Libs
#include <stdio.h>
#include <stdlib.h>

// Define uma constante
// Define a constant
#define MAX 9

// Protótipo da função de ordenação
// Ordination function prototype
void quick_sort(int *a, int left, int right);

// Função main
// Main Function
int main(int argc, char** argv)
{
 int i, vet[MAX];

 // Lê MAX ou 10 valores
 // Read MAX or 10 values
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }

 // Ordena os valores
 // Order values
 quick_sort(vet, 0, MAX - 1);

 // Imprime os valores ordenados
 // Print values in order ascendant
 printf("\n\nValores ordenados\n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d\n", vet[i]);
 }
 system("pause");
 return 0;
}

// Função de Ordenação por Seleção
// Quick sort function
void quick_sort(int *a, int left, int right) {
    int i, j, x, y;

    i = left;
    j = right;
    x = a[left];

    while(i <= j) {
         // OK
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        //OK
        if(i <= j) {
            y = a[i]; //ok
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
    //OK
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}
