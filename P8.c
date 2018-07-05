//Renata Moreira da Costa
//11721EBI008

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct d
{
	float largura;
	float profundidade;
	float altura;
};

struct prod
{
	char nome[64];
	float preco;
	struct d end;
};
void cadastro(struct prod vetor_prod[], int i){
	printf("\nDigite o nome:");
	fgets(vetor_prod[i].nome, 64, stdin);
	printf("\nDigite o preco:");
	scanf("%f", &vetor_prod[i].preco);
	getchar();
	printf("\nDigite a largura:");
	scanf("%f", &vetor_prod[i].end.largura);
	getchar();
	printf("\nDigite a profundidade:");
	scanf("%f", &vetor_prod[i].end.profundidade);
	getchar();
	printf("\nDigite a altura:");
	scanf("%f", &vetor_prod[i].end.altura);
	getchar();
}
void pesquisa(struct prod vetor_prod[], int i){
	char condicional[64];
	strcpy(condicional, " ");
	if(strcmp(condicional, vetor_prod[i].nome) == 0){
		printf("\nProduto nao cadastrado!");
	}
	else{
		printf("\n %s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm",vetor_prod[i].nome, vetor_prod[i].preco, vetor_prod[i].end.largura, vetor_prod[i].end.profundidade, vetor_prod[i].end.altura);
	}
}
int main()
{
	struct prod vetor_prod[2];
	int opcao, prod, numer_prod = 0;
	strcpy(vetor_prod[0].nome, " ");
	strcpy(vetor_prod[1].nome, " ");
	do{
	printf("\n\n1 - Cadastro\n2 - Consulta\n3 - Sair\n\nDigite uma opcao: ");
	scanf("%d", &opcao);
	getchar();  
	switch(opcao)
	{
		case 1: 
			printf("\nEscolha o produto 1 ou 2:");
			scanf("%d", &prod);
			getchar();
			switch(prod){
				case 1:
					numer_prod= prod -1;
					cadastro(vetor_prod, numer_prod);
					printf("\nProduto 1 cadastrado com sucesso");
					numer_prod = 0;
					break;
				case 2:
					numer_prod = prod -1;
					cadastro(vetor_prod, numer_prod);
					printf("\nProduto 2 cadastrado com sucesso");
					numer_prod = 0;
					break;
				default:
					break;
			}
			break;
		case 2:	
			printf("\nEscolha o produto 1 ou 2:");
			scanf("%d", &prod);
			getchar();
			switch(prod){
				case 1:
					numer_prod = prod -1;
					pesquisa(vetor_prod, numer_prod);
					numer_prod = 0;
					break;
				case 2:
					numer_prod = prod -1;
					pesquisa(vetor_prod, numer_prod);
					numer_prod = 0;
					break;
				default:
					break;
			}
			break;
		case 3:
			return 0;
		default: 
			break;
	}	
	}while(opcao != 4);
	return 0;
}
