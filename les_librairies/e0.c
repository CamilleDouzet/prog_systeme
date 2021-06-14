#include <stdio.h>

void maFonction(int arg)
{
	printf("%d\n",arg+2);
}

int main(int argc, char **argv)
{
	printf("Quelle est la différence entre un pointeur en C\n");
	printf("et un élève de Polytech-Sorbonne ?\n");

	maFonction(-2);

	return 0;
}
