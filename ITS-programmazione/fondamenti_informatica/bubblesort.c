#include <stdio.h>

int main()
{
 enum {dimensione=10};
 int i=0;
 int j=0;
 int lista[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};
 for (i=0; i<dimensione-1; i++){
   for (j=0; j<dimensione-1; j++){     /*si crea una variabile j perchè i serve per scorrere gli indici e j compara i deu numeri*/
    if (lista[j]>lista[j+1]){
        int temp = lista[j];
        lista[j]=lista[j+1];
        lista[j+1] = temp; /*si usa la variabile temporanea perchè bisogna avere un psoto dove immmagazzinare i valori prima di swapparli*/
            }

        }

    }
    for(i=0; i<dimensione; i++)
        printf("%d\n",lista[i]);
}


