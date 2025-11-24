/*Esercizio 3 – Archivio studenti con struct e menu
Creare un programma in C per la gestione di studenti e voti.
Ogni studente è descritto da:
matricola (int)
voto (int compreso tra 18 e 30)
cfu (int)
Definire una struct Studente con i campi indicati.
Dichiarare un array di massimo 50 studenti.
Il programma deve mostrare un menu ripetuto fino alla scelta di uscita:


1) Inserisci un nuovo studente
2) Stampa tutti gli studenti
3) Calcola e stampa la media dei voti
4) Cerca studente per matricola
5) Trova e stampa lo studente con il voto massimo
0) Esci

Implementare almeno le seguenti funzioni:


int inserisci_studente(struct Studente v[], int n);
void stampa_studenti(struct Studente v[], int n);
float media_voti(struct Studente v[], int n);
int cerca_per_matricola(struct Studente v[], int n, int matricola);
int indice_voto_massimo(struct Studente v[], int n);

inserisci_studente inserisce uno studente e restituisce il nuovo 

FATTO CON L'AUSILIO DI AI PER QUANTO RIGUARDA LE STRUCT

*/
#include <stdio.h>

#define MAX_STUDENTI 50

struct Studente {
    int matricola;
    int voto;
    int cfu;
};

int inserisci_studente(struct Studente v[], int n);
void stampa_studenti(struct Studente v[], int n);
float media_voti(struct Studente v[], int n);
int cerca_per_matricola(struct Studente v[], int n, int matricola);
int indice_voto_massimo(struct Studente v[], int n);

int main() {
    struct Studente studenti[MAX_STUDENTI];
    int n = 0;
    int scelta;

    do {
        printf("\nMenu:\n");
        printf("1) Inserisci un nuovo studente\n");
        printf("2) Stampa tutti gli studenti\n");
        printf("3) Calcola e stampa la media dei voti\n");
        printf("4) Cerca studente per matricola\n");
        printf("5) Trova e stampa lo studente con il voto massimo\n");
        printf("0) Esci\n");
        printf("Scelta: ");

        if (scanf("%d", &scelta) != 1) {
            printf("Input non valido.\n");
            while (getchar() != '\n');
            scelta = -1;
            continue;
        }

        switch (scelta) {
            case 1:
                if (n < MAX_STUDENTI) {
                    n = inserisci_studente(studenti, n);
                } else {
                    printf("Array pieno, non puoi inserire altri studenti.\n");
                }
                break;

            case 2:
                stampa_studenti(studenti, n);
                break;

            case 3:
                if (n > 0) {
                    printf("Media voti: %.2f\n", media_voti(studenti, n));
                } else {
                    printf("Nessuno studente registrato.\n");
                }
                break;

            case 4: {
                int matricola;
                printf("Inserisci matricola da cercare: ");
                if (scanf("%d", &matricola) != 1) {
                    printf("Input non valido.\n");
                    while (getchar() != '\n');
                    break;
                }

                int indice = cerca_per_matricola(studenti, n, matricola);
                if (indice < n) {
                    printf("Studente trovato: Matricola %d, Voto %d, CFU %d\n",
                           studenti[indice].matricola,
                           studenti[indice].voto,
                           studenti[indice].cfu);
                } else {
                    printf("Studente non trovato.\n");
                }
                break;
            }

            case 5:
                if (n > 0) {
                    int indice = indice_voto_massimo(studenti, n);
                    printf("Studente con voto massimo: Matricola %d, Voto %d, CFU %d\n",
                           studenti[indice].matricola,
                           studenti[indice].voto,
                           studenti[indice].cfu);
                } else {
                    printf("Nessuno studente registrato.\n");
                }
                break;

            case 0:
                printf("Uscita dal programma.\n");
                break;

            default:
                printf("Scelta non valida.\n");
        }

    } while (scelta != 0);

    return 0;
}


int inserisci_studente(struct Studente v[], int n) {

    printf("Inserisci matricola: ");
    while (scanf("%d", &v[n].matricola) != 1) {
        printf("Matricola non valida. Inserisci un numero: ");
        while (getchar() != '\n');
    }

    do {
        printf("Inserisci voto (18-30): ");
        if (scanf("%d", &v[n].voto) != 1) {
            printf("Input non valido. Inserisci un numero.\n");
            while (getchar() != '\n');
            continue;
        }
        if (v[n].voto < 18 || v[n].voto > 30)
            printf("Voto non valido. Deve essere tra 18 e 30.\n");

    } while (v[n].voto < 18 || v[n].voto > 30);

    printf("Inserisci CFU: ");
    while (scanf("%d", &v[n].cfu) != 1) {
        printf("CFU non validi. Inserisci un numero: ");
        while (getchar() != '\n');
    }

    return n + 1;
}


void stampa_studenti(struct Studente v[], int n) {
    if (n == 0) {
        printf("Nessuno studente registrato.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Studente %d: Matricola %d, Voto %d, CFU %d\n",
               i + 1, v[i].matricola, v[i].voto, v[i].cfu);
    }
}


float media_voti(struct Studente v[], int n) {
    int somma = 0;
    for (int i = 0; i < n; i++) {
        somma += v[i].voto;
    }
    return (float)somma / n;
}


int cerca_per_matricola(struct Studente v[], int n, int matricola) {
    for (int i = 0; i < n; i++) {
        if (v[i].matricola == matricola) {
            return i;
        }
    }
    return n;   // indica "non trovato" SENZA usare -1
}


int indice_voto_massimo(struct Studente v[], int n) {
    int max_indice = 0;
    for (int i = 1; i < n; i++) {
        if (v[i].voto > v[max_indice].voto) {
            max_indice = i;
        }
    }
    return max_indice;
}
