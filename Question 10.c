/* Write a program to print all Armstrong numbers under 1000. */

#include<stdio.h>

int main()
{
    int i,d,qube=0;

    printf("\n 0");

    for (i=1;i<=1000;i++)
    {
        d=i;
        qube=0;

        while(d)
        {
            qube=qube+(d%10)*(d%10)*(d%10);
            d=d/10;
        }

        if(i==qube)
            printf("\n %d",i);
    }

    return 0;
}
