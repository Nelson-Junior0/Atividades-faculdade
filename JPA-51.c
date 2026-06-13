#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-51 Contagem regressiva de 10 até 1       *");
    printf("\n**************************************************************\n\n");
    
    printf(	"Uma corrida escolar utiliza uma contagem regressiva antes da largada.\nO programa deve mostrar os números de 10 até 1 em ordem decrescente utilizando do...while." );

int i = 10;

    do {
        printf("\n%d\n", i);
        i--;

    } while (i >= 1);

    return 0;


}

