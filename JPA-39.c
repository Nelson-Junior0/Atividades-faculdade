#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-39 Verificar se um número é positivo     *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Um sistema financeiro só aceita valores positivos para cadastro.\nO programa deve continuar pedindo números até que o usuário digite um número positivo."
    );
    
    float valor;

    printf("\nDigite um valor positivo: ");
    scanf("%f", &valor);

    while (valor <= 0) {
        printf("\nValor invalido. Digite um numero positivo: ");
        scanf("%f", &valor);
    }

    printf("\nValor aceito: %.2f\n", valor);

    return 0;
}

