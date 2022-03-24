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

//  i = 1; j = 1; number = 1 [ new number = 2] -> First Loop
//  i = 2; j = 1, 2; number = 2 and 3 [new number = 4] -> Second Loop
//  i = 3; j = 1, 2, 3; number = 4, 5 and 6 [new number = 7] -> Third Loop
// Fourth Loop ma, 7 <=10 true hunchha and loop ma enter garchha, loop 4 chot chalchha and number ko value increase hunchha
// ie, 7 8 9 10 print hunchha last ma

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
//    multiplication_table(4, 4);
   triangular_number(7);
}