#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-29 Números pares de 0 a 50               *");
    printf("\n**************************************************************\n\n");
    
    printf(
		"\nUm jogo educativo precisa mostrar apenas os números pares para ensinar matemática básica.\nO programa deve exibir todos os números pares entre 0 e 50."
    );
    int i;

    printf("\n Numeros pares entre 0 e 50:\n");

    for (i = 0; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    
    
    
}
}

