#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-24 Pode votar?                           *");
    printf("\n**************************************************************");
    
    printf(
"\n Um sistema de cadastro eleitoral precisa verificar se uma pessoa já possui idade para votar."
"\n O usuário informa sua idade, e o programa deve dizer se ele pode ou não votar."
	);
    
    int idade;

    printf("\n Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Voce pode votar.\n");
    } else {
        printf("Voce nao pode votar.\n");
    }

    return 0;
}
