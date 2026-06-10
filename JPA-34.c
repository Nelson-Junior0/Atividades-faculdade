#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-34 Verificar se um número é primo        *");
    printf("\n**************************************************************\n\n");
    
    printf("Um estudante está aprendendo sobre números primos e quer automatizar a verificação.\n O programa deve receber um número e informar se ele é primo utilizando for. ");
    int numero, i, divisores = 0;

    printf("\n Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}
