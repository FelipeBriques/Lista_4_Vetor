#include<stdio.h>
#include<math.h>
void main ()
{
    float A[5], B[5];
    int i;
    for (i=0; i<5; i++) {
        printf("Digite um valor: ");
        scanf("%f",&A[i]);
        B[i] = ((9*A[i])+160)/(float)5;
    }
    printf("\n\nTemperatura em Celsius\n");
    for(i=0; i<5; i++) {
        printf("%.1f °C; ",A[i]);
    }
    printf("\n\nTemperatura em Fahrenheit\n");
    for (i=0; i<5; i++) {
        printf("%.1f °F; ", B[i]);
    }
}