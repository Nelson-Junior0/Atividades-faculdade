#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2;
	
	printf("digite um numero: \n");
	scanf("%d", &n1);
	
	priintf("digite um segundo numero: \n");
	scanf("%d", &n2);
	
	n1+n2;
	
	printf("o resultado da soma foi \n%d");
}
