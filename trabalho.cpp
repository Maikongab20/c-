#include <stdio.h>
#include <string.h>
#define TF 5

int main(){
    char funcionario[TF][10];
    float salario[TF];
    int id[TF],anosImpre[TF],i,pos = 0,codigo,exclu,TL =0;

    do{
        printf("digite a opcao desajada");
        printf("\n");
        printf("1 para cadrastar");
        printf("2 para excluir");
        printf("0 para sair");
        scanf("%d",&codigo);

        switch (codigo)
        {
        case 1:{
            printf("cadrastro");
            printf("\n");
            do{
                
                if(TL<4){
                    id[TL] = i;
                    printf("digite o nome :\n");
                    fflush(stdin);
                    scanf("%s",&funcionario[TL]);
                    printf("\n");
                    printf("digite o seu salario");
                    scanf("%f",&salario[TL]);
                    printf("digite os anos de empresa");
                    scanf("%d",&anosImpre[TL]);
                    TL ++;
                    printf("cadrastrar mais usuarios digite 1 para sair digite 0");
                    scanf("%d",&codigo);
                }
                else{
                    printf("sem espaso para cadrastrar mais usuario \n");
                    codigo = 0 ;
                    }
        
            }while(codigo != 0);
            pos = 0;

            for(i=0; i<TL; i++){
                while(pos<TL && id[i]> id[pos])
                pos ++;

                for(i=TL; i>pos; i--){
                        funcionario[i] = funcionario[i - 1];
                        salario[i] = salario[i - 1];
                        id[i] = id[i - 1];
                        anosImpre[i] = anosImpre[i - 1];
                }
                 funcionario[i] = funcionario[i - 1];
                 salario[i] = salario[i - 1];
                 id[i] = id[i - 1];
                 anosImpre[i] = anosImpre[i - 1];
            }

        }break;

        case 2:{
            printf("Sistema de excluir usuario");
            printf("\n");
            printf("digite o id do funcionario a ser excluido : \n");
            scanf("%d",&exclu);

             while(pos< TL &&  id[pos] != exclu)
                pos++;

                if(pos < TL){
                    for(i =TL; i>pos; i--){
                        funcionario[i] = funcionario[i - 1];
                        salario[i] = salario[i - 1];
                        id[i] = id[i - 1];
                        anosImpre[i] = anosImpre[i - 1];
                    }
                    TL--;
                } 
                else
                    printf("funcionario não encontrado");
            
        } break;
        
        default:
            printf("opcao invalida"); break;
        }

    }while(codigo != 0);


}
