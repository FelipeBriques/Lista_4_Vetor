#include<stdio.h>
#include<math.h>
void main ()
{
  int A[20],B[20],C[20],i;
  for (i=0;i<20;i++)
  {
   printf("%d)Digite um valor para vetor A: ",i+1);
   scanf("%d",&A[i]);
  }
  printf(" \n\n");
  for (i=0;i<20;i++)
  {
   printf("%d Digite um valor para vetor B: ",i+1);
   scanf("%d",&B[i]);
  }
  for (i=0;i<20;i++)
  {
   C[i]=A[i]-B[i];
  }
  printf("\n\n%d) Os valores do vetor C eh:",i+1);
  for (i=0;i<20;i++)
      printf(" %d ",C[i]);
}
