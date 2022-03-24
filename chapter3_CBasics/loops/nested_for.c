// One for statement inside another for statement

// Q. A program to display the multiplication table of m by n

#include <stdio.h>
void main() {
    int i, j, rows, columns;
    printf("Enter row size and column size: ");
    scanf("%d%d", &rows, &columns);

    for(i = 1; i<=rows; i++) {
        for(j=1; j<=columns; j++) {
            printf("%d", i*j);
            printf(" ");
        }
        printf("\n");
    }
}