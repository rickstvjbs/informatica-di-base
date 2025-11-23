/*restituisce il numero di caratteri appena incontra l'EOF*/

#include <stdio.h> 

int main()
{

    long nc;

    nc = 0;
    while (getchar() != EOF) {

        ++nc;  /*nc + 1*/

    }
    printf("%1d\n", nc);

}