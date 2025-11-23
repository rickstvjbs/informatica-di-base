/* scriviamo una funzione void incrementa*/
#include <stdio.h>

int incrementazione(numero, k)
{
    printf("Scegli un numero da incrementare: ");
    scanf("%d", &numero);
    printf("Scegli di quanto lo vuoi incrementare: ");
    scanf("%d",&k);
    numero=numero+k;
    printf("Il nuovo valore è:%d", numero);
    
    return 0;

}