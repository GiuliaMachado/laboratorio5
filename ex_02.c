//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>
#include <stdlib.h>

void count_up(unsigned int n){
    if(n <= 0){
        printf("%d \n", n);
        
    }
    else{
        count_up(n-1);
        printf("%d \n", n);
        
    }
    
}

int main(){
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    count_up(a);
    return 0;
}