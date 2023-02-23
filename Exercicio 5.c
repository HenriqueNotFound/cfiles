#include <stdio.h>
#include <stdlib.h>

int main(){

    float desc, salLiq, inss, valorHora, Horas;

    printf("Quanto voce ganha por hora (R$)? ");
    scanf("%f", &valorHora);

    printf("Quantas horas voce trabalha por mes? ");
    scanf("%f", &Horas);

    salLiq = valorHora*Horas;

    desc = salLiq*0.1;
    inss = salLiq*0.08;

    salLiq = salLiq-desc-inss;

    printf("Valor do salario liquido: %f", salLiq);
}
