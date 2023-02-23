#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int matriz[2][2],i, j;

    printf ("\nDigite valor para os elementos da matriz\n\n");
    for ( i=0; i<2; i++ )
        for ( j=0; j<2; j++ ){
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz[i][j]); }

    printf("\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf ("[%d]", matriz[i][j]);
            printf("\n");
        }
}
