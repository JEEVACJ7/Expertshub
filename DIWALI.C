#include<stdio.h>

int Diwali();
int Laddu,Ras,temp;
void main()
{
clrscr();
    printf("Enter Laddu:");
    scanf("%d",&Laddu);
    printf("Enter Ras:");
    scanf("%d",&Ras);
    temp=Diwali(Laddu,Ras);
    printf("Total sweets: %d",temp);


getch();
}
int Diwali(int a,int b)
{
    if(Ras==0)
    {
    return 0;
    }
    else
    {
    return a+b;

}}