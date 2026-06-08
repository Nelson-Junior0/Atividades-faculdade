//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
int idade;
float idDias;

printf("\n quala sua idade: ");
scanf("%d",&idade);

idDias=idade*365,25;

printf("sua idade em dias é:%.2f\n ",idDias);
}
