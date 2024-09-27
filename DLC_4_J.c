#include<stdio.h>
#include<math.h>
void main ()
{
    int A[6],B[6],C[12], i=0, j=0, holder;
    printf("Valores pares: VetA; Valores impares: VetB\n\n");
    while (i<6 || j<6)
    {
        printf("Digite um valor: ");
        scanf("%d", &holder);
        if ((holder%2)==0 && i<6)
        {
            A[i]=holder;
            i++;
        }
        else if (i>=6){printf("Memoria do vetor A cheia.\n");}
        if((holder%2)!=0 && j<6)
        {
            B[j]=holder;
            j++;
        }
        else if (j>=6){printf("Memoria do vetor B cheia.\n");}
    }
    printf ("\n\nVetor A:\n");
    for (i=0;i<6;i++)
    {
        printf("%d; ", A[i]);
    }printf("\n\nVetor B:\n");
    for (i=0;i<6;i++)
    {
        printf("%d; ", B[i]);
    }
    for (i=0;i<12;i++)
    {
        if (i<6)
        {
            C[i]=B[i];
        }
        else if(i<12)
        {
            C[i]=A[i-6];
        }
    }printf("\n\nVetor C:\n");
    for (i=0;i<12;i++)
        {
            printf("%d; ", C[i]);
        }
}
