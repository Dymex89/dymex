#include "helper.h"

void printscan()
{
	char text[100];
	int liczba = 0;

	printf("wpisz tekst\n");
	scanf("%99s", text);
	printf("wpisz liczbe\n");
	scanf("%d", &liczba);
	printf("wpisales tekst: %s i liczbe: %d", text, liczba);
}

int dodawanie(int a, int b)
{
	return a+b;
}
