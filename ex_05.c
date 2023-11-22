//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>
#include <stdlib.h>


void torreDeHanoi(int n, char origem, char destino, char auxiliar, int *movimentos) {
    if (n == 1) {
        (*movimentos)++;
        return;
    }

    torreDeHanoi(n - 1, origem, auxiliar, destino, movimentos);
    (*movimentos)++;
    torreDeHanoi(n - 1, auxiliar, destino, origem, movimentos);
}

int main() {
    int n;
    int movimentos = 0;

    printf("Digite o número de discos: ");
    scanf("%d", &n);

    torreDeHanoi(n, 'A', 'C', 'B', &movimentos);

    printf("Número de movimentos: %d\n", movimentos);

    return 0;
}
