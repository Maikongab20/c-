#include <stdio.h>
#include <string.h>

int main(){
    char funcionario[5][10];
    float salario[5];
    int id[5],anosImpre[5],i = 0,pos = 0,codigo,exclu,j;

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
                
                if(i<4){
                    id[pos] = i;
                    printf("digite o nome :\n");
                    fflush(stdin);
                    scanf("%s",&funcionario[pos]);
                    printf("\n");
                    printf("digite o seu salario");
                    scanf("%f",&salario[pos]);
                    printf("digite os anos de empresa");
                    scanf("%d",&anosImpre[pos]);
                    i ++;
                    printf("cadrastrar mais usuarios digite 1 para sair digite 0");
                    scanf("%d",&codigo);
                }
                else{
                    printf("sem espaso para cadrastrar mais usuario \n");
                    codigo = 0 ;
                    }
        
            }while(codigo != 0);
            pos = 0;

            for(j=0; j<5; j++){
                while(pos<5 && id[i]> id[pos])
                pos ++;

                for(i=5; i>pos; i--){
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

             while(pos< 5 &&  id[pos] != exclu)
                pos++;

                if(pos < 5){
                    for(i =5; i>pos; i--){
                        funcionario[i] = funcionario[i - 1];
                        salario[i] = salario[i - 1];
                        id[i] = id[i - 1];
                        anosImpre[i] = anosImpre[i - 1];
                    }
                } 
                else
                    printf("funcionario não encontrado");
            
        } break;
        
        default:
            printf("opcao invalida"); break;
        }

    }while(codigo != 0);
}