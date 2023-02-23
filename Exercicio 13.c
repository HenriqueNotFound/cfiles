#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int lista[7];

    for(i=0;i<7;i++){
        printf("Digite a idade: ");
        scanf("%d", &lista[i]);

        if(lista[i]>=18){
            printf("[MAIOR DE IDADE]\n");
            printf("\n");

        }
        else{
            printf("[MENOR DE IDADE]\n");
            printf("\n");

        }
    }
}