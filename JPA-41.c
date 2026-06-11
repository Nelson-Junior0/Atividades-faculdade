#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-41  Número primo com while               *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Um estudante deseja verificar se determinado número é primo utilizando outro tipo de repetição.\nO programa deve testar se o número possui apenas dois divisores usando while."
    );

int numero, i = 1, divisores = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    while (i <= numero) {
        if (numero % i == 0) {
            divisores++;
        }

        i++;
    }

    if (divisores == 2) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;


}

