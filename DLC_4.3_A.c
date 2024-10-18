#include<stdio.h>
void main() {
    int A[20], B[20], i, j, aux, wanted, index[29];

    for (i = 0; i< 20; i++) {
        printf("Digite o valor: ");
        scanf("%d", &A[i]);
        B[i] = A[i] + 2;
    }
    for(i=0; i<20; i++) {
        for(j=i+1;j < 20; j++){
            if(B[i] >= B[j]) {
                aux = B[i];
                B[i] = B[j];
                B[j] = aux;
            }
        }
    }
    j = 0;
    printf("digite o valor que deseja encontrar: ");
    scanf("%d", &wanted);
    if(wanted >= B[9])
        for(i = 19; i>10; i--) {
            if(wanted == B[i]){
                index[j] = i;
                j++;
            }
        }

    if (wanted <= B[9]) {
        for(i = 10; i>=0; i--) {
            if(wanted == B[i]){
                index[j] = i;
                j++;
            }
        }
    }
    printf("Vetor B: ");
    for(i = 0; i < 20; i++){
        printf("%d - %d\n ",i , B[i]);
    }
    printf("\n\nIndex buscados: ");
    for (i=0; i<j; i++) {
        printf("%d ", index[i]);
    }
}
