/*
9. Programming Project 8 in Chapter 2 asked you to write a program that calculates the
remaining balance on a loan after the first, second, and third monthly payments. Modify the
program so that it also asks the user to enter the number of payments and then displays the
balance remaining after each of these payments.
*/

/*
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
    printf("Balance remaining after third payment: %.2f\n", amount3);

    return 0;
}
*/

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

    printf("Enter the number of payments: ");
    int payments;
    scanf("%d", &payments);

    float monthlyInterestRate = (interest / 100) / 12;

    float amount;
    for (int i = 0; i < payments; i++) {
      amount = balance - monthlyPayment + (monthlyInterestRate * balance);
      balance = amount;
      printf("Balance remaining after the %d payment: %f\n", (i + 1), balance);
    }

    return 0;
}
