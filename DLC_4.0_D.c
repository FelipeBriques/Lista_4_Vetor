#include<stdio.h>
#include<math.h>
void main ()
{
  int A[15],B[15],i;
  for (i=0;i<15;i++)
  {
  printf("Digite um valor: ");
   scanf("%d",&A[i]);
  }
  for (i=0;i<15;i++)
  {
   B[i]=pow(A[i],2);
  }
  printf("Os valores do vetor B eh:");
  for (i=0;i<15;i++)
      printf("%d; ",B[i]);
}
