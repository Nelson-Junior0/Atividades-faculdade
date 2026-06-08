//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
setlocale(LC_ALL,"portuguese");

    float Media, km, consumo;

    printf("Digite a distancia percorrida do automovel: ");
    scanf("%f", &km);

    printf("Digite o total de combustivel gasto: ");
    scanf("%f", &consumo);

    Media = km / consumo;

    printf("Consumo medio total: %.2f\n", Media);

}
