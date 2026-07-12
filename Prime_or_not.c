/*Write a C program using function to check whether a number is prime or not*/
#include<stdio.h>
#include<math.h>
int prime(int);
int prime(int n)
{
   int i,f=0;
   for(i=2;i<sqrt(n);i++)
   {
      if (n%i==0)
      {
         f+=1;
         break;
      }
   }
   return f;
}
int main()
{
   int num,flag;
   printf("Enter a number:");
   scanf("%d",&num);
   if (num<=0)
      flag=1;
   else
      flag = prime(num);
   if(flag==0)
      printf("Prime\n");
   else
      printf("Not prime\n");
   return 0;
}
