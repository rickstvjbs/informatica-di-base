/* Write a program to copy its input to its output,
 repalcing each string of one or more blanks
 with single blanks */

 #include <stdio.h>

 int main(){
 int scanner, spazio = 0;
 while ((scanner = getchar()) != EOF){
   if (scanner == ' '){
        if (!spazio){
            putchar(scanner);
        }
         spazio = 1;
    }
       
    else{
        putchar(scanner);
        spazio = 0;

    } 

 }
}

