#include <stdio.h>

void A(){
    printf("Hello\n");
}

void B(void(*ptr)()) {
    ptr();
}

int main() {
    B(A);
}
