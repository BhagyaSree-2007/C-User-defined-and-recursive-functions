/*Write a C program to print fibonacci series using recursion*/
#include<stdio.h>
int fibo(int);
int fibo(int n)
{
   if (n==0)
      return 0;
   else if(n==1)
      return 1;
   else
      return fibo(n-1)+fibo(n-2);
}
int main()
{
   int n,i;
   printf("Enter the number of terms:");
   scanf("%d",&n);
   printf("Fibonacci series:\n");
   for(i=0;i<n;i++)
   {
      printf("%d\t",fibo(i));
   }
   printf("\n");
   return 0;
}
