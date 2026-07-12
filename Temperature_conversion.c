/*Write a C program to convert temperature from Celsius to farenheit and from farenheit to celsius*/
#include<stdio.h>
void ftc(float f);
void ctf(float c);
int main()
{
   int ch;
   float C,F;
   do
   {
      printf("1.Farenheit to celsius\n2.Celsius to farenheit\n3.Exit\n");
      printf("Enter your choice:");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:
            printf("Enter temperature in farenheit:");
            scanf("%f",&F);
            ftc(F);
            break;
         case 2:
            printf("Enter temperature in celsius:");
            scanf("%f",&C);
            ctf(C);
            break;
         default:
            printf("Invalid input\n");
       }
    }while(ch!=3);
   return 0;
}
void ftc(float f)
{
   float c;
   c=(f-32)*0.55;
   printf("In celsius:%f\n",c);
}
void ctf(float c)
{
   float f;
   f=(c*1.8)+32;
   printf("In farenheit:%f\n",f);
}
