/*Creare un programma che legga una stringa dall'utente e poi esegua alcune operazioni basilari su di essa, 
come contare caratteri, invertire e controllare una condizione semplice. 
Questo esercizio introduce la gestione delle stringhe in C, che sono array di caratteri terminati da '\0'.*/




#include <stdio.h> 
#include <string.h> 
#define dim 15
/* Prototipi delle funzioni (per evitare avvisi di dichiarazione implicita)*/


void leggiStringa(char str[], int dim){
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}
void invertiStringa(char string[])
{
    leggiStringa(string, dim);
    int len = strlen(string);
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");
}   
int main() {
    char str[dim];
    invertiStringa(str);
    return 0;
}   

