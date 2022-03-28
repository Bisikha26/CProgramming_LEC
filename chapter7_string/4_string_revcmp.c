// Q. Check if the string is palindrome or not

#include<stdio.h>
#include<string.h>
void main() {
   char original[50], reverse[50];
   printf("Enter the string to be checked");
   scanf("%s", &original);
   
   //reverse = strrev(original); //This is not allowed as assignment operator is not allowed in string
   strcpy(reverse, original);
   strrev(reverse);
   
   if(strcmp(original, reverse) == 0) {
       printf("\n Given String is palindrome");
   } else {
       printf("\n Given string is not palindrome");
   }
}