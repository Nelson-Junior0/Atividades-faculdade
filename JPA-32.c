#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-32 Quadrado dos números de 1 a 10        *");
    printf("\n**************************************************************\n\n");
    
    printf("Um professor quer demonstrar o conceito de potência ao quadrado para a turma.\n O programa deve mostrar o quadrado de cada número de 1 até 10."	);   
    
    int i;

    printf("\n Quadrado dos numeros de 1 a 10:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d ao quadrado = %d\n", i, i * i);
    }

    return 0;
    
}


