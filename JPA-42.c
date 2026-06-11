#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n***************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781         *");
    printf("\n* Programa NJNS-JPA-42 Quantidade de números ímpares digitados*");
    printf("\n***************************************************************\n\n");
    
    printf(	
    "Uma pesquisa escolar precisa analisar números digitados pelos participantes.\nO programa deve pedir 10 números e informar quantos deles são ímpares."
    );

int numero, i, impares = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            impares++;
        }
    }

    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;


}

