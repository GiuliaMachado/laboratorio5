//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>

int cBinomial(int n, int k) {
    // Caso base
    if (k == 0 || k == n) {
        return 1;
    } else {
        return cBinomial(n - 1, k - 1) + cBinomial(n - 1, k);
    }
}

int main() {
    int n, k;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    if (n < 0 || k < 0 || k > n) {
        printf("Não digite numeros negativos e n deveser>=k.\n");
        return 1;
    }

    int resultado = cBinomial(n, k);

    printf("O coeficiente binomial C(%d, %d) é: %d\n", n, k, resultado);

    return 0;
}
