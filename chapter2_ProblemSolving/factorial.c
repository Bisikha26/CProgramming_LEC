// Q. WAP to read a non negative integer and display its factorial 

#include<stdio.h>

void main() {
    int number, i;
    int fact = 1;

    printf("Enter a non negative integer: ");
    scanf("%d", &number);

    for( i=1; i<=number; i++ ) {
        fact = fact * i;
    }
    printf("The factorial of the number %d is %d", number, fact);
}