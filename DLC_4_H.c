#include<stdio.h>
#include<math.h>
void main()
{
    int A[5],B[5],C[5],D[15],i;
    for (i=0;i<5;i++)
   {
       printf("VALOR MATRIZ A: ");
       scanf("%d",&A[i]);
   }
   printf("\n");
   for (i=0;i<5;i++)
   {
       printf("VALOR MATRIZ B: ");
       scanf("%d",&B[i]);
   }
   printf("\n");
   for (i=0;i<5;i++)
   {
       printf("VALOR MATRIZ C: ");
       scanf("%d",&C[i]);
   }
   for (i=0;i<15;i++)
   {
       if (i<5)
       {
           D[i]=A[i];
       }
       else if (i<10)
       {
           D[i]=B[i-5];
       }
       else
       {
           D[i]=C[i-10];
       }
   }
   printf("\nMATRIZ D: \n");
   for (i=0;i<15;i++)
   {
       printf("%d; ",D[i]);
   }
}
