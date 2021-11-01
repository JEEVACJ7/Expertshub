#include<stdio.h>
#include<conio.h>

void main()
{
   int puuri,rpuuri,spuuri,kpuuri;
   int eatr,eats,eatk;
   clrscr();
   printf("Total num of puuri's:");
   scanf("%d",&puuri);
   printf("Enter Ragul's puuri:");
   scanf("%d",&rpuuri);
   printf("Enter Sanjay's puuri:");
   scanf("%d",&spuuri);
   eatr=puuri*rpuuri/100;
   eats=puuri*spuuri/100;
   puuri=puuri-(eatr+eats);
   printf("Enter Kamail's puuri:");
   scanf("%d",&kpuuri);
   eatk=puuri*kpuuri/100;
   puuri=puuri-eatk;
   printf("Balance puuri\t%d",puuri);
   getch();
}
