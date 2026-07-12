/*Write a C program using function updateValues(int *x,int *y) 
that doubles the 1st number and triples the second number*/
#include<stdio.h>
void updateValues(int *,int *);
void updateValues(int *x,int *y)
{
   *x=*x*2;
   *y=*y*3;
}
int main()
{
   int a,b,u,v;
   printf("Enter two numbers:");
   scanf("%d,%d",&a,&b);
   u=a;
   v=b;
   updateValues(&a,&b);
   printf("%d * 2 = %d\n",u,a);
   printf("%d * 3 = %d\n",v,b);
   return 0;
}
