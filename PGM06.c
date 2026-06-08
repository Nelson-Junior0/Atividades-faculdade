//Matricula:0027781
//Aluno: Nelson Júnior Neves dos Santos


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.H>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int TF,TP;
	float PF,PP,TA;
	
	printf("digite o total de faltas: ");
	scanf("%d", &TF);
	
	printf("digita o total de presença: ");
	scanf("%d", &TP);
	
	TA = TF+TP;
	 if (TA > 0){
	PF = ((float)TF/TA)*100;
	PP = ((float)TP/TA)*100;


	printf("\n percentual de faltas foi de:%f",PF);
	printf("\n percentual de presença foi de: %f",PP);

}else{printf("\n nenhuma aula reistrada.\n");
}
	

}
