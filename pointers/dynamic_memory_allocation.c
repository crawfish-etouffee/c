#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int * A = (int *) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++) {
        A[i] = i + 1;
    }
    int *B = (int*)realloc(A, 2*sizeof(int));
    printf("Prev bloc address = %p, new address = %p\n", A, B);
    for (int i = 0; i < 2*n; i++)
    {
        printf("%d\n", B[i]);
    }
}
