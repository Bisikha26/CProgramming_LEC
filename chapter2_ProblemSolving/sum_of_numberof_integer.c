// Q. WAP to read a positive integer and display the sum of digits in it

#include<stdio.h>

void main() {
    int n, sum=0, r;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        r = n %10;
        sum = sum + r;
        n = n / 10;
    } while(n!=0);
    printf("The sum of digits of given number is: %d", sum);
}