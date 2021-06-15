#include <stdio.h>
#include <string.h>
#define TF 7
#define TL 4
int main (){
    int mat[TF][TL],i=0,j=0,idade[TF],ra[TF],pos=0,media,ida=0;
    char disciplina[TF][20],l[20];
    float t;

    for(i=0; i<TF; i++){
        printf("digite a diciplina a ser cadastrada no vetor\n");
        gets(disciplina[i]);
        printf("digite a sua idade para ser cadatrada\n");
        scanf("%d",&idade[i]);
        printf("digite o su ra para ser cadastrada\n");
        scanf("%d",&ra[i]);
    }
    for(i=0; i<TF; i++)
        for(j=0; j<TL; j++){
            printf("digite a sua nota para ser cadastrada\n")
            scanf("%d",&mat[i][j]);
        }
    
    printf("digita a diciplina de comsulta");
    gets(l);

     while(pos<TL && strcmp(l,disciplina[pos]) == 0)
            pos++;
    if(pos<TL){
        for(i=0; i<TF; i++)
            if(idade[i][pos]> 18 && idade[i][pos]<25 && mat[i][pos]<2)
            j++;
        printf("a quantidade de usuarios na diciplina %s foi %d",disciplina[pos],j);
    }
    else{
         printf("diciplina n cadastrada");
    }
   
   printf("lista de alunoe que fizeram menos de 3 provas");
   for(i=0; i<TF; i++){
       printf("lista de %s");
       for(j=0; j<TF; j++){
           if(mat[j][i] >3){
               printf("%d",ra[j][i]);
           }
       }
   }
   printf("a media dos alunos que nao fizeram provas");
   pos =0;
   for(j=0 j<TL; j++)
     for(i=0; i<TF; i++){
         if(mat[j][i] == 0){
             if(idade[j][i] != ida)
                media = media + idade[i][j];
                pos ++;
         }
    }
    t = media/pos;
    printf("a media da idade é %d", t);

    


}