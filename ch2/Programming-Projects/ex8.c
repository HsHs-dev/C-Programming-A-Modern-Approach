/*******************************************************************************************************
*  8. Write a program that calculates the remaining balance on a loan after the first, second, and     *
*  third monthly payments:                                                                             *
*  Enter amount of loan: 20000.00                                                                      *
*  Enter interest rate: 6.0                                                                            *
*  Enter monthly payment: 386.66                                                                       *
*  Balance remaining after first payment: $19713.34                                                    *
*  Balance remaining after second payment: $19425.25                                                   *
*  Balance remaining after third payment: $19135.71                                                    *
*  Display each balance with two digits after the decimal point. Hint: Each month, the balance         *
*  is decreased by the amount of the payment, but increased by the balance times the monthly           *
*  interest rate. To find the monthly interest rate, convert the interest rate entered by the user to  *
*  a percentage and divide it by 12.                                                                   *
********************************************************************************************************/

#include <stdio.h>

int main(void) {

    printf("Enter the amount of loan: ");
    float balance;
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    float interest;
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    float monthlyPayment;
    scanf("%f", &monthlyPayment);

    float monthlyInterestRate = (interest / 100) / 12;

    float amount1 = balance - monthlyPayment + (monthlyInterestRate * balance);
    balance = amount1;
    float amount2 = balance - monthlyPayment + (monthlyInterestRate * balance);
    balance = amount2;
    float amount3 = balance - monthlyPayment + (monthlyInterestRate * balance);

    printf("Balance remaining after first payment: %.2f\n", amount1);
    printf("Balance remaining after second payment: %.2f\n", amount2);
    printf("Balance remaining after second payment: %.2f\n", amount3);

    return 0;
}
