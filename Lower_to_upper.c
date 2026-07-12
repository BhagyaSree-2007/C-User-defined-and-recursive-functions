/*Write a C  program to convert all lower case characters into upper case equivalent*/
#include<stdio.h>
char Lower_to_upper(char ch);
char Lower_to_upper(char ch)
{
   char upper;
   if(ch>='a' && ch<='z')
      upper=ch-32;
   else
      upper=ch;
   return upper;
}
int main()
{
   char ch,res;
   printf("Enter a character:");
   scanf("%c",&ch);
   res=Lower_to_upper(ch);
   printf("%c\n",res);
   return 0;
}
