#include <stdio.h>
#include <stdlib.h>

int main(){

    float num;

    printf("Insira um numero: ");
    scanf("%f", &num);

    if(num>=100 && num<=200){
        printf("O numero esta entre 100 e 200");
    }
    else{
        printf("O numero nao esta entre 100 e 200");
    }

}