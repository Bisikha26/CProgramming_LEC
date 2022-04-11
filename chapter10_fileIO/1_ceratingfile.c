// When working with files, you need to declare a pointer of type file. 
// This declaration is needed for communication between the file and the program.

/*
Opening a file

Syntax : ptr = fopen("fileopen","mode");
*/

#include <stdio.h>
int main() {
FILE *fp;
fp  = fopen ("data.txt", "w");
}

// ‘C’ provides the fclose function to perform file closing operation. The syntax of fclose is as follows,
// fclose (file_pointer);