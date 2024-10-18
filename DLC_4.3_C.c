#include<stdio.h>
#include<math.h>
void main() {
    int A[30], B[30], i, j = 0, aux, wanted, index[30];

    for (i = 0; i < 30; i ++ ) {
        printf("Digite o valor: ");
        scanf("%d", &A[i]);
        B[i] = pow(A[i], 2);
    }
    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &wanted);

    for(i = 0; i < 30; i++) {
        if (wanted == B[i]) {
            index[j] = i;
            j++;
        }
    }
    printf("Valores dos indices: ");
    for(i = 0; i<j; i++) printf("%d ", index[i]);
}
