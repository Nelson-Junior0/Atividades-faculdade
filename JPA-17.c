#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-17 O Sensor do Parque Temático           *");
    printf("\n**************************************************************");
    
    printf(	
"\n Você foi contratado para programar o sistema de segurança de uma nova montanha-russa em um parque de"
"\n diversões."
"\n Por motivos de segurança, existe uma altura mínima de 140 centímetros (1,40m) para poder"
"\n entrar no brinquedo."
"\n Na entrada, há um sensor digital que mede a altura da criança em centímetros. O seu trabalho é criar o"
"\n algoritmo que lê essa altura e decide se o painel vai acender a luz verde (liberado) ou a luz vermelha"
"\n (barrado).");
    
    int altura;

    printf("\n Digite a altura da crianca (em cm): ");
    scanf("%d", &altura);

    if (altura >= 140) {
        printf("Luz verde: LIBERADO.\n");
    } else {
        printf("Luz vermelha: BARRADO.\n");
    }

    return 0;
}
