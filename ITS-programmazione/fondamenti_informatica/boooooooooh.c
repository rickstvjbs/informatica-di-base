x

 #include <stdio.h>

 int main()
 {

    int scanner;
    while ((scanner = getchar()) != EOF){
        if (scanner == "\t"){
            printf("\\%d", scanner)
        }

    }

 }