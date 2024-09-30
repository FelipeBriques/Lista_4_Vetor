#include<stdio.h>
#include<math.h>
void main ()
{
    int A[15], B[15], j, i;
    for (i=0; i<15; i++) {
        printf("Digite um valor: ");
        scanf("%d",&A[i]);
        B[i] = A[i];
         for (j=A[i]-1; j>0; j--) {
        B[i]*=j;
     }
    }
    printf("\n\nVetor B:\n");
    for (i=0; i<15; i++) {
        printf("%d; ", B[i]);
    }
}