/* Write a program to check whether a given number is there in the Fibonacci
series or not. */

#include<stdio.h>

int main()
{
   int a,b,c,n;

   printf("\n Enter a Number->");
   scanf("%d",&n);

   a=-1;
   b=+1;

   while(c<n)
   {
       c=a+b;
       a=b;
       b=c;

       if(c==n)
       {
           printf("NUmber is in the fibonacci series");
           break;
       }
   }

   if(c>n)
   {
       printf("\n Number is not in the fibonacci series");
   }

   return 0;
}
