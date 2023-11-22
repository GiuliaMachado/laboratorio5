#include <stdio.h>
#include <stdlib.h>


void combinacoes(int n, int atual, int *combinacao, int tamanhoAtual) {
    for (int i = 0; i < tamanhoAtual; i++) {
        printf("%d", combinacao[i]);
    }
    printf("\n");

    for (int i = atual; i <= n; i++) {
        int *novaCombinacao = (int *)malloc((tamanhoAtual + 1) * sizeof(int));

        if (novaCombinacao == NULL) {
            printf("Erro de alocação de memória.\n");
            exit(1);
        }

        for (int j = 0; j < tamanhoAtual; j++) {
            novaCombinacao[j] = combinacao[j];
        }

        novaCombinacao[tamanhoAtual] = i;

        combinacoes(n, i + 1, novaCombinacao, tamanhoAtual + 1);

        free(novaCombinacao);
    }
}

int main() {
    int n;

    printf("Digite um número positivo n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um número positivo.\n");
        return 1;
    }

    // Alocação dinâmica para a combinação inicial
    int *combinacaoInicial = (int *)malloc(sizeof(int));

    if (combinacaoInicial == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    printf("Combinacoes dos %d primeiros naturais:\n", n);
    combinacoes(n, 1, combinacaoInicial, 0);

    // Liberar memória alocada para a combinação inicial
    free(combinacaoInicial);

    return 0;
}
