// Q. WAP to read a function in main(), pass it to a function that returns the count of numbers of words to main(). Display the count in main()

#include<stdio.h>
#include<string.h>

int countstr(char str[]);
void main() {
    char str[100];
    printf("Enter the string to be counted: ");
    scanf("%s", &str);
    int count = countstr(str);
    printf("No of words in given string is: %d", count);
}

int countstr(char str[]) {
    return (strlen(str));
}