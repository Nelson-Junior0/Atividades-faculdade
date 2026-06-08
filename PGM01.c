#include <stdio.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL,"portuguese");
    float din;//utilizei float porque contem numeros fracionários
    
    printf("Quanto de dinheiro voce tem? ");
    scanf("%f", &din);
	
	if (din>50)
	{
		printf("Amigão vá ao cinema, você está RICO");
	
	}else{
		printf("Amigão fique em casa assistindo FAUSTÃO");
	}
	
	
	
	
	
	
	
	}   
