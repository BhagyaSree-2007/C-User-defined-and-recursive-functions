/*Write a C program to implement simple arithmetic calculator*/
#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);
void modul(int a,int b);
int main()
{
   int n1,n2,ch;
   do
   {
      printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Find Remainder\n6.Exit\n");
      printf("Enter your choice:");
      scanf("%d",&ch);
      if (ch>=1 && ch<=5)
      {
         printf("Enter a,b:");
         scanf("%d,%d",&n1,&n2);
      }
      switch(ch)
      {
         case 1:
            add(n1,n2);
            break;
         case 2:
            sub(n1,n2);
            break;
         case 3:
            mul(n1,n2);
            break;
         case 4:
            div(n1,n2);
            break;
         case 5:
            modul(n1,n2);
            break;
         default:
            printf("Invalid input\n");
       }
    }while(ch!=6);
   return 0;
}
void add(int a, int b)
{
   int sum;
   sum=a+b;
   printf("Sum=%d\n",sum);
}
void sub(int a, int b)
{
   int diff;
   diff=a-b;
   printf("Difference=%d\n",diff);
}
void mul(int a, int b)
{
   int p;
   p=a*b;
   printf("Product=%d\n",p);
}
void div(int a, int b)
{
   float q;
   if(b==0)
      printf("b should not be zero\n");
   else
      q=a/b;
      printf("Quotient=%f\n",q);
}
void modul(int a, int b)
{
   int m;
   if(b==0)
      printf("b should not be zero\n");
   else
      m=a%b;
   printf("Remainder=%d\n",m);
}
