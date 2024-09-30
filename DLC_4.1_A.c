#include<stdio.h>
#include<math.h>
void main ()
{
    int A[12],B[12],C[24], i=0, j=0, holder;
    printf("Valores pares: VetA; Valores impares: VetB\n\n");
    while (i<12 || j<12)
    {
        printf("Digite um valor: ");
        scanf("%d", &holder);
        if ((holder%2)==0 || (holder%3)==0 && i<12)
        {
            A[i]=holder;
            i++;
        }
        else if (i>=12){printf("Memoria do vetor A cheia.\n");}
        if((holder%5)!=0 && j<12)
        {
            B[j]=holder;
            j++;
        }
        else if (j>=12){printf("Memoria do vetor B cheia.\n");}
    }
    printf ("\n\nVetor A:\n");
    for (i=0;i<12;i++)
    {
        printf("%d; ", A[i]);
    }printf("\n\nVetor B:\n");
    for (i=0;i<12;i++)
    {
        printf("%d; ", B[i]);
    }
    for (i=0;i<24;i++)
    {
        if (i<12)
        {
            C[i]=B[i];
        }
        else if(i<24)
        {
            C[i]=A[i-12];
        }
    }printf("\n\nVetor C:\n");
    for (i=0;i<24;i++)
        {
            printf("%d; ", C[i]);
        }
}