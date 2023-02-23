#include <stdio.h>
#include <stdlib.h>

int main(){

    int na, at, anos, meses, dias, semanas;

    printf("Ano de nascimento: ");
    scanf("%d", &na);

    printf("Ano atual: ");
    scanf("%d", &at);

    anos = at-na;
    meses = anos*12;
    dias = meses*30;
    semanas = dias/7;


    printf("Voce tem: %d anos ; %d meses ; %d dias ; %d semanas", anos, meses, dias, semanas);
}