#include<stdio.h>

int main(void)
{
    float income;
    printf("Enter an amount: ");
    scanf("%f",&income);
    printf("With tax added: $%.2f\n",income * 1.05f);
    return 0;
}
