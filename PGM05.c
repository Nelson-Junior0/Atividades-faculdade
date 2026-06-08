//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
setlocale(LC_ALL,"portuguese");

    float TA,TE,VP;
	
	printf("insira o valor da taxa: ");
    scanf("%f",&TA);

    TE=0.8*TA;
    VP=TA+TE;

    printf("O valor a ser pago e: %.2f\n",VP);

}
