#include <stdio.h>
#include <stdlib.h>

void imprimirCombinacao(int *comb, int k) {
    for (int i = 0; i < k; i++) {
        printf("%d ", comb[i]);
    }
    printf("\n");
}

void combinacoes(int *valores, int n, int *comb, int k, int indiceAtual, int tamanhoAtual) {
    if (tamanhoAtual == k) {
        imprimirCombinacao(comb, k);
        return;
    }

    for (int i = indiceAtual; i < n; i++) {
        comb[tamanhoAtual] = valores[i];
        combinacoes(valores, n, comb, k, i + 1, tamanhoAtual + 1);
    }
}

int main() {
    int n, k;

    printf("Digite o número de valores n: ");
    scanf("%d", &n);

    printf("Digite o tamanho da combinação k: ");
    scanf("%d", &k);

    int *valores = (int *)malloc(n * sizeof(int));
    if (valores == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    int *comb = (int *)malloc(k * sizeof(int));
    if (comb == NULL) {
        printf("Erro de alocação de memória.\n");
        free(valores);
        return 1;
    }

    combinacoes(valores, n, comb, k, 0, 0);

    free(valores);
    free(comb);

    return 0;
}
