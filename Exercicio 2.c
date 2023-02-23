#include <stdio.h>
#include <stdlib.h>

int main(){

    float r, a;
    float pi = 3.14;
    printf("Insira o Raio do Circulo: ");
    scanf("%f",&r);

    a = pi*(r*r);
    printf("A Area da circunferencia: %f", a);

}