#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n***************************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781                     *");
    printf("\n* Programa NJNS-JPA-55 Ler números e mostrar o maior (até digitar negativo*");
    printf("\n***************************************************************************\n\n");
    
    printf("Uma pesquisa escolar registra notas positivas dos participantes.\nO programa deve continuar recebendo números até que um valor negativo seja digitado. Ao final, deve\nmostrar qual foi o maior número positivo informado.");

int maior = 0;
int numero;
    do {
        printf("\nDigite um numero positivo: ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

    } while (numero >= 0);

    printf("\nMaior numero informado: %d\n", maior);

    return 0;


}

