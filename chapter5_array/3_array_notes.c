// Passing entire array to a function as an argument
//  The array name itself is the address of first element of that array. 
// For example if array name is arr then you can say that arr is equivalent to the &arr[0].

// &a[1] is equivalent to (a + 1)
// a[1] is equivalent to *(a + 1)
#include<stdio.h>
void main() {
    int arr[] = {5, 3, 7, 12, 15};

    printf("array name itself is address of first element as: %p", arr);
    printf("value of array name itself is address of first element as: %d", *arr);
}