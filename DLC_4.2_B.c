#include<stdio.h>
void main(){ 
    int A[8], B[8], index[8], Wanted, i, j = 0;
    
    for (  i = 0 ; i < 8 ; i ++ ) {
        printf ( "Digite um numero: ");
        scanf("%d", &A[i]);
        B[i] = A[i] * 5;
    }
    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &Wanted);
    
    for( i= 0 ; i < 8 ; i ++){
        if(Wanted ==  B[i]){
                index[j] = i;
                j++;
            }
        }
        printf("Índices encontrados: "); 
        for(i = 0; i < j; i++) printf("%d ", index[i]);
    }