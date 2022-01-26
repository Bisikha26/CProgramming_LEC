#include <stdio.h>

void main() {

   int a = 5;
   int b = 20;
   int c ;

   // If both the operands are non-zero, then the condition becomes true. 
   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }
   
   // If any of the two operands is non-zero, then the condition becomes true.    
   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   } else {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }
}