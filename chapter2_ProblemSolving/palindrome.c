// WAP to find the reverse of number entered by the user. Check whether the reversed number is equal to the original number
// If the reverse number is equal to the original number, print "number is palindrome" else "not a palindrome"

#include<stdio.h>

void main() {
    int n, sum = 0, rem, org_num;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    org_num = n;

    do {
        rem = n % 10; // to seperate last digit of integer
        sum = sum * 10 + rem;
        n = n / 10; // to truncate last digit of integer
    } while (n!=0);

    if( org_num == sum ) {
        printf("The number %d is a palindrome number", org_num);
    } else {
        printf("The number %d is not a palindrome number", org_num);
    }
}