#include<stdio.h>
#include<conio.h>

void main()
{
 int in1,in2,o1,o2,o3,o4,o5;
 clrscr();
 printf("Enter the input:");
 scanf("%d",&in1);
 printf("Enter the input:");
 scanf("%d",&in2);
 o1=in1+in2;
 printf("Sum of values are %d\n",o1);
 o2=in1-in2;
 printf("Sum of values are %d\n",o2);
 o3=in1*in2;
 printf("Sum of values are %d\n",o3);
 o4=in1/in2;
 printf("Sum of values are %d\n",o4);
 o5=in1%in2;
 printf("Sum of values are %d\n",o5);
 getch();
}