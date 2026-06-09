#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-19 Ordem crescente (três números)        *");
    printf("\n**************************************************************");
    
    
	printf(
"\n Durante uma competição escolar, três alunos obtiveram pontuações diferentes."
"\n O sistema precisa organizar os valores do menor para o maior para facilitar a classificação."
"\n O programa deve receber três números e exibi-los em ordem crescente." );
	
	
	int a, b, c, temp;

    printf("\n Digite a pontuação do competidor 1: ");
    scanf("%d", &a);
	
	printf("\n Digite a pontuação do competidor 2: ");
    scanf("%d", &b);
    
    printf("\n Digite a pontuação do competidor 3: ");
    scanf("%d", &c);
   
     if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }


    printf("\n %d \n %d \n %d", a, b, c);
	
    return 0;
}
