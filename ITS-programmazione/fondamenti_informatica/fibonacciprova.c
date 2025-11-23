#include <stdio.h>   
int main()
{

    enum {DIM=10};
    int array[DIM];
    array[0] = 1;
    array[1] = 2;

    int i;
    int numero = 1;
   
    printf("%d\n", numero);
 for (i=1; i<DIM; i++){
    array[i]= (array[i-1]+array[i-2]);
    printf("%d\n", array[i]);
 }


}