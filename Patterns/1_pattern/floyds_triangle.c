#include<stdio.h>

//  i = 1; j = 1; number = 1 [ new number = 2] -> First Loop
//  i = 2; j = 1, 2; number = 2 and 3 [new number = 4] -> Second Loop
//  i = 3; j = 1, 2, 3; number = 4, 5 and 6 [new number = 7] -> Third Loop

int triangular_number(int triangular_number) {
    int i, j, number;

    number = 1;
    for(i=1; number<=triangular_number; i++) {
        for(j=1; j<=i; j++) {
            printf("%3d", number);
            number++;
        }
        printf("\n");
    }
}

void main() {
   triangular_number(7);
}