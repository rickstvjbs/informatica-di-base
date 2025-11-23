/* somma i primi numeri apri fino a N dove N è un valore scelto da te*/
#include <stdio.h> 
int main()
{

int N, numero_pari, step;
step=2;

numero_pari = (numero_pari % 2);

printf("Inserisci N= "); 
scanf("%d", &N);

for (numero_pari = 0; numero_pari<=N; step) {
    if (numero_pari % 2== 0) {
    numero_pari = numero_pari + step;
    printf("%d", &numero_pari);

}
}
    
    

    
return 0;
}
