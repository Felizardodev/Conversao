#include <stdio.h>

int main ()
{
	float reais, dolares, cambio;
	int repete;
	
	do
	{
		system ("cls");
		
        printf ("Entre com o valor em dolares: ");
		scanf ("%f", &dolares);
	
		reais = dolares * 2.50;
	
		printf ("%.2f dolares = %.2f reais\n", dolares, reais);
		
		printf ("Digite 1 para continuar ou 0 para sair: ");
		scanf ("%d", &repete);
		
	} while (repete != 0);
	
	return 0;
	
}
