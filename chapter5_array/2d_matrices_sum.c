#include<stdio.h>
int main() {
    float a[2][2], b[2][2], result[2][2];

    // taking input of first matrix
    printf("Enter the elements of 1st matrix\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }

    // taking input of second matrix
    printf("Enter elements of 2nd matrix\n");
    for(int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++) {
            printf("Enter b%d%d: ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
     }

    //  adding corresponding elements of two arrays
    for(int i=0; i<2; i++) {
        for (int j = 0; j<2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the sum
    printf("\nSum of Matrix:");

    for(int i=0; i < 2; i++) {
        for (int j=0; j < 2; j++) {
            printf("% f\t", result[i][j]);

            if(j == 1) {
                printf("\n");
            }
        }
    }
}