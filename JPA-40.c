#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-40: Tabuada com while                    *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Um aluno deseja praticar multiplicação usando repetição.\nO programa deve receber um número e mostrar sua tabuada de 1 a 10 utilizando while."
    );
    
    int numero, i = 1;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);

    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
    
    
}
