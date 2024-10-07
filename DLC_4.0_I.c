#include<stdio.h>
#include<math.h>
void main ()
{
  float A[15],B[15];
  int i;
  printf("Valores do vetor A \n");
  for (i=0;i<15;i++)
  {
   printf("Digite um valor: ");
   scanf("%f",&A[i]);
  }
  for (i=0;i<15;i++)
  {
   if (((int)i%2)==0)
   {
    B[i]=(float)A[i]/2;
   }
   else
   {
    B[i]=A[i]*1.5;
   }
  }
  printf("Vetor B:");
  for (i=0;i<15;i++)
  {
   printf("%.2f\n", B[i]);
  }
}
