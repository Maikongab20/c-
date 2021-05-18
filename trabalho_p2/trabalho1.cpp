#include <stdio.h>
#include <string.h>

int main(){
    char funcionario[5][10],exclu;
    float salario[5];
    int id[5],anosImpre[5],i = 0,pos = 0,codigo;

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
                while(pos< 5 &&  id[pos] != 0)
                pos++;

                if(i<5)
                    id[pos] = i
                    printf("digite o nome :\n");
                    fflush(stdim);
                    scanf("%s",&funcionario[pos]);
                    printf("\n");
                    printf("digite o seu salario");
                    scanf("%f",&salario[pos]);
                    printf("digite os anos de empresa");
                    scanf("%d",&anosImpre[pos]);
                    printf("cadrastrar mais usuarios");
                    scanf("%d",&codigo);
                     else{
                         printf("sem espaso para cadrastrar mais usuario \n");
                         codigo = 0 ;
                     }
        
            }while(codigo != 0);
            pos = 0;

        }break;

        case 2:{
            printf("digite o nome do funcionario a ser excluido : \n");
            scanf("%d",&exclu);

             while(pos< 5 &&  funcionario[pos] != exclu)
                pos++;

                for(i =5; i>5; i--){
                    funcionario[i] = funcionario[i - 1];
                    salario[i] = salario[i - 1];
                    id[i] = id[i - 1];
                    anosImpre[i] = anosImpre[i - 1];
                }
        }
        
        default:
            break;
        }

    }while(codigo != 0);
}