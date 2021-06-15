# include <stdio.h>
#include <string.h>
# define TF 6

int main(){
    int explemplares[TF],emprestados[TF],codigo[TF],i,o,pos=0,TL=0;
    char autor[TF][30],Titulo[TF][30], tipo[TF][3],l[20];

    do{
        printf("digite a opcao desejada\n");
        printf("1 para cadrastrar\n");
        printf("2 para excluir\n");
        printf("3 livras disponives por categorioa");
        printf("0 para sair\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            printf("digite o nome do livro para cadrastro\n");
            gets(l);

            while(pos< TL && strcmp(l,Titulo[pos])==0)
                pos++;

            if(pos != 0){
                if(TL<TF-1){
                printf("digite o codigo do livro");
                scanf("%d",&codigo[pos]);
                strcpy(Titulo[pos],l);
                printf("digite o nome do autor\n");
                gets(autor[pos]);
                printf("digite o tipo do livro");
                gets(tipo[pos]);
                printf("digite a quantidade de livros exemplares");
                scanf("%d",&explemplares[pos]);
                printf("digite a quantidade de livros emprestados");
                printf("%d",&emprestados[pos]);
                TL ++;
                }
            }
            else 
                explemplares[pos]= explemplares[pos]+1;
         break;
        case 2: printf("digite o livro a ser excluido");
                gets(l);
                pos = 0;
                while(pos<TL && strcmp(l,Titulo[pos]) == 0)
                pos++;

                if(pos<TL){
                    for(i=TL; i<pos; i--){
                        codigo[i]=codigo[i+1];
                        strcpy(Titulo[i],Titulo[i+1]);
                        strcpy(autor[i],autor[i+1]);
                        strcpy(tipo[i],tipo[i+1]);
                        explemplares[i]=explemplares[i+1];
                        emprestados[i]=emprestados[i+1];
                    }
                        codigo[i]=codigo[i+1];
                        strcpy(Titulo[i],Titulo[i+1]);
                        strcpy(autor[i],autor[i+1]);
                        strcpy(tipo[i],tipo[i+1]);
                        explemplares[i]=explemplares[i+1];
                        emprestados[i]=emprestados[i+1];
                }
                else
                printf("libro nao esta cadastrado");
                break;
            case 3: printf("digite a o tipo de livro que voce quer: l para literatura C paraciencias e H para historias");
                    gets(l);
                    for(i=0; i<TL; i++){
                        if(strcmp(l,tipo[i])==0)
                            if(explemplares[i] < emprestados[i])
                        printf(" codigo do livro: %d titulo do livro: %s autor do livro: %s tipo do livro: %s exemplares: %s emprestados: %s",codigo[i],Titulo[i],autor[i],tipo[i],explemplares[i],emprestados[i]);
                    }
        default:
        printf("opcao invalida");
            break;
        }

    }while(o != 0);

}
