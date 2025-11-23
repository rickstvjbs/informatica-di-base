#include <stdio.h>

float fahrtocelsius(float fahr) {
    return (5.0/9.0) * (fahr - 32.0);
}

int main() {
    float fahr, celsius;
    printf("Select the fahr to convert in celsius: ");
    scanf("%f", &fahr); // Use %f and &fahr
    celsius = fahrtocelsius(fahr);
    printf("%.1f fahr are equal to %.1f celsius\n", fahr, celsius); // Use %f
    return 0;
}   