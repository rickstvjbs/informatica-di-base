#include <stdio.h>

int main()
{
    int i;
    int somma = 0;  // inizializza la somma a 0

    for (i = 1; i <= 100; i = i + 1) {
        somma = somma + i;
        printf("Loop n. %d = %d\n", i, somma);
    }

    return 0;
}