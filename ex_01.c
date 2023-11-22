//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>
#include <stdlib.h>

void count_down(int n){
    if(n <= 0){
        printf("Fim do programa.");
        
    }
    else{
        printf("%d \n", n);
        count_down(n-1);
    }
}
int main(){
    int b;
    printf("Digite um número: ");
    scanf("%d", &b);
    count_down(b);
    return 0;
}