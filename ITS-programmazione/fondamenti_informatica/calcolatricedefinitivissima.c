/*cambiando tutti gli 'a' e 'b' da int a float
 per supportare numeri con la virgola*/

#include <stdio.h>
int main() {
    int scelta;
    float a, b;

    do {
        printf("----- MENU -----\n");
        printf("Inserisci un numero: ");
                scanf("%f", &a);
        printf("0. Esci\n1. Somma\n2. Differenza\n3. Moltiplicazione\n4. Divisione\n");
        printf("Scegli la operazione da eseguire: ");
        scanf("%d", &scelta);
        printf("Inserisci un altro numero: \n");
        scanf("%f", &b);

        switch(scelta) {
            case 1:
                
                printf("Risultato: %f\n", a + b);
                break;
            case 2:
               
                printf("Risultato: %f\n", a - b);
                break;
            case 3:
                
                printf("Risultato: %f\n", a * b);
                break;
            case 4:
               
                if (b != 0)
                    printf("Risultato: %f\n", a / b);
                else
                    printf("Errore: divisione per zero!\n");
                break;
            case 0:
                printf("Uscita.\n");
                break;
            default:
                printf("Scelta non valida.\n");
        }
    } while (scelta != 0);

    return 0;
}   