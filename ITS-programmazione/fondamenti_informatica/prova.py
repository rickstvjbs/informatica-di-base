#include <stdio.h> 
int main()
{
    int N, numero_pari, step;
    numero_pari = (numero_pari % 2);

    printf("Inserisci N= "); 
    scanf("%d", &N);

    for (numero_pari = 0; numero_pari<=N; step = 2);{
        if (numero_pari % 2== 0); {
            numero_pari = numero_pari + numero_pari;
            printf("%d", &numero_pari);
        }
    }
    
    return 0;
}