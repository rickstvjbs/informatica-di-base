/*calcola la media dei valori in un array*/
#include <stdio.h>
enum {DIM = 10};
float array[DIM];
int i;
float risultato_finale;
float media;


int main()
{
     risultato_finale=0.0;
     for (i=0; i<DIM; i++){
        array[i] = i +1;
        risultato_finale+=array[i];
        media = risultato_finale/(i+1);
    }
        printf("La media è: %f\n", media);
}

