#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-25 Notas e aprovação                     *");
    printf("\n**************************************************************");
 
 printf(
"\n Uma escola deseja automatizar a verificação das notas dos alunos."
"\n O sistema deve receber a média final do estudante e informar se ele foi aprovado, em recuperação ou"
"\n reprovado."); 

 float n1, n2, n3, n4, media;

    printf("\n Digite a nota do 1º bimestre: ");
    scanf("%f", &n1);

    printf("\n Digite a nota do 2º bimestre: ");
    scanf("%f", &n2);

    printf("\n Digite a nota do 3º bimestre: ");
    scanf("%f", &n3);

    printf("\n Digite a nota do 4º bimestre: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Media final: %.2f\n", media);

    if (media >= 7) {
        printf("Aluno APROVADO.\n");
    } else {
        printf("Aluno REPROVADO.\n");
    }

    return 0;
}
