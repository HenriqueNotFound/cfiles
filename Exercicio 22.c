#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, vetA[10], vetB[10], vetC[10];

    printf("Digite 10 numeros inteiros para o vetor A: ");
    for(i=0; i<10; i++){
        scanf("%d", &vetA[i]);
    }
    
    printf("Digite 10 numeros inteiros para o vetor B: \n");
    for(i=0; i<10; i++){
        scanf("%d", &vetB[i]);
    }    
    
    printf("Vetor C = (Vetor A + Veter B): ");
    
    for(i=0; i<10; i++){
        vetC[i] = vetA[i] + vetB[i];
        printf("[%d]-", vetC[i]);
    }
}