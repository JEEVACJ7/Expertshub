#include<stdio.h>
#include<conio.h>

void main()
{
   int puuri,rpuuri,spuuri,kpuuri;
   int eatr,eats,eatk,eatrs,eatks;
   clrscr();
   printf("Total num of puuri's:");
   scanf("%d",&puuri);
   printf("Enter Ragul's puuri:");
   scanf("%d",&rpuuri);
   printf("Enter Sanjay's puuri:");
   scanf("%d",&spuuri);
   eatr=puuri*rpuuri/100;
   eats=puuri*spuuri/100;
   eatrs=puuri-(eatr+eats);
   printf("Balance eatrs\t%d\n",eatrs);
   printf("Enter Kamail's puuri:");
   scanf("%d",&kpuuri);
   eatk=puuri*kpuuri/100;
   eatks=puuri-eatk;
   printf("Balance eatks\t%d",eatks);
   getch();
}

