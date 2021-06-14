#include <stdio.h>
#include "mabib.h"

void maFonction(int arg)
{
	printf("%d\n",fonctionCool(arg,arg));
}

int main(int argc, char **argv)
{
	printf("Quelle est la différence entre un pointeur C\n");
	printf("et un élève de Polytech-Sorbonne ?\n");

	maFonction(-2);

	return 0;
}
