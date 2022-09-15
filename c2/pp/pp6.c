#include<stdio.h>

int main(void)
{
    int x, horner;
    printf("Enter value of x: ");
    scanf("%d",&x);
    horner = (((((3 * x + 2)* x - 5) * x - 1) * x + 7)* x - 6);
    printf("Answer: %d\n",horner);
    return 0;
}
