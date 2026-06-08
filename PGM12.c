//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n, i;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &n);

    printf("\nTabuada do %d:\n", n);

    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }	
}
