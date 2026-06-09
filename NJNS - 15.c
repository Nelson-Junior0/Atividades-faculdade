#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA15 Quantas caixas cabem dentro do caminhão*");
    printf("\n**************************************************************\n\n");
    
    
    printf("\n Uma empresa de logística precisa calcular quantas caixas podem ser transportadas em um caminhão sem"
"\n ultrapassar o espaço disponível."
"\n O sistema deve receber as dimensões do caminhão e das caixas (altura, largura e comprimento) e calcular"
"\n quantas caixas cabem no interior do veículo."
"\n O programa deverá utilizar variáveis para armazenar os valores e, como teste, o aluno deve digitar os valores"
"\n fornecidos pelo professor para verificar o resultado do cálculo.");
    float comprimentoCaminhao;
    float larguraCaminhao;
    float alturaCaminhao;

    
    float comprimentoCaixa;
    float larguraCaixa;
    float alturaCaixa;
    
    printf("\n digite o comprimento do caminhão: ");
    scanf("%f", &comprimentoCaminhao);

	printf("\n digite a largura do caminhão: ");
    scanf("%f", &larguraCaminhao);
    
    printf("\n digite a altura do caminhão: ");
    scanf("%f", &alturaCaminhao);
    
    printf("\n digite o comprimento da caixa :");
    scanf("%f", &comprimentoCaixa);
    
    printf("\n digite a largura da caixa :");
    scanf("%f", &larguraCaixa);
    
    printf("\n digite o altura da caixa :");
    scanf("%f", &alturaCaixa);
    
    int caixasComprimento = comprimentoCaminhao / comprimentoCaixa;
    int caixasLargura = larguraCaminhao / larguraCaixa;
    int caixasAltura = alturaCaminhao / alturaCaixa;

    
    int totalCaixas = caixasComprimento * caixasLargura * caixasAltura;

    printf("\n Total de caixas que cabem no caminhao: %d\n", totalCaixas);

    return 0;
}
