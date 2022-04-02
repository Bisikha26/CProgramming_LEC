#include<stdio.h>

int sort_desc(int *arr, int n) {
 printf("The entered array is: ");
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[20], n;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the elements of an array");

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sort_desc(arr, n);
    return 0;
}