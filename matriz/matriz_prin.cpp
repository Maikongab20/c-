#include <stdio.h>
#define l 4
#define c 4
int main()
{
    int mat[l][c],i,j,resltado,resltado2;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("digite um numero");
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i<j){
                resltado = resltado + mat[i][j];
            }
            else
                 if(i>j){
                resltado2 = resltado2 + mat[i][j];
            }
        }
    }


    printf("%d",resltado);
    
}
