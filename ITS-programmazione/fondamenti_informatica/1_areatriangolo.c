#include <stdio.h>

int main() {
    int base;
    int altezza;
    int area;

    // Leggi prima i valori da tastiera
    printf("Inserisci la base: ");
    scanf("%d", &base);

    printf("Inserisci l'altezza: ");
    scanf("%d", &altezza);

    // Calcola l'area del triangolo
    area = (base * altezza) / 2;

    // Stampa i risultati
    printf("L'area è: %d\n", area);
    
    return 0;
}