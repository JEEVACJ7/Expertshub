#include<stdio.h>
#include<conio.h>

void main()
{
   int idly=100,dosa=50,tea=50,vadai=200;
   int aidly,adosa,atea,avadai;
   int midly,mdosa,mtea,mvadai;
   int baidly,badosa,batea,bavadai;
   clrscr();
   //scanf("%d%d%d%d",&aidly,&adosa,&atea,&vadai);
   printf("Enter Alagu's Idly\n:",aidly);
   scanf("%d",&aidly);
   printf("Enter Mohan's Idly\n:",midly);
   scanf("%d",&midly);
   printf("Enter Alagu's Dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("Enter Mohan's Dosa\n:",mdosa);
   scanf("%d",&mdosa);
   printf("Enter Alagu's Tea\n:",atea);
   scanf("%d",&atea);
   printf("Enter Mohan's Tea\n:",mtea);
   scanf("%d",&mtea);
   printf("Enter Alagu's Vadai\n:",avadai);
   scanf("%d",&avadai);
   printf("Enter Mohan's Vadai\n:",mvadai);
   scanf("%d",&mvadai);
   idly=idly-aidly-midly;
   dosa=dosa-adosa-mdosa;
   tea=tea-atea-mtea;
   vadai=vadai-avadai-mvadai;
   printf("Balance\nidly\t%d\ndosa\t%d\ntea\t%d\nvadai\t%d",idly,dosa,tea,vadai);
   getch();
}

