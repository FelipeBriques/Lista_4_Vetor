#include<stdio.h>
void main() {
    int A[15], B[15],i,j, aux;

    for (i=0; i<15; i++) {
        printf("Digite valor: ");
        scanf("%d",&A[i]);
        B[i]=A[i]/2;
    }
    for(i=0; i<15; i++) {
        for (j=i+1; j<15; j++) {
            if (A[i]<A[j]) {
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
            }
        }
    }
    printf("\n\nVetor A em ordem decrescente: \n");
    for(i=0; i<15; i++) {
        printf("%d; ", A[i]);
    }
    for(i=0; i<15; i++) {
        for (j=i+1; j<15; j++) {
            if (B[i]>B[j]) {
                aux=B[i];
                B[i]=B[j];
                B[j]=aux;
            }
        }
    }
    printf("\n\nVetor A em ordem crescente: \n");
    for(i=0; i<15; i++) {
        printf("%d; ", B[i]);
    }
}