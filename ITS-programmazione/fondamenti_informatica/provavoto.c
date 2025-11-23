/*scrivi un programma con il while: se il voto è fuori dall'intervallo 0- 10 fai reinserire un voto ompreso tra 0 e 10*/

#include <stdio.h>

int main()
{
    int voto;
    scanf("Inserisci un voto: %d", voto);
        if (voto < 0 || voto > 10){
            scanf("Voto non valido, inserisci un voto tra 0 e 10: %d", voto);
        }
        else if (voto >= 6){
            printf("Promosso! voto = %d", voto);
        }
        else if (voto <= 5){
            printf("Bocciato");

        }
}

    
