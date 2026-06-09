#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-23 Maior de dois números                 *");
    printf("\n**************************************************************");
    
    printf(
	"\n Dois atletas registraram suas pontuações em uma prova."
	"\n O sistema precisa identificar qual foi a maior pontuação."
	"\n O programa deve receber dois números e mostrar qual deles é o maior."
	);
    
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("O maior numero e: %d\n", a);
    } else if (b > a) {
        printf("O maior numero e: %d\n", b);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
