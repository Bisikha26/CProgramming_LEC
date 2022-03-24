// changing value pointed by pointers
#include <stdio.h>
void main() {
    int* pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d", c);    // Output: 1
    printf("%d", *pc);
}
