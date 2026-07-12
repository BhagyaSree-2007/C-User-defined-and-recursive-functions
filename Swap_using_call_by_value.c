/*Write a C program using function 'exchange' to 
swap values of global variables x and y and demonstrate call by value*/
#include<stdio.h>
void exchange(int,int);
void exchange(int a,int b)
{
   int t;
   t=a;
   a=b;
   b=t;
   printf("After swapping:\nx=%d,y=%d\n",a,b);
}
int main()
{
   int x,y;
   printf("Enter x,y:");
   scanf("%d,%d",&x,&y);
   exchange(x,y);
   return 0;
}
