#include<stdio.h>
#include<conio.h>
int Jeeva;
void main()
{
    do while(1)
    {
    Mohan:
    clrscr();
    printf("Enter Jeeva status:");
    scanf("%d",&Jeeva);
if(Jeeva==0)
{
    printf("Jeeva is sitting");
    //Jeeva=1;
    getch();
    //continue;
    goto Mohan;
}
else if(Jeeva==1)
{
    printf("Jeeva is standing");
    //getch();
    //break;
}
else
{
    printf("Invaild input");
}
getch();
}
}