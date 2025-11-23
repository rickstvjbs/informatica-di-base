#include <stdio.h>
int main()
{
    int voto = 0;
    printf("Inserisci un voto: ");
    scanf("%d", voto);

    while(voto<0 || voto > 10){
        printf("Voto non valido, isnerisci un voto tra 0 e 10: ");
        scanf("%d", voto);

    }

    if (voto >= 6){
        printf("Sei promosso");   
    } else {
        printf("Bocciato");
    }


}