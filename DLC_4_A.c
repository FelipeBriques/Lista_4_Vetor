#include<stdio.h>
#include<math.h>
void main ()
{
  int vetor[10],i;
  for (i=0;i<10;i++)
  {
  printf("Digite um valor: ");
   scanf("%d",&vetor[i]);
  }
  printf("Os valores digitados sao:");
  for (i=0;i<10;i++)
  {
   printf("\nvalor %d eh: %d ",i+1,vetor[i]);
  }
}