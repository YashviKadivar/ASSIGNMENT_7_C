/* Write a program to check whether two given numbers are co-prime
numbers or not */

#include<stdio.h>

int main()
{
    int a,b,n,i;

    printf("\n Enter a two Numbers->");
    scanf("%d%d",&a,&b);

    if(a<b)
        n=a;
    else
        n=b;

    for(i=n;n>1;n--)
    {
        if(a%n==0 && b%n==0)
        {
            printf("\n not a co prime numbers");
            break;
        }
    }

    if(n==1)
        printf("\n prime numbers");

    return 0;

}
