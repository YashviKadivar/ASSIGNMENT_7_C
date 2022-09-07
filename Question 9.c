/* Write a program to check whether a given number is an Armstrong number
or not. */

#include<stdio.h>

int main()
{
    int n,d,qub=0;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    d=n;

    while(d)
    {
        qub=qub+(d%10)*(d%10)*(d%10);
        d=d/10;
    }

    if(qub==n)
        printf("\n It's a amstrong number");
    else
        printf("\n It's not a amstrong number");

    return 0;
}
