#include<stdio.h>
void add(int, float);
void main() {
    int a;
    float b;

    printf("Enter values of a and b");
    scanf("%d%f", &a, &b);
    add(a,b);
}
void add(int p, float q) {
    float s;
    s = p + q;
    printf("\nSum=%f", s);
}