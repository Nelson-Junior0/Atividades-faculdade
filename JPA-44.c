#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-44 Contar dígitos de um número           *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Um sistema bancário deseja identificar quantos dígitos possui um número informado.\nO programa deve receber um número positivo e mostrar quantos dígitos ele possui."
    );
long long numero;
int contador = 0;

    printf("\n Digite um numero positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        numero = numero / 10;
        contador++;
    }

    printf("\n Quantidade de digitos: %d\n", contador);

    return 0;


}


