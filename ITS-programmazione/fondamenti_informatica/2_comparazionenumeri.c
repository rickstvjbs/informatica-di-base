#include <stdio.h>

int main() {
    int numero_1;
    int numero_2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero_1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero_2);

    if (numero_1 == numero_2) {
        printf("I due numeri sono uguali\n");
    } else if (numero_1 > numero_2) {
        printf("Il primo numero è più grande\n");
    } else {
        printf("Il secondo numero è più grande\n");
    }

    return 0;
}                                   