//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char word[], int inicio, int fim){
    if (inicio >= fim) {
        return;
    } else {
        char temp = word[inicio];
        word[inicio] = word[fim];
        word[fim] = temp;

        inverte(word, inicio + 1, fim - 1);
    } 
}

int main() {
    char *palavra;
    int n;
    scanf("%d", &n);
    getchar();
    printf("Escreva a palavra: ");
    
    palavra = (char *)malloc((n+1) * sizeof(char));
    if (palavra == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }
    fgets(palavra, n+1, stdin);
    printf("Palavra original: %s\n", palavra);

    inverte(palavra, 0, strlen(palavra)- 1);

    printf("Palavra invertida: %s\n", palavra);

    // Libera a memória
    free(palavra);
    return 0;
}