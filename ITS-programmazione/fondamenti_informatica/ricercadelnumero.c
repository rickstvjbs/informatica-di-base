/*chiedi un numero all'utente e verifica se èè presente nell'array*/
#include <stdio.h>
#define DIM 10


int main()
{
    int numero_da_cercare=0;
    int i;
    int array[DIM];
    array[i]=0;
    int trovato=0;
    printf("Scegli un numero da cercare nell'array: ");
    scanf("%d", &numero_da_cercare);
    
    for (i = 0; i < DIM; i++) {
        array[i] = i + 1;
    }
    for (i = 0; i < DIM; i++) {
     if(numero_da_cercare==array[i])
        {
            trovato=1;
            numero_da_cercare=array[i];
            break;
        }
    }    
        if(trovato)
        {
            printf("Il numero %d è presente nell'array\n", numero_da_cercare);
        } else
        {
            printf("Il numero %d non è presente nell'array\n",numero_da_cercare);
        }
    }
