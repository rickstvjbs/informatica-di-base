/*Supponiamo di avere due array di 10 elementi dove 
viene richiesto all'utente di inserire valori dentro le celle
e di dare l'output a un terzo array che contiene la somma dei due */
#include <stdio.h>
enum{dimensione = 10}; /*è convenzionale creare una varaibile di dimensione del vettore per semplicità*/
int i;
int array1[dimensione];
int array2[dimensione];
int array3[dimensione];

int main()
#
{

    for (i=0; i<=9; i++){
        printf("Inserisci il numero a indice %d dell'array 1: ", i + 1);
        scanf("%d", &array1[i]);
        printf("\n");
    }

    for (i=0; i<=9; i++){
        printf("Inserisci il numero a indice %d dell'array 2: ", i + 1);
        scanf("%d", &array2[i]);
        printf("\n");
    }
    for (i=0; i<=9; i++){
        array3[i] = array1[i] + array2[i];
        printf("Elemento a indice %d dell'array 3: %d\n",i, array3[i]);

    }
}