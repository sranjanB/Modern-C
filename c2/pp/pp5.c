#include<stdio.h>

int main(void)
{
    int x, res;
    printf("Enter value of x: ");
    scanf("%d",&x);
    res = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    printf("Answer: %d\n",res);
    return 0;
}
