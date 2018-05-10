//RENATA MOREIRA DA COSTA
//11721EBI008
#include <stdio.h>

void dec_bin(int num)
{
	int i,desloca;
    for (i = 31;i>= 0; i--)
    {
    	desloca = num >> i;
    	if( desloca & 1){
    		printf("1");
		}else { printf("0");
		}
	}

}
int main()
{
	int opcao;
	int valor, valor2;
	
   do{
   
	printf("\nCalculadora Bit Wise.\n");
	printf("1: NOT\n");
	printf("2: AND\n");
	printf("3: OR\n");
	printf("4: XOR\n");
	printf("5: RIGHT SHIF\n");
	printf("6: LEFT SHIFT\n");
	printf("7: Sair do programa.\n");

	printf("\nInforme a opcao: ");
    scanf("%d", &opcao);
   switch(opcao)
{

   	case 1:
   		  printf("\nDigite um numero: ");
    scanf("%d", &valor);
    getchar();
    printf("\nNOT %d(", valor);
    dec_bin(valor);
    valor = ~valor;
    printf(") : %d(", valor);
    dec_bin(valor);
    printf(")");
	  break;
		  
      case 2:
      	printf("\nDigite um numero: ");
    scanf("%d", &valor);
    getchar();
    printf("\nDigite outro numero: ");
    scanf("%d", &valor2);
    getchar();
    printf(" %d(", valor);
    dec_bin(valor);  printf(") AND");
    valor = valor&valor2;
    printf(" %d(", valor2);
    dec_bin(valor2);
    printf(") : ");
    printf("%d (", valor);
    dec_bin(valor);
    printf(")");
	  break;
	   		 
     case 3: 
     printf("\nDigite um numero: ");
    scanf("%d", &valor);
    getchar();
    printf("\nDigite outro numero: ");
    scanf("%d", &valor2);
    getchar();
    printf(" %d(", valor);
    dec_bin(valor);  printf(") OR");
    valor = valor|valor2;
    printf(" %d(", valor2);
    dec_bin(valor2);
    printf(") : ");
    printf("%d (", valor);
    dec_bin(valor);
    printf(")");
  		break;
    
    case 4:
    	printf("\nDigite um numero: ");
    scanf("%d", &valor);
    getchar();
    printf("\nDigite outro numero: ");
    scanf("%d", &valor2);
    getchar();
    printf(" %d(", valor);
    dec_bin(valor);  printf(") XOR");
    valor = valor^valor2;
    printf(" %d(", valor2);
    dec_bin(valor2);
    printf(") : ");
    printf("%d (", valor);
    dec_bin(valor);
    printf(")");
    break; 
  
    case 5:
    	printf("\nDigite um numero: ");
    scanf("%d", &valor);
    getchar();
    printf("\nDigite outro numero: ");
    scanf("%d", &valor2);
    getchar();
    printf(" %d(", valor);
    dec_bin(valor);  printf(") >>");
    valor = valor>>valor2;
    printf(" %d(", valor2);
    dec_bin(valor2);
    printf(") : ");
    printf("%d (", valor);
    dec_bin(valor);
    printf(")");

	break;
	
    case 6:
   	printf("\nDigite um numero: ");
    scanf("%d", &valor);
    getchar();
    printf("\nDigite outro numero: ");
    scanf("%d", &valor2);
    getchar();
    printf(" %d(", valor);
    dec_bin(valor);  printf(") <<");
    valor = valor<<valor2;
    printf(" %d(", valor2);
    dec_bin(valor2);
    printf(") : ");
    printf("%d (", valor);
    dec_bin(valor);
    printf(")");	
	break;
	
	case 7:
		return 0;
		break;
		
	default: 
	break;
}	} while(1);
}
