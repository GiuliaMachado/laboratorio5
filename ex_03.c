//Giulia de Oliveira Machado
//11202130151
#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int n){
    int soma1 =0;
    if(n<=0){
       return 0;
    }
    else{
       return v[n-1] + soma(v, n-1) ;   
    }
}

int main(){
    int *v;
    int n;
    scanf("%d", &n);
    v = (int *)malloc( n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    if(v == NULL){
        printf("Não alocou.");
        exit(1);
    }
    printf("Soma: %d\n",soma(v, n));
    printf("Fim.\n");
    free(v);
    return 0;
}