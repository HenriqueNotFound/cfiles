#include <stdio.h>
#include <stdlib.h>

int main(){

    int area, base, altura;

    printf("Base do triangulo: ");
    scanf("%d", &base);

    printf("Altura do triangulo: ");
    scanf("%d", &altura);

    area = (base*altura)/2;
    
    printf("Area do triangulo: %d", area);

}