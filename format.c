#include <stdio.h>

int main()
{
	int Zahl = 23;
	float floatzahl = 2.55;
	char character = 'A';
	char string[] = "Hello, World";

	printf("Ganzzahl: %d\n", Zahl);
	printf("Gleitkommazahl: %.2f\n", floatzahl);
	printf("Character: %c\n", character);
	printf("String: %s\n", string);

	return 0;
}
