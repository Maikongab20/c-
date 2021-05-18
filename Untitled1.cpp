#include<stdio.h>
#include<string.h>
#define TF 11

int main()
{
    int vetCPF[TF], i, d1, d2, s, resto, TL=0;
    char sCPF[15];
    
  	printf("Digite o CPF:\n");
	gets(sCPF);
		
	for(i=0; i<strlen(sCPF); i++)
	{
		if(sCPF[i]>='0' && sCPF[i]<='9')
		{
			vetCPF[TL] = sCPF[i] - 48;
			TL++;
		}
	}
    
    if (TL==11)
{
}
	else
		printf("Digitacao errada do CPF");
