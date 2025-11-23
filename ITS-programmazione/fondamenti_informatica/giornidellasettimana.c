/*scrivi un programma con uno switch case 
dove la variabile char giiorno pèuò assumere valori diversi.
Se stampiamo L chiede il lunedì, M martedì
IMPORTANTE: LE LETTERE VANNO MESSE TRA SINGOLI APICI
*/


#include <stdio.h>
void main()
{
 char giorno;
 printf("Scrivi la iniziale del giorno della settimana in maiuscolo: ");
 giorno=getchar();

 switch(giorno)
{
    case 'L':
        printf("Lunedì\n");
        break;
                
    case 'M':
        
        printf("Martedì\n");
        break;
        
    case 'G':
      
        printf("Giovedì\n");
        break;
        
    case 'V':
       
        printf("Venerdì\n");
        break;
        
    case 'S':    
    
        printf("Sabato\n");
        break;
        
    case 'D':    
     
        printf("Domenica\n");
        break;
        
    default: 
    printf("Giorno non disponibile");




 }
}
