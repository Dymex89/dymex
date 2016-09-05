#include "helper.hh"

Helper::Helper()
{
	printf("konstruktor\n");
}
	
void Helper::printscan()
{
	char text[100];
	printf("wpisz tekst\n");
	scanf("%99s", text);
	printf("wpisales tekst: %s\n", text);
}

void Helper::adding()
{
	int a, b;
	printf("podaj pierwsza liczbe\n");
	scanf("%d", &a);
	printf("podaj druga liczbe\n");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, a + b);
}

int Helper::getPrivateVal()
{
	return privateVal;
}

void Helper::setPrivateVal(int value)
{
	privateVal = value;
}
