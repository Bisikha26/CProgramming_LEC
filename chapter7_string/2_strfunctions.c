#include<stdio.h>
// #include<string.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("My name is: ");
    puts(name);

    // printf("Length of my name is: %d", strlen(name));
    return 0;
}