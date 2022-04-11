
#include <stdio.h>
int main() {

    FILE * file_pointer;

    file_pointer = fopen("data.txt", "r"); 
    char str1[10];
    fscanf(file_pointer, "%s", str1);
    printf("Read String1 |%s|\n", str1);
}