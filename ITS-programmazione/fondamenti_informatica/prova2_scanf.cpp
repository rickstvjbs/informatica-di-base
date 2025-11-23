#include <stdio.h>

int main() {
    int voto; // dichiarazione della variabile

    // assegnazione del valore, leggiamo un intero da tastiera
    scanf("%d", &voto); 

    // confronto corretto con '=='
    if (voto == 6) { 
        printf("Promosso!\n");
    } else {
        printf("Bocciato\n");
    }

    return 0;
}

