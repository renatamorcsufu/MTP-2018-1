//Renata Moreira da Costa
//11721EBI008

#include <stdio.h>

int main()
{
	char string[256];
	int vetor[256], i, j=0;
	printf("\nDigite: ");
	scanf("%s",string);
	
	for( i = 0; string[i] != '\0'; i++)
	{
		if( string[i] >= 48 && string[i] <=57)
		{
			vetor[j] = string[i] - 48;
			j++;	
		}
	}
	for( i = 0; i < j;i++){
	
	printf("%d", vetor[i]); }
	return 0;
}
