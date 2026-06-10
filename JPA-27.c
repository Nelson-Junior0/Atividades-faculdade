#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-27 Tabuada de um número                  *");
    printf("\n**************************************************************\n\n");
    
    printf(	
"\n Um estudante está treinando matemática e deseja visualizar rapidamente a tabuada de um número."
"\n O programa deve receber um número digitado pelo usuário e mostrar sua tabuada de 1 a 10 usando for."
    );
   
   int numero, i;

    printf("\n Digite um numero: ");
    scanf("%d", &numero);

    printf("\nTabuada do  %d:\n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
