#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-57  A Central do Brinquedo Eletrônico    *");
    printf("\n**************************************************************\n\n");
    
    printf("Um urso de pelúcia eletrônico tem um botão central. Cada vez que a criança aperta o\nbotão,o urso fala uma frase diferente dependendo da cor que acende na sua barriga. O\nExercício: Desenvolva a lógica do urso. O algoritmo deve receber uma palavra (texto)\ncom a cor que acendeu e exibir a fala do brinquedo: *Verde*: O urso diz: *Vamos\nbrincar lá fora!* *Amarelo*: O urso diz: *Estou ficando com soninho...* *Vermelho*:\nO urso diz: *Estou com fome, hora do lanche!* Caso seja outra cor: O urso\napenas pisca as luzes (Mensagem: *Cor desconhecida*). ");

char cor[20];

    printf("\nDigite a cor: ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0) {
        printf("\nO urso diz: Vamos brincar la fora!\n");
    }
    else if (strcmp(cor, "Amarelo") == 0) {
        printf("\nO urso diz: Estou ficando com soninho...\n");
    }
    else if (strcmp(cor, "Vermelho") == 0) {
        printf("\nO urso diz: Estou com fome, hora do lanche!\n");
    }
    else {
        printf("\nCor desconhecida\n");
    }

    return 0;


}

