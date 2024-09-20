#include<stdio.h>
#include<math.h>
void main ()
{
  int A[8],B[8],i;
  for (i=0;i<8;i++)
  {
  printf("Digite um valor: ");
   scanf("%d",&A[i]);
  }
  for (i=0;i<8;i++)
  {
   B[i]=A[i]*3;
  }
  printf("Os valores do vetor B eh:");
  for (i=0;i<8;i++)
      printf(" %d ",B[i]);
}