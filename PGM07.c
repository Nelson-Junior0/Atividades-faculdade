//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n1;
	
	
	printf("digite um numero: ");
	scanf("%d",&n1);
	
	if(n1>0){
	printf("o numero insirido e positivo");
	}else if(n1<0){
		printf("o numero insirido e negativo");
	}else{
		printf("o numero insirido e zero");
	}
	

}
