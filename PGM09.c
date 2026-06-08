//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"potuguese");
	
	int n1;

	printf("digite um numero: ");
	scanf("%d", &n1);
	
	if(n1 % 2==0 ){
		printf("o numero %d e PAR \n",n1);
	}else{
		printf("o numero %d e IMPAR \n",n1);
	}	
}
