#include <stdio.h>
int main()
{
    int testInteger;
    printf("The address of decleared variable is: %d\n", &testInteger);
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);
    return 0;
}

/*
1. Here, we have used %d format specifier inside the scanf() function to take int input from the user. 
   When the user enters an integer, it is stored in the testInteger variable.

2. we have used &testInteger inside scanf(). It is because &testInteger gets the address of testInteger
   The value entered by the user is stored in that address.
*/