# include <stdio.h>


main(){
	int vetor[5],i,j,aux;
	
	for(i=0; i>5; i++){
		printf("digite um numero \n");
		scanf("%d",&vetor[i]);
	}
	
	for(i=0; i<5; i++){
		for(j=i+1; j<5; j++){
			if(j<5)
			if(vetor[i]>vetor[j]){
					aux=vetor[i];
					vetor[i]=vetor[j];
					vetor[j]=aux;
									
			}
		}
	}
	
	for(i=0; i<5; i++){
		printf("%d",vetor[i]);
	}
	
	
}
