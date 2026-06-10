#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-35 Números de Fibonacci (n termos)       *");
    printf("\n**************************************************************\n\n");
    
    printf("Um clube de matemática quer estudar a famosa sequência de Fibonacci.\n O programa deve pedir um valor n e mostrar os primeiros termos da sequência.");
    int n, i;
    int a = 0, b = 1, proximo;

    printf("\n Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("\n Sequencia de Fibonacci:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
    
}

