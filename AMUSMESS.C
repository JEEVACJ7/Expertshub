#include<stdio.h>
#include<conio.h>

void main()
{
   int idly=100,dosa=50,tea=50,vadai=200;
   int aidly,adosa,atea,avadai;
   int midly,mdosa,mtea,mvadai;
   int uidly,udosa,utea,uvadai;
   int sidly,sdosa,stea,svadai;
   int baidly,badosa,batea,bavadai;
   clrscr();
   //scanf("%d%d%d%d",&aidly,&adosa,&atea,&vadai);
   printf("Enter Alagu's Idly\n:",aidly);
   scanf("%d",&aidly);
   printf("Enter Mohan's Idly\n:",midly);
   scanf("%d",&midly);
   printf("Enter Uma's Idly\n:",uidly);
   scanf("%d",&uidly);
   printf("Enter Saran's Idly\n:",sidly);
   scanf("%d",&sidly);
   printf("Enter Alagu's Dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("Enter Mohan's Dosa\n:",mdosa);
   scanf("%d",&mdosa);
   printf("Enter Uma's Dosa\n:",udosa);
   scanf("%d",&udosa);
   printf("Enter Saran's Dosa\n:",sdosa);
   scanf("%d",&sdosa);
   printf("Enter Alagu's Tea\n:",atea);
   scanf("%d",&atea);
   printf("Enter Mohan's Tea\n:",mtea);
   scanf("%d",&mtea);
   printf("Enter Uma's Tea\n:",utea);
   scanf("%d",&utea);
   printf("Enter Saran's Tea\n:",stea);
   scanf("%d",&stea);
   printf("Enter Alagu's Vadai\n:",avadai);
   scanf("%d",&avadai);
   printf("Enter Mohan's Vadai\n:",mvadai);
   scanf("%d",&mvadai);
   printf("Enter Uma's Vadai\n:",uvadai);
   scanf("%d",&uvadai);
   printf("Enter Saran's Vadai\n:",svadai);
   scanf("%d",&svadai);
   idly=idly-aidly-midly-uidly-sidly;
   dosa=dosa-adosa-mdosa-udosa-sdosa;
   tea=tea-atea-mtea-utea-stea;
   vadai=vadai-avadai-mvadai-uvadai-svadai;
   printf("Balance\nidly\t%d\ndosa\t%d\ntea\t%d\nvadai\t%d",idly,dosa,tea,vadai);
   getch();
}

