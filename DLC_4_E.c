#include<stdio.h>
#include<math.h>
void main ()
{
  int A[15],B[15],C[30],i;
  printf("Valores do vetor A \n");
  for (i=0;i<15;i++)
  {
   printf("Digite um valor: ");
   scanf("%d",&A[i]);
  }
  printf("\n");
  printf("Valores vetor B:\n");
  for (i=0;i<15;i++)
  {
   printf("Digite um valor: ");
   scanf("%d",&B[i]);
  }
  for (i=0;i<30;i++)
  {
   if (i<15)
   {
    C[i]=A[i];
   }
   else
   {
   C[i]=B[i-15];
   }
  }
  printf("O valores do vetor C:\n");
  for(i=0;i<30;i++)
  {
   printf("%d, ", C[i]);
  }
}