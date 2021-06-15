#include<stdio.h>
#define TF 15
#define TR 5 

int main(){
    int num,par[TR],impar[TR],i,j,TLI=0,TLP=0;
    
    for(i=0; i<TF;i++){
       
        scanf("%d",&num);
        if(num%2==0){
            par[TLP]=num;
            TLP++;
        }
        else{
            impar[TLI]=num;
            TLI++;
        }

        if(TLI == 5){
            for(j=0; j<TLI; j++)
                printf("impar[%d] = %d\n",j,impar[j]);
            
            TLI=0;
        }
        
        if(TLP == 5){
            for(j=0; j<TLP; j++)
                printf("par[%d] = %d\n",j,par[j]);
            
            TLP=0;
        }

    }

     for(j=0; j<TLI; j++)
           printf("impar[%d] = %d\n",j,impar[j]);
        

     for(j=0; j<TLP; j++)
           printf("par[%d] = %d\n",j,par[j]);
        
          
 return 0;
}
