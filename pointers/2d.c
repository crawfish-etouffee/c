#include <stdio.h>

int main() {
    
    int B[2][3] = {{2 ,3, 6}, {4, 5, 8}};
    int (*p)[3] = B;
    
    printf("The address of B is %p\n", B);
    printf("The address of B + 1 is %p\n", B + 1);
    printf("The address is %p\n", &B[0]);
    printf("The address of B + 1 is %p\n", &B[1]);
    printf("The address is %p\n", &B[0][0]);
    printf("The address is %p\n", *(B+1));
    printf("The address is %p\n", &B[1][0]);
    printf("The address is %p\n", B[1]);
    printf("The address is %p\n", B[0]);
    printf("The address is %p\n", *B);
    printf("The address is %p\n", *(B + 1) + 2);
    printf("The address is %p\n", B[1] + 2);
    printf("The address is %p\n", &B[1][2]);
    printf("The address is %d\n", *(*B+1));

}
