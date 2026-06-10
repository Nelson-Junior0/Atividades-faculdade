#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-33 Múltiplos de 3 entre 1 e 30           *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "\n Um aplicativo educacional deseja destacar os números múltiplos de 3 para os alunos.\n O programa deve listar todos os múltiplos de 3 entre 1 e 30."

    );
    
    
    int i;

    printf("Multiplos de 3 entre 1 e 30:\n");

    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }
    
    
    
    
    
}
