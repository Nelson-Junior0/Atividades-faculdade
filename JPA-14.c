#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781      *");
    printf("\n* Programa NJNS-JPA14 Tipo de Triângulo ...                *");
    printf("\n************************************************************");
    
printf("\n Uma fábrica de estruturas metálicas produz suportes em formato de triângulo para eventos e construções."
"\n Antes da fabricação, o sistema precisa verificar o tipo do triângulo com base nas medidas informadas pelo"
"\n operador."
"\n O programa deve receber os três lados do triângulo e informar se ele é:"
"\n Equilátero ? (todos os lados iguais);"
"\n Isósceles ? (dois lados iguais);"
"\n Escaleno ? (todos os lados diferentes);");
	
	
	
	int L1,L2,L3;
    printf("\n digite o lado1 ");
    scanf("%d", &L1);
    printf("\n digite o lado2 ");
    scanf("%d", &L2);
    printf("\n digite o lado3 ");
    scanf("%d", &L3);
    if (L1==L2 && L2==L3 &&L1==L3){
    	printf("equilatero");
	}else if(L1==L2 || L1==L3 || L2==L3){
		printf("isosceles");
	}else{
		printf("escaleno");
	}
	
}
