/*dato un array di n elementi
 calcola e stampa la somma di tutti gli elementi*/

#include <stdio.h>
int main()
{
    enum{DIM=10};
    int i;
    int array[DIM];
    int risultato_finale=0; /* è opportuno inizializzare a zeroper evitare risultati random*/
    array[0] = 1;
    
    

    for (i=0; i<DIM; i++){
        array[i] = i +1;
        risultato_finale+=array[i];
    }
    printf("La somma di tutti gli elementi è: %d\n", risultato_finale);
    
}