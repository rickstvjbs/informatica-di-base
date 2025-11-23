/*cambiando tutti gli 'a' e 'b' da int a float
 per supportare numeri con la virgola*/

#include <stdio.h>
int main() {
    int scelta;
    float a, b;

    do {
        printf("----- MENU -----\n");
        printf("0. Esci\n1. Somma\n2. Differenza\n3. Moltiplicazione\n4. Divisione\n");
        printf("Scegli: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1:
                printf("Inserisci due numeri: ");
                scanf("%f %f", &a, &b);
                printf("Risultato: %f\n", a + b);
                break;
            case 2:
                printf("Inserisci due numeri: ");
                scanf("%f %f", &a, &b);
                printf("Risultato: %f\n", a - b);
                break;
            case 3:
                printf("Inserisci due numeri: ");
                scanf("%f %f", &a, &b);
                printf("Risultato: %f\n", a * b);
                break;
            case 4:
                printf("Inserisci due numeri: ");
                scanf("%f %f", &a, &b);
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