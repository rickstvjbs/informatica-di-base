#include <stdio.h>
int main()
{
int scelta;
int a, b;
int somma, differenza, moltiplicazione, divisione;
do {
    printf("----- MENU' -----\n");
    printf("...........\n0. Esci\n1. Somma\n2. Differenza\n3. Divisione\n4. Moltiplicazione ..........\n\n\n Scegli una operazione:\n ");
    scanf("%d", &scelta);
    if(scelta > 4 || scelta < 0){
        printf("Scelta non disponibile, riselezionala\n");
    }

    if(scelta == 1){
        
        printf("Inserisci i numeri per la somma: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        somma = a+b;
        printf("La somma è: %d\n\n\n", somma);

    } else if(scelta == 2){
        printf("Inserisci i numeri della differenza: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        differenza = a-b;
        printf("La differenza è: %d\n\n\n", differenza);
    }

    if(scelta == 3){
        
        printf("Inserisci i numeri per la divisione: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        somma = a/b;
        printf("La divisione è: %d\n\n\n", divisione);

    } else if(scelta == 4){
        printf("Inserisci i numeri della moltiplicazione: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        moltiplicazione = a*b;
        printf("La moltiplicazione è è: %d\n\n\n", moltiplicazione);
    }

} while(scelta !=0);
    return 0;
}