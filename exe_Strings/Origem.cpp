#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 150

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int pos, tams2, tams1, cont =0;
	char string1[TAM], string2[TAM], final[TAM * 2];
	//pedro,sena,2-> pesenadro

	printf("Digite uma palavra:");
	gets_s(string1);

	printf("Digite outra palavra:");
	gets_s(string2);

	printf("Digite uma posição:");
	scanf_s("%d", &pos);

	for (int i = 0; i < pos; i++)
	{//COLOCA O COMEÇO DA STRING 1
		final[i] = string1[i];
	}
	tams2 = strlen(string2);
	tams1 = strlen(string1);
	cont = 0;
	for (int i = pos; i < (tams2 + pos); i++)
	{//COLOCA A SEGUNDA STRING APÓS

		final[i] = string2[cont++];
	}
	
	for (int i = pos+cont; i < tams2 + tams1; i++)
	{//COLOCA O RESTO DA STRING 1
		final[i] = string1[pos++];
	}
	
	final[tams1+tams2] = '\0';

	//IMPRIME A MISTURA
	printf("Nome misturado: %s", final);


	return 0;
}