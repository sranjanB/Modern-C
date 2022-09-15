#include<stdio.h>
int main(void)
{
    float loanAmount, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f",&loanAmount);
    printf("Enter interset rate:  ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);

    loanAmount += (loanAmount * (rate / 100))/12;
    loanAmount -= payment;
    printf("Balance remaining after first payment: $%.2f\n",loanAmount);

    loanAmount += (loanAmount * (rate / 100)) / 12;
    loanAmount -= payment;
    printf("Balance remaining after second payment: %.2f\n",loanAmount);

    loanAmount += (loanAmount * (rate / 100)) / 12;
    loanAmount -= payment;
    printf("Balance remaining after third payment: %.2f\n",loanAmount);
    
    return 0;
}
