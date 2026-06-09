#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-PA-16 Múltiplo de 3 e/ou 5                   *");
    printf("\n**************************************************************\n\n");
    
    printf("\n Uma lanchonete criou uma promoção especial."
"\n Se o número do pedido for múltiplo de 3, o cliente ganha um refrigerante."
"\n Se for múltiplo de 5, ganha uma sobremesa."
"\n Se for múltiplo dos dois, ganha os dois brindes."
"\n O programa deve verificar o número do pedido e informar qual prêmio o cliente ganhou.");

    int pedido;

    printf("\n Digite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0) {
        printf("\n Cliente ganhou refrigerante e sobremesa!");
    } else if (pedido % 3 == 0) {
        printf("\n Cliente ganhou um refrigerante!");
    } else if (pedido % 5 == 0) {
        printf("\n Cliente ganhou uma sobremesa!");
    } else {
        printf("\nCliente nao ganhou brindes.");
    }

    return 0;
}
    
    
    
    
