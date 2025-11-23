/*Write a program to write a histogram of the length of the words in its input. 
Is easy to draaw the histogram in horizontal,
 a vertical displaying is more challenging */
#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXLENGTH 20

int main() {
    int scanner, length = 0, state = OUT;
    int wordlength[MAXLENGTH] = {0};  // Inizializza a zero

    while ((scanner = getchar()) != EOF) {
        if (scanner == ' ' || scanner == '\n' || scanner == '\t') {
            if (length > 0 && length < MAXLENGTH) {
                wordlength[length]++;
            }
            length = 0;
            state = OUT;
        } else {
            if (state == OUT) {
                state = IN;
            }
            length++;
        }
    }

    printf("--- Word Length Histogram ---\n");
    for (int i = 1; i < MAXLENGTH; i++) {
        printf("%2d: ", i);
        for (int j = 0; j < wordlength[i]; j++) {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}   