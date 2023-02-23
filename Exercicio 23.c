#include <stdio.h>
#include <stdlib.h>

int main(){

    int me, c=0, i, vet[10];

    for(i=0;i<10;i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if(i==0){
            me = vet[i];
        }
        else{
            if(vet[i]<me){
                me = vet[i];
            }
            else{}
        }
    }

    for(i=0; i<10; i++){
        if((vet[i]%me)==0){
            c++;
        }
        else{}
    }
    printf("O Menor valor do vetor: %d\n", me);
    printf("Quantidade de numeros divisiveis por %d: %d", me, c);

}