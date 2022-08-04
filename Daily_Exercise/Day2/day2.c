#include<stdio.h>
void main()
{
    int n,rem,sum;
    printf("Enter the integer number : \n");
    scanf("%d",&n);
    do{
        sum=0;
        while(n)
        {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        }
        n=sum;
    }while((n/10)!=0);
    printf("The sum is %d\n",n);
}