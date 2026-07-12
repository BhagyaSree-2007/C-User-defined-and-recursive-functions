/*Write a C program to compute x power n using recursion*/
#include<stdio.h>
int power(int x,int n);
int power(int x,int n)
{
   if (n==0)
      return 1;
   else
      return (x*power(x,n-1));
}
int main()
{
   int base,a,res;
   printf("Enter base number:");
   scanf("%d",&base);
   printf("Enter exponent:");
   scanf("%d",&a);
   res=power(base,a);
   printf("%d ^ %d = %d\n",base,a,res);
   return 0;
}
