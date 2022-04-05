/*Program to calculate remaining change */

#include<stdio.h>
int main(void)
{
    int number, div20, div10, div5, div1;
    printf("Enter Rupees: ");
    scanf("%d",&number);
    div20 = number/20;
    number = number - (20*div20);
    div10 = number/10;
    number = number - (10*div10);
    div5 = number/5;
    number = number - (5*div5);
    div1 = number;
    printf("$20 Bills: %d\n$10 Bills: %d\n$05 Bills: %d\n$01 Bills: %d\n", div20, div10, div5, div1);
    return 0;
}
