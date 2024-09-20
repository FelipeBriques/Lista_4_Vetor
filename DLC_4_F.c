#include<stdio.h>
#include<math.h>
void main ()
{
  int A[20],B[30],C[50],i;
  printf("Valores do vetor A \n");
  for (i=0;i<20;i++)
  {
   printf("Digite um valor: ");
   scanf("%d",&A[i]);
  }
  
  printf("\n");
  printf("Valores vetor B:\n");
  
  for (i=0;i<30;i++)
  {
   printf("Digite um valor: ");
   scanf("%d",&B[i]);
  }
 
  for (i=0;i<50;i++)
  {
   if (i<20)
   {
    C[i]=A[i];
   }
   else
   {
   C[i]=B[i-30];
   }
  }
  
  printf("O valores do vetor C:\n");
  
  for(i=0;i<50;i++)
  {
   printf("%d, ", C[i]);
  }
}