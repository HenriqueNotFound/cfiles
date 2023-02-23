#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1,n2,n3,media;
    char nome[20];

    printf("Insira seu nome: ");
    scanf("%s", &nome);

    printf("Insira as 3 notas: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("Aluno: %s\n", nome);
    printf("Media: %.1f\n", media);

    if(media>=7){
        printf("Situacao: APROVADO");
    }
    else if(media<=5){
        printf("Situacao: REPROVADO");
    }
    else if(media>=5.1 && media<=6.9){
        printf("Situacao: RECUPERACAO");
    }

}