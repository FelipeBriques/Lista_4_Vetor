#include<stdio.h>
void main() {
    int A[20], B[20], i, j = 0, aux, wanted, index[20];

    while (j < 20) {
        printf("Digite o valor: ");
        scanf("%d", &aux);
        if(aux < 0) {
            A[j] = aux;
            B[j] = (A[j] * -1);
            j++;
        }
    }
    for(i=0; i<20; i++) {
        for(j=i+1;j < 20; j++){
            if(B[i] <= B[j]) {
                aux = B[i];
                B[i] = B[j];
                B[j] = aux;
            }
        }
    }
    printf("Vetor B: ");
    for(i = 0; i < 20; i++){
        printf("%d - %d\n ",i , B[i]);
    }
}
