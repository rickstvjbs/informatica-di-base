/*somma tutti i numeri in posizione pari*/

#include <stdio.h>
#define DIM 10
int numeri_dispari;
int è_pari=0;
int totale;
int main()
{

    int i;
    int array[DIM];

    // Inizializza l'array con valori da 1 a 10
    for (i = 0; i < DIM; i++) {
        array[i] = i + 1;
    }
     totale=0;
     for (i = 0; i < DIM; i++){
        
        if((array[i]%2)==0){
          totale+=array[i];
        }
    }
    printf("La somma dei numeri pari è: %d\n\n",totale);
}