# include <stdio.h>
#include <string.h>
#define TFP 9
#define TFA 5

int main(){

    char prod[TFP][20],pro;
    int sto[TFA][TFP],i,j,soma,somaf,menor = 999999,maior,;
    float custo[TFP];

    for(i=0; i<TFP; i++){

        printf("nome do %do. produto:\n",i+1);
        fflush(stdin);
        gets(prod[i]);
        for(j=0; j<TFA; j++){

            printf("estoque do armazem %d:\n",l+1);
            scanf("%d",&sto[i][j]);

        }
        printf("valor do produto:\n",i+1);
        scanf("%f",&custo);
    }

    for(i=0; i<TFA; i++){
        soma = 0;
        for(j=0; j<TFP; j++){
            soma= soma + sto[i][j];
        }
        printf("Total de ites do armazem %d = d%\n", l+1,soma);
    }

     for(j=0; j<TFA; j++){
        soma = 0;
        for(i=0; i<TFP; i++){
            soma= soma + sto[j][i];
        }
        printf("Total de ites do armazem %d = d%\n", l+1,soma);
    }

    for(i=0; i<TFP; i++){
            somaf=0;
            somaf= custo[i] * sto[j][i];

            printf("o cuato do armazem %do. %d:\n",i+1,soma);
        }
    }
    
     for(i=0; i<TFA; i++){
            for(j=0; j<TFP; j++){
            if(sto[i][j]<menor){
                menor = sto[i][j];
                strcpy(pro, prod[j]);
                armMenor = j+1;
            }
        }
        printf("o produto %s tem %d\n",pro,soma);

    for(i=0; i<TFA; i++){
            
         if(custo[i]<menor){
             menor = custo[i];
             strcpy(pro, prod[i]);
            }
    }
     printf("o produto %s qu etem o menor custo %f\n",pro,menor);
    for(i=0; i<TFA; i++){
            
         if(custo[i]<maior){
             maior = custo[i];
             strcpy(pro, prod[i]);
            }
    }
     printf("o produto %s qu etem o menor custo %f\n",pro,maior);
    

}
