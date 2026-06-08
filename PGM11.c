//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    
    for (i = 1; i < n; i++) {
        printf("%d + 1 = %d\n", i, i + 1);
    }


}
