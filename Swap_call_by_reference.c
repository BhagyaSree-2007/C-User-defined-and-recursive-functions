/*Write a C program to interchange value of two numbers using call by reference*/
#include<stdio.h>
void swap(int *,int *);
void swap(int *a,int *b)
{
   int t;
   t=*a;
   *a=*b;
   *b=t;
   //printf("After swapping:\na=%d,b=%d\n",*a,*b);
}
int main()
{
   int x,y;
   printf("Enter x,y:");
   scanf("%d,%d",&x,&y);
   swap(&x,&y);
   printf("After swapping:\nx=%d,y=%d\n",x,y);
   return 0;
}
