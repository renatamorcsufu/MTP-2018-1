//RENATA MOREIRA DA COSTA
//11721EBI008
#include <stdio.h>


int main()
{
	int opcao, convert[100];
	char bin[256], bin1[256], bin2[256];
	int valor, i=0, desloca, j,d, k=0, aux=0, l, pot=1, decimal=0, cont=0, x=1, b=0, z, n_convert=0;
	do
	{
	
	printf("\nConversor de bases numericas.");
	printf("1: Binario para decimal\n");
	printf("2: Binario para hexadecimal\n");
	printf("3: Hexadecimal para decimal\n");
	printf("4: Hexadecimal para binario\n");
	printf("5: Decimal para binario\n");
	printf("6: Decimal para hexadecimal\n");
	printf("7: Octal para decimal\n");
	printf("8: Decimal para octal\n");
	printf("\nInforme a opcao: ");
	do{
	valor=0; i=0; desloca=0; j=0;d=0; k=0;aux=0; l=0; pot=1; decimal=0; cont=0; x=1; b=0; z ;n_convert=0;
	scanf("%d", &opcao);
	getchar();
} while (opcao<1||opcao>8);
   switch(opcao)
{

   	case 1:
   		printf("\nDigite o numero binario que deseja converter: ");
   		scanf("%s", &bin);
   		getchar();
   		while (bin[k]!='\0'){
   			k++;
   			aux++;
		   }
		  l = aux - 1;
		  for( k=0; k<aux; k++, l--){
		  	bin1[l] = bin[k];
		  }
		  for( l=1; l<aux; l++){
		  	pot=pot*2;
		  	if(bin1[l] == '1')
		  	decimal = decimal + pot;
		  }
		  if(bin1[0] == '1') {
		  
		  decimal = decimal  + 1;
		  printf("\nNumero decimal: %d ", decimal);}
		  break;
		  
      case 2:
	   printf("\nDigite o numero binario a ser convertido: ");
	   scanf("%s", &bin2);
	   getchar();
	   for( cont = 0; bin2[cont]!= '\0'; cont++);
	   cont--;		   
	   for( z = cont; z >= 0 ; z--)
	  {
	  
		if(bin2[z] == '0')
		
		convert[z] = 0;
		else if( bin2[z] == '1')
		convert[z] = 1; 
		}
		b = cont;
		while( b >= 0)
		{
			while( x <= cont - b)
			{
				convert[b] *=2;
				x++;
			}
		
		n_convert += convert[b];
		x = 1;
		b--;
        }
	  printf("\nO numero convertido eh = %x", n_convert);
	  
	  break;
	  
		   
   		
   		 
     case 3: 
    	printf("\nInforme o valor em hexadecimal: ");
		scanf("%x", &valor);
		getchar();
		printf("%x em decimal eh: %d ", valor, valor);
        break;
        case 4:
    	printf("\nInforme o numero hexadecimal a ser convertido: ");
    	scanf("%x", &valor);
    	getchar();
    	for (j = 14; j >= 0; j--)  // Executa a operação shift right até a 
    // última posição da direita para cada bit.
    	{
    		d = valor >> j; // Por meio do "e" lógico ele compara se o valor 
    // na posição mais à direita é 1 ou 0 
    // e imprime na tela até reproduzir o número binário.
    		if( d & 1)
    		{
    			printf("1");
			} else printf("0");
		}
		break;
    
    case 5:
    printf("\nInforme o numero: ");
    scanf("%d", &valor);
    getchar();
    for (i = 9; i>=0; i-- )
    {
    	desloca = valor >> i;
    	if( desloca & 1){
    		printf("1");
		}else { printf("0");
		}
	}
	break;
    case 6:
	
		printf("\nInforme o valor em decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%d em hexadecimal eh %x ", valor, valor);
	break;
	case 7:
	printf("\nInforme o valor em octal: ");
	scanf("%o", &valor);
	getchar();
	printf("%o em decimal eh: %d", valor, valor);
	break;
	case 8:
		printf("\nInforme o valor em decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%d em octal eh: %o", valor, valor );
		break; }

} while(opcao!=8);
return 0;
}
