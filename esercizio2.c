/*Scrivere un programma in C che gestisce temperature giornaliere.
Chiedere all’utente il numero di giorni N (1 <= N <= 31).
Dichiarare un array di float di dimensione N.
Leggere da tastiera le temperature dei N giorni.
Implementare le seguenti funzioni:


float calcola_media(float v[], int n);
float trova_massimo(float v[], int n);
float trova_minimo(float v[], int n);
int conta_maggiori_di_media(float v[], int n);
*/
#include <stdio.h>

float calcola_media(float temperatura[], int giorni) {
    float somma = 0;
    for (int i = 0; i < giorni; i++) {
        somma += temperatura[i];
    }
    return somma / giorni;
}

float trova_massimo(float v[], int n) {
    float max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

float trova_minimo(float v[], int n) {
    float min = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}


int conta_maggiori_di_media(float v[], int n)
{
	
	int media=calcola_media(v, n);
	int conta_media=0;
	for (int i=0; i<n; i++){
		if (v[i]>media){
			conta_media+=1;
		}
	}
	return conta_media;
}

	
	





int main() {
    int giorni = 0;
    int i;
    float temperatura;
    printf("Scegli il numero di giorni: ");
    scanf("%d", &giorni);
    float clima[giorni];
    for (i = 0; i < giorni; i++) {
        printf("La temperatura del giorno %d è: ", i + 1);
        scanf("%f", &temperatura);
        clima[i] = temperatura;
    }
    for (i = 0; i < giorni; i++) {
        printf("%f ", clima[i]);
    }
    printf("\nla media è: %f\n", calcola_media(clima, giorni));
    printf("\nIl valore massimo è: %f\n", trova_massimo(clima, giorni));
    printf("\nIl valore minimo è: %f\n", trova_minimo(clima, giorni));
    printf("\nIl numero di giorni con la temperatura sopra la media è:%d\n", conta_maggiori_di_media(clima, giorni));
    return 0;
}

