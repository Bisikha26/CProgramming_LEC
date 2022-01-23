#include <stdio.h>

void main() {

   int a = 21;
   int b = 10;
   int c ;
   
   // addition '+' operator    
   c = a + b;
   printf("Line 1 - Value of c is %d\n", c );

	// Subtraction "-" operator
   c = a - b;
   printf("Line 2 - Value of c is %d\n", c );

	// Multiplication "*" operator
   c = a * b;
   printf("Line 3 - Value of c is %d\n", c );
	
   //Division "/" operator 
   c = a / b;
   printf("Line 4 - Value of c is %d\n", c );
	
   //Calculating the remainder. Modulo "%" operator 
   c = a % b;
   printf("Line 5 - Value of c is %d\n", c );

   // postfix. prints the value of c as it is and then increase the value by 1 
   c = a++; 
   printf("Line 6 - Value of c is %d\n", c );
   
   // Prefix. Increase the value of c and prints 
   c = ++a; 
   printf("Line 7 - Value of c is %d\n", c );
	
   //Postfix decrement. Prints the value first then decrease the value by one in next iteration  
   c = a--; 
   printf("Line 8 - Value of c is %d\n", c );
}