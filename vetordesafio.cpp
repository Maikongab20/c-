# include<stdio.h>

main(){
	int vetor[5], vetor2[5],uniao[10],inter[5],i,j;
	
	for(i=0; i<5; i++){
		printf("digite numero para o primeiro vetor");
		scanf("%d",&vetor[i]);
	}
	for(i=0; i<5; i++){
		printf("digite numero para o segundo vetor");
		scanf("%d",&vetor2[i]);
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<5; j++){
			
			if(vetor[i]!=vetor2[j]){
				uniao[j]=vetor2[j];
			}
		}
	}
	for(j=0; j<10; j++){
		for(i=0; i<5; i++){
			
			if(vetor[j]!=vetor[i]){
				uniao[i]=vetor2[i];
			}
		}
	}
	for(i=0; i<10; i++){
		printf("%d",vetor[i]);
	}
}
