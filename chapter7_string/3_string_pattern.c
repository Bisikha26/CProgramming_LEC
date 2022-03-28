// Q. Analyse the result

#include<stdio.h>
#include<string.h>
void main() {
    char name[] = "Bisikha Subedi";
    char city[] = "Bhaktapur";

    for(int i=0; i<strlen(name); i++) {
        printf("%c\n", name[i]);
    }
    printf(" lives in\n");
    for(int i=0; i<strlen(city); i++) {
        printf("%c\n", city[i]);
    }
}