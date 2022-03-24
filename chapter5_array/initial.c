#include<stdio.h>

int int_arr() {
    // int num[] = {1,2,3,4,5};
    // printf("Number on 3rd index is : %d\n", num[3]);

    // for(int i=0; i<5; i++) {
    //     printf("The number in index %d is %d\n", i, num[i]);
    // }

    int size, new_arr[10];
    printf("Enter the size of an array");
    scanf("%d", &size);

    for(int j=0; j<size; j++) {
        printf("Enter the number in index %d: ", j);
        scanf("%d", &new_arr[j]);
    }

    for(int j=0; j<size; j++) {
        printf("The number in index %d is %d\n", j, new_arr[j]);
    }
}

void main() {
    int_arr();
}