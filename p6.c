#include <stdio.h>

float media(int somar, float cont){
	float resul;
	resul = somar/cont;
	return resul;
}
int somar_vetor(int v[20], int n) {
      if(n == 0) return 0;
      else return(v[n-1] + somar_vetor(v,n-1));
  }
      
int main(){
	int i, num[20], somar, tamanho;
	float cont = 0.0f;
	for(i=0; i<20; i++){
		num[i] = 0;}
	printf("\nEntre com  o numero de termos: ");
	scanf("%d", &tamanho);
	for(i=0; i<tamanho; i++){
		printf("\nEntre com  o %d numero: ", i+1);
		scanf("%d", &num[i]);
		getchar();
		if(num[i] != 0) cont++;}
	somar = (somar_vetor(num, tamanho));
	printf("\n%f", media(somar, cont));
	return 0;}
