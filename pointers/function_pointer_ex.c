//Function Pointers and callbacks
#include<stdio.h>
void A()
{
    printf("Hello\n");
}

void B(void (*ptr)()) 
{
    ptr(); //call-back function that "ptr" pointers to
}

int main()
{
    B(A);
}
