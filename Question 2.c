/* Write a program to print first N terms of Fibonacci series. */

#include<stdio.h>

int main()
{
    int i,n,a,b,c;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    a=-1;
    b=+1;

    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("\n %d",c);
        a=b;
        b=c;
    }

    return 0;
}
