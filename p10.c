#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 64

typedef struct Dimensao
{
    float largura;
    float profundidade;
    float altura;
}Dimensao;

typedef struct Produto
{
    char nome[MAXLEN];
    float preco;
    Dimensao dimensao;
}Produto;

void Cadastro(Produto * p)
{
    printf("\nDigite o nome: ");
    fgets(p->nome, MAXLEN, stdin);
    p->nome[strlen(p->nome)-1] = '\0';
    printf("\nDigite o preco: ");
    scanf("%f", &(p->preco));
    getchar();
    printf("\nDigite a largura: ");
    scanf("%f", &(p->dimensao.largura));
    getchar();
    printf("\nDigite a profundidade: ");
    scanf("%f", &(p->dimensao.profundidade));
    getchar();
    printf("\nDigite a altura: ");
    scanf("%f", &(p->dimensao.altura));
    getchar();
}

void Pesquisa(Produto * p)
{
    char c;
    if(strlen(p->nome) == 0)
	{
        printf("\nProduto nao cadastrado! ");
        while((c=getchar()) != '\n');
        return;
    }
    printf("\n%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm\n", p->nome, p->preco,(p->dimensao.largura),(p->dimensao.profundidade), (p->dimensao.altura));
    while((c=getchar())!='\n');
}

int main()
{
    int opcao1=-1, opcao2=0, nump=0, i;
    char c, fil[MAXLEN];
    FILE * f;
    Produto * produtos = (Produto *) calloc(1, sizeof(Produto));
    
    while(opcao1 != 0)
	{
        printf("Produtos na memoria: %d", nump);
        printf("\n1) Consultar \n2) Cadastrar novo \n3) Carregar arquivo para memoria \n4) Salvar memoria em arquivo \n0) Sair do programa.\n ");
        scanf("%d", &opcao1);
        getchar();
        opcao2 = -1;
        switch(opcao1)
		{
            case 1:
                while(opcao2!=0)
				{
                	if(nump == 0)
					{
                		printf("\nNenhum produto cadastrado! ");
                		while((c=getchar()) != '\n');
                		break;
					}
                    printf("\nConsulta de Produtos\n");
                    printf("\nProdutos em memoria: %d", nump);
                    printf("\n0) Voltar");
                    for(i=0; i<nump; i++)
                        printf("\n%d. %s", i+1, produtos[i].nome);
                    printf("\n ");
                    scanf("%d", &opcao2);
                    getchar();
                    if(opcao2>0 && opcao2<=nump)
                        Pesquisa(&produtos[opcao2-1]);
                    if(opcao2<0 || opcao2>nump)
                        printf("\nProduto nao existe! ");
                }
                break;
            case 2:
            	nump++;
                produtos = (Produto *) realloc(produtos, nump * sizeof(produtos));
                Cadastro(&produtos[nump-1]);
                printf("\nCadastrado com sucesso!");
                while((c=getchar()) != '\n');
                break;
            case 3:
            	printf("\nDigite o nome do arquivo: ");
            	scanf("%s", (char *)fil);
            	getchar();
                f = fopen(fil, "rb");
                if(f)
				{
                    fread(&nump, sizeof(int), 1, f);
                    produtos = (Produto *)calloc(nump , sizeof(produtos));
                    fread((void *)produtos, sizeof(produtos), nump, f);
                    fclose(f);
                    printf("\nArquivo contem %d produto(s). Leitura realizada com sucesso!\n", nump);
                    while((c=getchar()) != '\n');
                }
				else
				{
                    printf("\nO arquivo nao pode ser aberto!\n");
                    while((c=getchar()) != '\n');
                }
                break;
            case 4:
            	printf("\nDigite o nome do arquivo: ");
            	scanf("%s", (char *)fil);
            	getchar();
            	f = fopen(fil, "wb");
                if(f)
				{
                    fwrite(&nump, sizeof(int), 1, f);
                    fwrite(produtos, sizeof(produtos), nump, f);
                    fclose(f);
                    printf("\nProdutos armazenados em disco com sucesso!!\n");
                    while((c=getchar()) != '\n');
                }
				else
				{
                    printf("\nO arquivo nao pode ser aberto!\n");
                    while((c=getchar()) != '\n');
                }
                break;
            default:
                if(opcao1!=0)
                    printf("\nOpcao invalida!\n");
                break;
        }
    }
    free(produtos);
    return 0;
}
