//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2;
	
	printf("\n digite seu primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\n digite seu segundo numero: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("seu primeiro numero e maior que o segundo");
	}else if(n2>n1){
	printf("seu segundo numero e maior que o primeiro");
	}else{
		printf("ambos os numeros são iguais");	
	}
}
