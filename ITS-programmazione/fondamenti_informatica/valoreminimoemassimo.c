/*trova e stampa il valore massimo e minimo*/
#include <stdio.h>

enum {DIM = 10};
float array[DIM];
int i;
float valore_massimo;
float valore_minimo;

int main()
{
    // Inizializza l'array
    for (i = 0; i < DIM; i++) {
        array[i] = i + 1;
    }
    
    // Inizializza massimo e minimo con il primo elemento
    valore_massimo = array[i];
    valore_minimo = array[i];
    
    // Trova massimo e minimo
    for (i = 0; i < DIM; i++) {
        if (array[i] < valore_minimo) {
            valore_minimo = array[i];
        }
        if (array[i] > valore_massimo) {
            valore_massimo = array[i];
        }
    }
    
    printf("il valore massimo è: %.0f\n", valore_massimo);
    printf("il valore minimo è: %.0f\n", valore_minimo);
    
    return 0;
}
