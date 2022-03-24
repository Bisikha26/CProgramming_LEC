#include<stdio.h>

// i = 1; j=1,2,3,4 [1, 2, 3, 4] -> First Loop
// i = 2; j=1,2,3,4 [2, 4, 6, 8] -> Second Loop
// i = 3; j=1,2,3,4 [3, 6, 9, 12] -> Thrid Loop
// i = 4; j=1,2,3,4 [4, 8, 12, 16] -> Fourth Loop
int multiplication_table(int row, int column) {
    int i, j;
    
    for(i=1; i<=row; i++) {
        for(j=1; j<=column; j++) {
            printf("%3d", i*j);
        }
        printf("\n");
    }
}