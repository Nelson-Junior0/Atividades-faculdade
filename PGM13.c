//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i;

    printf("Numeros pares de 1 a 50:\n");

   
    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
