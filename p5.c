//Renata Moreira da Costa
//11721EBI008



#include <stdio.h>

int main()
{	char msg[256];
	char *pt;
	int i, k, texto[256], opcao;
	int *pmsg;
	do{
	do{printf("MENU: \n1 - Criptografar \n2 - Descriptografar \n3 - Sair do programa \nSua opcao eh: ");
	scanf("%d", &opcao);
	getchar();}while(opcao!=1 && opcao!=2 && opcao!=3);
	i = 0;
	switch(opcao)
	{	case 1:
			for(i=0; i<256; i++){ msg[i] = '\0'; }
			printf("\nDigite uma informacao textual: ");
			fgets(msg, 256, stdin);
			for(k=0; msg[k] != '\0'; k++);	
			pmsg = (int*)msg;
			printf("\nFrase criptografada: \n");
			for(i=0; i<k; i++)	
			{	if(*(pmsg+i) != 0 )
				{	printf("%i ", *(pmsg+i));	}	} 
			break;
			
		case 2:
			printf("Quando quiser encerrar a sequencia de numeros, entre com 0\n");
			pt = (char*)texto;
			i=0; k=0;
			printf("Digite uma sequencia de numeros: \n");
			do
			{	scanf("%d", &k);
	 			getchar();
				texto[i] = k;
				i++;
			}while(k != 0);
			pt = (char*)&texto;
			printf("\nFrase descriptografada: \n");
			for(i=0; i<sizeof(texto) && *(pt+i) != 0; i++)
			{	printf("%c", *(pt+i));		}
			break;

		default:
			break;
	}
	printf("\n\n");
	}while(opcao != 3);
	return 0;
}
