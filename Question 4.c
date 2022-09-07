/* Write a program to calculate HCF of two numbers. */

#include<stdio.h>

int main()
{
   int a,b,n;

   printf("\n Enter a number->");
   scanf("%d%d",&a,&b);

   for(n=(a<b) ? a:b ; n>=1 ; n--)
   {
       if(a%n==0 && b%n==0)
       {
           printf("\n %d",n);
           break;
       }
   }

   return 0;
}
