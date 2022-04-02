/*
The name "malloc" stands for memory allocation.

The malloc() function reserves a block of memory of the specified number of bytes. 
And, it returns a pointer of void which can be casted into pointers of any form.

The malloc() function allocates memory and leaves the memory uninitialized, 
whereas the calloc() function allocates memory and initializes all bits to zero.
*/

/*
Syntax :
ptr = (castType*) malloc(size);

Example:
ptr = (float*) malloc(100 * sizeof(float));

The above statement allocates 400 bytes of memory. It's because the size of float is 4 bytes. 
And, the pointer ptr holds the address of the first byte in the allocated memory.
*/

// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum = 0;

  printf("Number of elements in which sum is to be performed: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int));
 
  // if memory cannot be allocated
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }

  printf("Sum = %d", sum);
  
  // deallocating the memory
  free(ptr);

  return 0;
}
