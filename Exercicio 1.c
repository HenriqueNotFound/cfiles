#include <stdio.h>
#include <stdlib.h>

int main(){

    int A, B, C;

    printf("Variavel A: ");
    scanf("%d",&A);

    printf("Variavel B: ");
    scanf("%d",&B);

    C = A;
    A = B;
    B = C;

    printf("A -> B: %d\n", A);
    printf("B -> A: %d", B);
    
}
