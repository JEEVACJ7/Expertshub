#include <stdio.h>
#include <conio.h>

void main()
{
   int input1, input2, output1; clrscr();
   printf("The value of input1,input2:");
   scanf("%d%d",&input1,&input2);
   output1=input1+input2;
   printf("sum of values are %d",output1);
   getch();
}