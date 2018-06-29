//Renata Moreira da Costa
// 11721EBI008
#include <stdio.h>
#include <stdlib.h>
void gera_de_numeros(float * vetor, int tamanho) {
	int i;  
	for(i = 0; i < tamanho; i++) 
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;}
float soma_de_vet(float v[], int numer){
	 if (numer == 0) return 0;
   else {
      float s;
      s = soma_de_vet (v, numer-1);
      if (v[numer-1] > 0) s += v[numer-1];
      return (s);}
	  }
float multp(float v[], int numer){
	float mult = 1.0f;
	int i;
	for( i=0; i<numer; i++)
		mult = mult*v[i];
	return mult;
}

int main(){
	srand(123456);
	//printf("%d\n", rand()); 
	int opcao, numer=100;
	float num[100];
	gera_de_numeros(num, numer);
	do{
	printf("\nDigite: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do prgrama.");
	printf("\nDigite a opcao: ");
	scanf("%d", &opcao);	
	getchar();
	switch(opcao){
		case 1:
			printf("\nSomatorio: %f", soma_de_vet(num, numer));
			break;
		case 2:
			printf("\nProduto: %f", multp(num,numer));
			break;
		case 3:
			return 0;
		default:
			break;
	}}while(opcao != 4);
	return 0;}
