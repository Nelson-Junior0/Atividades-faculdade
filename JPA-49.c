#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-49 pedir senha ate acertar               *");
    printf("\n**************************************************************\n\n");
    
    printf("Uma escola criou um sistema simples para liberar o acesso ao laboratório de informática.\nO programa deve solicitar a senha do usuário repetidamente até que ele digite a senha correta (1111).\nQuando acertar, o sistema deve mostrar a mensagem “Acesso liberado!”.");

 int senha;

    do {
        printf("\nDigite a senha: ");
        scanf("%d", &senha);

    } while (senha != 1111);

    printf("\nAcesso liberado!\n");

    return 0;


}

