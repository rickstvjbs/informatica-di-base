/*Scrivere un programma in C che:
Chiede all utente di inserire una sequenza di numeri interi (positivi, negativi o zero).
La sequenza termina quando l utente inserisce 0 (lo 0 non va considerato nei calcoli).
Alla fine il programma deve stampare:


quanti numeri sono stati inseriti
la somma dei numeri
la media (float)
il valore massimo e il minimo
quanti numeri sono pari e quanti sono dispari
*/
#include <stdio.h>
#define N 5

int main() {
    int v[N];
    float somma = 0;
    float media;
    int count = 0;
    int max;
    int min;
    int primo_valido = 1;  // Flag per il primo numero valido

    printf("Inserisci i numeri di cui vuoi calcolare la media (possono essere positivi o negativi): \n");

    for (int i = 0; i < N; i++) {
        printf("numero %d : ", i + 1);
        scanf("%d", &v[i]);

        if (v[i] == 0) {
            if (i == 0) {
                printf("Non è valido inserire 0 all'inizio\n");
                i--;
                continue;
            } else {
                break;  
            }
        }

        somma += v[i];
        count++;

        if (primo_valido) {
            max = v[i];
            min = v[i];
            primo_valido = 0;
        } else {
            if (v[i] > max) {
                max = v[i];
            }
            if (v[i] < min) {
                min = v[i];
            }
        }
    }

        int i;
        int pari=0;
        int dispari=0;
        media = somma / count;
        printf("media = %f\n", media);
        printf("Massimo: %d\nMinimo: %d\n", max, min);
        for (i=0; i<N; i++){
            printf("N. %d: %d\n", i, v[i]);
            if ((v[i]%2)==0){
                pari++;
            }
            else {
                dispari++;
            }
            printf("I pari sono in totale: %d\nI dispari sono in totale: %d\n", pari, dispari);
        }

    
    return 0;
}
