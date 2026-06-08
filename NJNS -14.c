#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("\n************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781      *");
    printf("\n* Programa NJNS-JPA14 Tipo de Triângulo ...                *");
    printf("\n************************************************************\n\n");
    int L1,L2,L3;
    printf("digite o lado1 ");
    scanf("%d", &L1);
    printf("digite o lado2 ");
    scanf("%d", &L2);
    printf("digite o lado3 ");
    scanf("%d", &L3);
    if (L1==L2 && L2==L3 &&L1==L3){
    	printf("equilatero");
	}else if(L1==L2 || L1==L3 || L2==L3){
		printf("isosceles");
	}else{
		printf("escaleno");
	}
	
}
