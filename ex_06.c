//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>

void collatz(int n) {
    printf("%d ", n);

    if (n == 1) {
        //final da sequência
        return;
    } else if (n % 2 == 0) {
        // par / 2
        collatz(n / 2);
    } else {
        //ímpar
        collatz(3 * n + 1);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Negativos não são válidos, digite um número inteiro positivo.\n");
        return 1;
    }

    printf("Sequência de Collatz %d: ", numero);
    collatz(numero);

    return 0;
}
