/*Scrivi un programma che scrive il tuo input una volta per linea */
#include <stdio.h>

/* Print the input one word per line. */
int main() 
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') putchar('\n');
		else putchar(c);
	}
}