#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-18 Login simples                         *");
    printf("\n**************************************************************");
    
    
    printf(
"\n Uma escola criou um sistema simples para acesso à biblioteca digital."
"\n O aluno deve informar usuário e senha corretos para entrar no sistema."
"\n O programa deve verificar se os dados digitados estão corretos e mostrar uma mensagem de acesso"
"\n permitido ou negado.");
    
    char usuario[20];
    char senha[20];

    printf("\n Digite o usuario: ");
    scanf("%s", usuario);

    printf("\n Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1234") == 0) {
        printf("\n Acesso permitido!");
    } else {
        printf("\n Acesso negado!");
    }

    return 0;
}
