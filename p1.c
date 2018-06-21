//Pc.c
//Renata Moreira da Costa
//11721EBI008

#include <stdio.h>

int main()
{
	char numerob[256];
	int estado, armaz , i;
	printf("\nDigite um numero binario: ");
	scanf("%s", numerob);
	for( i = 0; numerob[i] != '\0'; i++)
	{
		if( estado == 0 && numerob[i] == '1')
		armaz = 1;
		if( estado == 0 && numerob[i] == '0')
		armaz = 0;
		if( estado == 1 && numerob[i] == '1')
		armaz = 0;
		if( estado == 1 && numerob[i] == '0')
		armaz = 2;
		if( estado == 2 && numerob[i] == '1')
		armaz = 2;
		if ( estado == 2 && numerob[i] == '0')
		armaz = 1;
		estado = armaz;
		armaz = 0;
	}
	if ( estado == 0)
	printf("\nO numero binario %s  , eh multipolo de 3!", numerob);
	else
	printf("\nO numero binario %s , nao eh multiplo de 3!", numerob);
	return 0;
}