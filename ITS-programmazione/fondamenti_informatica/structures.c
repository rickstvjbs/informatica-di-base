#include <stdio.h>

typedef struct {
    char nome[20];
    char cognome[20];
    int eta;
} DatiPersona;

typedef struct {
    DatiPersona dati;
} Persona;

int main() {
    int n;

    printf("Quante persone vuoi inserire? ");
    scanf("%d", &n);

    Persona persone[n];  // 👈 array di struct Persona (richiede C99 o superiore)

    for (int i = 0; i < n; i++) {
        printf("\n--- Persona %d ---\n", i + 1);

        printf("Inserisci il nome: ");
        scanf("%19s", persone[i].dati.nome);

        printf("Inserisci il cognome: ");
        scanf("%19s", persone[i].dati.cognome);

        printf("Inserisci l'eta': ");
        scanf("%d", &persone[i].dati.eta);
    }

    printf("\n===== Elenco persone inserite =====\n");
    for (int i = 0; i < n; i++) {
        printf("%d) %s %s, %d anni\n",
               i + 1,
               persone[i].dati.nome,
               persone[i].dati.cognome,
               persone[i].dati.eta);
    }

    return 0;
}
