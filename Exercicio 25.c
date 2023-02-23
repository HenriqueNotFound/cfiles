#include <stdio.h>
#include <stdlib.h>

int main(){
    int m[6][6];
    int r[36];
    int a=0,i,j,y=0;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("Digite [%d] [%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("Para {M*A}, Insira 'A': ");
    scanf("%d", &a);
 
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            r[y] = (m[i][j]*a);
            y++;    
        }
    }
    printf("Vetor resultante: (M*A)\n");
    printf("\n");
    
    for(i=0;i<36;i++){
        printf("[%d] ", r[i]);
    }    
}