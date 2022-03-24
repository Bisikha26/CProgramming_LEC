#include<stdio.h>

void main() {
    int cmark;
    printf("Enter marks you have obtained on C Programming exams\n: ");
    scanf("%d", &cmark);

    // nested if else
    if ( cmark >= 40 ) {
        printf("Yayy, you have passed in C Programming");
        if(cmark >= 85) {
            printf("Your grade is A+");
        } else if(cmark >= 70 && cmark < 85) {
            printf("Your grade is A");
        }else if(cmark >= 50 && cmark < 70) {
            printf("Your grade is B");
        } else {
            printf("Your grade is D");
        }
    } else {
        printf("Study hard and you will pass in next attempt");
    }
}
