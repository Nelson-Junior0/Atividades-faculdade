#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-58  A Calculadora de Bolso de 4 Operações*");
    printf("\n**************************************************************\n\n");
    
    printf("Você foi desafiado a criar o motor lógico de uma calculadora de bolso bem simples, daquelas\nque só fazem as quatro operações básicas.\nO Exercício: O algoritmo deve receber dois números reais (ex: 10 e 5) e um caractere\nrepresentando a operação matemática ('+', '-', '*', '/'). Use o Switch...Case para analisar o\ncaractere da operação e exibir o resultado do cálculo correspondente.\nCaso receba um símbolo diferente dos quatro: Exiba *Operação matemática não reconhecida*.");

float n1, n2, resultado;
    char operacao;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &n1);

    printf("\nDigite a operacao (+ - * /): ");
    scanf(" %c", &operacao);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);

    switch(operacao) {

        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            resultado = n1 / n2;
            printf("Resultado: %.2f\n", resultado);
            break;

        default:
            printf("\nOperacao matematica nao reconhecida\n");
    }

    return 0;


}

