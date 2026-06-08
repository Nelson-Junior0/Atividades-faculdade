//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
float area,raio;

printf("\n Informe o raio do círculo: ");
scanf("%f",&raio);

area=3.14159*pow(raio,2);

printf("area do circulo e:%.2f\n",area);
}
