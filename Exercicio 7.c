#include <stdio.h>

int main() {
    float Htrab, ValH, Hextra, SalB, SalExtr, SalF;

    printf("Informe o numero de horas trabalhadas no mes: ");
    scanf("%f", &Htrab);

    printf("Informe o valor que o funcionario recebe por hora: ");
    scanf("%f", &ValH);

    printf("Informe o numero de horas extras trabalhadas: ");
    scanf("%f", &Hextra);

    SalB = Htrab * ValH;
    SalExtr = Hextra * ValH * 2;

    SalF = SalB + SalExtr;

    printf("O salario do funcionario: R$ %.2f", SalF);

}
