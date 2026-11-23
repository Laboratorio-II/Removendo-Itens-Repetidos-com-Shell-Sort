#include <stdio.h>
#include "ordenacao.h"

#define MAX_N 10000

// Recebe a lista já ordenada, deixa apenas uma ocorrência de cada número
// no início da lista e retorna quantos números únicos restaram
int removerRepetidos(int lista[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        // Guarda o primeiro elemento e cada elemento diferente do anterior
        if (i == 0 || lista[i] != lista[i - 1]) {
            lista[k] = lista[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n;
    int lista[MAX_N];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }

    shellSort(lista, n);
    int k = removerRepetidos(lista, n);

    printf("%d\n", k);
    for (int i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", lista[i]);
    }
    printf("\n");

    return 0;
}
