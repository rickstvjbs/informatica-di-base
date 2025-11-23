/*stampa i numeri al contrario*/

#include <stdio.h>

int main()
{
    enum{DIM=10};
    int i;
    int array[DIM];
    
    // Inizializza l'array con valori da 1 a 10
    for (i = 0; i < DIM; i++) {
        array[i] = i + 1;
    }
    
    // Stampa al contrario
    for (i = DIM - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    
    return 0;
}
    
