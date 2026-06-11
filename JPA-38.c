#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-38  Senha correta                        *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Um sistema de acesso precisa garantir que apenas usuários autorizados entrem.\nO programa deve solicitar a senha repetidamente até que o usuário digite a senha correta"
    );
    
    
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");

    return 0;
    
    
    
    
}
