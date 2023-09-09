#include <stdio.h>
#include <stdlib.h>

int Add(int* a, int* b) {

    printf("Address of a in Add = %p\n", &a);
    printf("Value in a of Add (address of a of main) = %p\n", a);
    printf("Value of address stored in a of Add = %d\n", *a);
    int c = (*a) + (*b);
    return c;
}

int main() {
    int a = 2, b = 4;
    printf("Address of a in main = %p\n", &a);

    int c = Add(&a, &b);
    printf("Sum = %d\n", c);
}
