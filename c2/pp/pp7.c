/* Make Change */
#include<stdio.h>

int main(void)
{
    int amount,n20, n10, n5, n1;

    printf("Enter a Rupees amount: ");
    scanf("%d",&amount);
    n20 = amount / 20;
    amount -= n20 * 20;
    n10 = amount/10;
    amount -= n10 * 10;
    n5 = amount/5;
    n1 = amount - n5 * 5;
    printf("$20 Notes: %d\n",n20);
    printf("$10 Notes: %d\n",n10);
    printf("$5 Notes: %d\n", n5);
    printf("$1 Notes: %d\n",n1);
    return 0;
}
