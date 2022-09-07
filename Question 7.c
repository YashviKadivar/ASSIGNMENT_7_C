/* Write a program to print all Prime numbers between two given numbers. */

#include<stdio.h>

int main()
{
    int a,b,flag=0,n,i;

    printf("\n Enter two numbers->");
    scanf("%d%d",&a,&b);

    for(n=a;n<=b;n++)
    {
        flag=0;

        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
            }
        }

        if(flag==0)
        {
          printf("\n %d",n);
        }
    }

    return 0;
}
