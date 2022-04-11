// using fprintf function

#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("data.txt", "w"); // "w" defines "writing mode"
    /* write to file */
    fprintf(fptr, "Learning to program in C\n");
    fclose(fptr);
    return 0;
}