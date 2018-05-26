//Nome: Renata Moreira da Costa
//Matrícula 11721EBI008

#include <stdio.h>

int ack(int m, int n)
{
	if(m == 0) return n+1;
	else if(n == 0) return ack(m-1, 1);
	else return ack(m-1, ack (m, n-1));
}

int main()
{

	int m, n;
	printf("\nEntre com o parametro m = ");
	scanf("%d", &m);
	getchar();
	printf("\nEntre com o parametro n = ");
	scanf("%d", &n);
	getchar();
	printf("\nResultado obtido =  %d", ack(m,n));
	return 0;
}
