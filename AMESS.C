#include<stdio.h>
#include<conio.h>

void main()
{
   int idly=100,dosa=50,tea=50,vadai=200;
   int aidly,adosa,atea,avadai;
   int baidly,badosa,batea,bavadai;
   clrscr();
   //scanf("%d%d%d%d",&aidly,&adosa,&atea,&vadai);
   printf("Enter Alagu's Idly\n:",aidly);
   scanf("%d",&aidly);
   printf("Enter Alagu's Dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("Enter Alagu's Tea\n:",atea);
   scanf("%d",&atea);
   printf("Enter Alagu's Vadai\n:",avadai);
   scanf("%d",&avadai);
   idly=idly-aidly;
   dosa=dosa-adosa;
   tea=tea-atea;
   vadai=vadai-avadai;
   printf("Balance\nidly\t%d\ndosa\t%d\ntea\t%d\nvadai\t%d",idly,dosa,tea,vadai);
   getch(); d
}

