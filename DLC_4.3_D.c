#include<stdio.h>
void main() {
    int A[15], B[15], C[15], D[15], i, j, aux, wanted, index[29];

    for (i = 0; i< 15; i++) {
        printf("Digite o valor: ");
        scanf("%d", &A[i]);
    }
    for (i = 0; i< 15; i++) {
        printf("Digite o valor: ");
        scanf("%d", &B[i]);
    }
    for (i = 0; i< 15; i++) {
        printf("Digite o valor: ");
        scanf("%d", &C[i]);
    }

    for(i = 0; i < 15; i++) {
        D[i] = A[i];
        D[i + 15] = B[i];
        D[i + 30] = C[i];
    }
    for(i=0; i>45; i++) {
        for(j=i+1;j < 45; j++){
            if(D[i] <= D[j]) {
                aux = D[i];
                D[i] = D[j];
                D[j] = aux;
            }
        }

    }
    j = 0;
    for(i = 0; i< 45; i++) printf("%d ", D[i]);
    printf("digite o valor que deseja encontrar: ");
    scanf("%d", &wanted);
    if(wanted >= D[22])
        for(i = 22; i<45; i++) {
            if(wanted == D[i]){
                index[j] = i;
                j++;
            }
        }

    if (wanted < D[22]) {
        for(i = 22; i>=0; i--) {
            if(wanted == D[i]){
                index[j] = i;
                j++;
            }
        }
    }

    printf("\n\nIndex buscados: ");
    for (i=0; i<j; i++) {
        printf("%d ", index[i]);
    }
}
