#include <stdio.h>

int main()
/*copia l'input dall'output*/

{


    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c= getchar();
    }


}