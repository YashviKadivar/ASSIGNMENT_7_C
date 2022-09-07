/* Write a program to find the Nth term of the Fibonnaci series. */

#include<stdio.h>

int main()
{
    int i,a,b,c,n;

    printf("\n Enter a number->");
    scanf("%d",&n);

    a=-1;
    b=+1;

    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;

        if(i==n)
        {
            printf("\n %d",c);
            break;
        }
    }

    return 0;
}
