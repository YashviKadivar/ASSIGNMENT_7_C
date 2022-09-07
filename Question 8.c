/* Write a program to find next Prime number of a given number. */

#include<stdio.h>

int main()
{
    int a,n,i,flag;

    printf("\n Enter a Number->");
    scanf("%d",&a);

    for(n=a+1; ;n++)
    {
        flag=0;

        for(i=2;i<=n/2;++i)
        {
            if(n%i==0)
            {
                flag=1;
            }
        }

        if(flag==0)
        {
            printf("\n %d",n);
            break;
        }
    }

    return 0;
}
