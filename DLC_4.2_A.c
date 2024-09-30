#include<stdio.h>
#include<math.h>
void main ()
{
    int A[12], j, i, aux;
    for (i=0; i<12; i++) {
        printf("Digite um valor: ");
        scanf("%d",&A[i]);
    }
    for(i=0; i<11; i++) {
        for (j=i+1; j<12; j++) {
            if (A[i]<A[j]) {
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
            }
        }
    }
    printf("\n\nEm ordem decrescente: \n");
    for(i=0; i<12; i++) {
        printf("%d; ", A[i]);
    }
}