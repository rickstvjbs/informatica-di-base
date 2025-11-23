/*conta numeri pari o dispari*/

#include <stdio.h>
#define DIM 151
int numeri_dispari;
int numeri_pari;
int main()
{

    int i;
    int array[DIM];

    // Inizializza l'array con valori da 1 a 10
    for (i = 0; i < DIM; i++) {
        array[i] = i + 1;
    }

     for (i = 0; i < DIM; i++){
        if((array[i]%2)==1){
            numeri_dispari++;
        }
    }
        for (i = 0; i < DIM; i++){
            if((array[i]%2)==0){
            numeri_pari++;
        }
    }
     printf("Ci sono %d numeri dispari e %d numeri pari\n", numeri_dispari, numeri_pari);
}