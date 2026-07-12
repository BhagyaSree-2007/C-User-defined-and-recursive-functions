/*Write a function in C program to implement the power function*/
#include<stdio.h>
float power(float,float);
float power(float x,float y)
{
   float res=1,i;
   for(i=1;i<=y;i++)
   {
      res*=x;
   }
   return res;
}
int main()
{
   float b,e;
   printf("Enter base:");
   scanf("%f",&b);
   printf("Enter exponent(non negative integer):");
   scanf("%f",&e);
   if (e<0)
   {
      printf("Error:Exponent should not be negative");
      return 1;
   }
   float res=power(b,e);
   printf("%f ^ %f = %f\n",b,e,res);
   return 0;
}
