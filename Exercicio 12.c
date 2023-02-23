#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, cont=0;
    int lista[8];

    for(i=0; i<8; i++){
        printf("Digite um numero: ");
        scanf("%d", &lista[i]);

        if(lista[i]>=10 && lista[i]<=150){
            cont++;
        }
        else{            
        }
    }

    printf("Quantidade de numeros entre 10 e 150: %d", cont);
    
}