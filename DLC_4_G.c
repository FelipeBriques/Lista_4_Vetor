#include<stdio.h>
#include<math.h>
void main()
{
   int A[20], B[20], i;
   for (i=0;i<20;i++)
   {
       printf("VALOR: ");
       scanf("%d",&A[i]);
   }
   for (i=0;i<20;i++)
   {
       B[19-i]=A[i];
   }
   printf("MATRIZ A:");
   for (i=0;i<20;i++)
   {
       printf("%d; ", A[i]);
   }
   printf("\nMATRIZ B:");
   for (i=0;i<20;i++)
   {
       printf("%d; ", B[i]);
   }
}
