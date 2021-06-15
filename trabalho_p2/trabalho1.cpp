#include <stdio.h>
#include <string.h>
#define TF 5

int main(){
    char funcionario[TF][10];
    float salario[TF];
    int id[TF],anosImpre[TF],i,pos = 0,codigo,exclu,TL =0,cp;

    do{
        printf("digite a opcao desajada\n");
        printf("1 para cadrastar\n");
        printf("2 para excluir\n");
        printf("0 para sair\n");
        scanf("%d",&codigo);

        switch (codigo)
        {
        case 1:{
            printf("cadrastro");
            printf("\n");
            do{
                
               printf("Digite o cod para cadastrar:\n");
                scanf("%d",&codigo);
                
                pos=0;
                while(pos<TL && codigo>id[pos])
                    pos++;
                    
                for(i=TL; i>pos; i--)
                {
                    id[i]=id[i-1];
                    strcpy(funcionario[i],funcionario[i-1]);
                    salario[i]=salario[i-1];
                    anosImpre[i]=anosImpre[i-1];
                }
                
                id[pos]=codigo;
                
                printf("Nome do funcionario:\n");
                fflush(stdin);
                gets(funcionario[pos]);
                printf("Salario:\n");
                scanf("%f",&salario[pos]);
                printf("Anos na empresa:\n");
                scanf("%d",&anosImpre[pos]);
                TL++;
                printf("cadrastrar mais funcionarios 1 para sair 0");
                scanf("%d",&cp);

        
            }while(cp != 0);
        }break;

        case 2:{
            printf("Sistema de excluir usuario\n");
            printf("digite o id do funcionario a ser excluido : \n");
            scanf("%d",&exclu);

             while(pos< TL &&  id[pos] != exclu)
                pos++;

                if(pos < TL){
                    for(i =TL; i>pos; i--){
                        strcpy(funcionario[i],funcionario[i-1]);
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

    printf("Relatorio 1 funcionario sem almento");
    printf("\n");
    for(i=0; i<TL; i++){
        if(anosImpre[i]>= 5 && salario[i]<=200){
            printf("%d: %s",id[i],funcionario[i]);
        }
    }
     printf("Relatorio 2 funcionario com almento");
    for(i=0; i<TL; i++){
        if(salario[i]<200 && anosImpre[i]>5){
            salario[i] = salario[i]* 1.35;
        }
        else
            if(anosImpre[i] > 5 && salario[i]> 5){
                salario[i]= salario[i] * 1.25;
            }
            else
                if(salario[i]< 200 && anosImpre[i] < 5){
                    salario[i] = salario[i]*1.15;
                }
        
        printf("%d %s novo salario= %.2f",id[i],funcionario[i],salario[i]);
    }
}