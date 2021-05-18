#include<stdio.h>
#define TF 7

int main(){
	int vetor1[TF],vetor2[TF],vetor3[TF*2],TL1 = 0, TL2 = 0, TL3 = 0,num,i,j,pos;
	
	printf("digite um numero");
	scanf("%d",&num);
	
	while(num > 0 && TL2<TF){
		pos = 0;
		while(pos < TL2  && num > vetor2[pos])
		pos++
		
		for(i=TL2; i>pos;i++)
		vetor2[i] = vetor2[i-1];
		
		vetor2[pos] = num;
		TL2 ++;
		
		if(TL2< TF){
			printf("digite um numero\n");
			scanf("%d",&num)
		}
	}
	
}
