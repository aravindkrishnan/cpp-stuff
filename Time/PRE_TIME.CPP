/***************************************************************************\
		      conceived & designed by

			  ARAVIND KRISHNAN

		    in C Programming Environment

		  please do not make illegal copies
/**************************************************************************/




#include <stdio.h>
#include   <dos.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
void main()
{


//registerbgidriver(EGAVGA_driver);
//registerbgifont(gothic_font);


int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");


errorcode = graphresult();
if (errorcode != grOk)  /* an error occurred */
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1);
}




   clrscr();
   struct  time t;
   gettime(&t);
  cleardevice();
char name[]={"EXCLUSIVELY DESIGNED BY ARAVIND KRISHNAN IN C"};
   setcolor(15);
  settextstyle(0,0,1);
 setlinestyle(0,0,3);
 circle(50,10,7);
outtextxy(47,7,"C");


struct date d;

getdate(&d);
gotoxy(70,1);
printf("%d-%d-%1d",d.da_day,d.da_mon,d.da_year);


  setcolor(BLUE);
  settextstyle(GOTHIC_FONT,0,5);
 setlinestyle(0,0,3);
  outtextxy(275,70,"12");
  outtextxy(360,90,"1");
  outtextxy(400,130,"2");
  outtextxy(420,195,"3");
    outtextxy(290,325,"6");
  outtextxy(165,195,"9");
  outtextxy(400,260,"4");
  outtextxy(355,310,"5");
   outtextxy(230,315,"7");
  outtextxy(180,260,"8");
  outtextxy(210,90,"11");
  outtextxy(165,135,"10");
  setcolor(RED);
  setfillstyle(1,RED);
  setlinestyle(0,0,3);
  circle(300,225,160);
  setlinestyle(1,0,3);
  circle(300,225,150);
  setlinestyle(3,0,3);
  circle(300,225,100);

    setcolor(BROWN);
  setfillstyle(1,BROWN);
   circle(300,225,165);
 setaspectratio(90,100);
  circle(300,225,200);
   floodfill(497,210,BROWN);
 setaspectratio(10,10);


int a,b,c,r,sec,min,hr,add=0,temp=0;
int i=sec=t.ti_sec;
int j=min=t.ti_min;
b=(j*6);
int k=hr=t.ti_hour;
if(k>=12)
c=((k-12)*30);
else if(k<12)
c=(k*30);
r=c;
while(!kbhit())
{
if(k>=12)
c=(k-12)*30;
else if(k<12)
c=k*30;
r=c;

    if(name[temp]=='\0')
      {
	  textcolor(RED);
	  temp=0;
      }
   else
{
   gotoxy(10+temp,1);
cout<<name[temp];
      temp++;
 }



setcolor(RED);
  setfillstyle(1,RED);
  setlinestyle(0,0,3);

    circle(300,225,5); circle(300,225,10);
a=(i*6);
//sec
  setcolor(CYAN);
  setfillstyle(1,CYAN);

  setlinestyle(0,0,3);

pieslice(300,225,75-(a-1),75-a,80);

  setcolor(YELLOW);
  setfillstyle(1,YELLOW);

  setlinestyle(0,0,3);
arc(300,225,a+40,a+90,155);
delay(970);
sound(1500);
delay(30);
nosound();
setcolor(BLACK);
setfillstyle(1,BLACK);
 setlinestyle(0,0,3);
pieslice(300,225,75-(a-1),75-a,80);
setcolor(BLUE);
setfillstyle(1,BLUE);
arc(300,225,90,450,155);
i++;

 //min

if(i%60==0)
{

++j;++min;

  setcolor(0);
  setfillstyle(1,0);
  setlinestyle(0,0,3);
pieslice(300,225,75-(b-1),75-b,90);
  b=(j*6);
  setcolor(YELLOW);
  setfillstyle(1,YELLOW);
  setlinestyle(0,0,3);
pieslice(300,225,75-(b-1),75-b,90);

}


 //hour
   if(min<12)
   {
   r=c;
 setcolor(GREEN);
  setfillstyle(1,GREEN);
  setlinestyle(0,0,3);
pieslice(300,225,75-(r-2),75-r,60);
   }
   if(min>=12&&min<24)
   {
	r=c+6;
 setcolor(GREEN);
  setfillstyle(1,GREEN);
  setlinestyle(0,0,3);
pieslice(300,225,75-(r-2),75-r,60);
   }
if(min>=24&&min<36)
   {
    r=c+12;
  setcolor(GREEN);
  setfillstyle(1,GREEN);
  setlinestyle(0,0,3);
  pieslice(300,225,75-(r-2),75-r,60);
   }
 if(min>=36&&min<48)
   {
  r=c+18;
 setcolor(GREEN);
  setfillstyle(1,GREEN);
  setlinestyle(0,0,3);
pieslice(300,225,75-(r-2),75-r,60);
   }
 if(min>=48&&min<=60)
   {
	r=c+24;
 setcolor(GREEN);
  setfillstyle(1,GREEN);
  setlinestyle(0,0,3);
pieslice(300,225,75-(r-2),75-r,60);
   }

if(k>12&&k!=24)
{ gotoxy(37,18);
printf(" PM  "); }
if(k<12)
{ gotoxy(37,18);
printf(" AM       "); }
if(k==12)
{ gotoxy(37,18);
printf(" NOON");   }
if(k==24)
{ gotoxy(37,18);
printf("MIDNIGHT");}

if(i>=60)
{
sec=i-(60*add);
}
else if(i<60)
sec=i;

if(i%60==0)
add++;

if(min==60)
{
 min=0;
 k++;
}
if(sec<10)
{
gotoxy(35,17);
printf("%d:%d:0%1d",k,min,sec);
}
if(j<10&&sec<10)
{
gotoxy(35,17);
printf("%d:0%1d:0%1d",k,min,sec);
}

if(j<10&&sec>=10)
{
gotoxy(35,17);
printf("%d:0%1d:%d",k,min,sec);
}
if(sec==60)
{
gotoxy(35,17);
printf("%d:%1d:00",k,min,sec);
}

if(j<10&&sec==60)
{
gotoxy(35,17);
printf("%d:0%1d:00",k,min,sec);
}
if(j>=10&&sec>=10)
{
gotoxy(35,17);
printf("%d:%d:%d ",k,min,sec);
}
if(j>=10&&sec<10)
{
gotoxy(35,17);
printf("%d:%d:0%1d ",k,min,sec);
}

if(sec==60&&j<10)
{
gotoxy(35,17);
printf("%d:0%1d:00",k,min,sec);
}
if(sec==60&&j>=10)
{
gotoxy(35,17);
printf("%d:%d:00",k,min,sec);
}


  setcolor(YELLOW);
  setfillstyle(1,YELLOW);
  setlinestyle(0,0,3);
pieslice(300,225,75-(b-1),75-b,90);

  setcolor(0);
 setfillstyle(1,0);
 setlinestyle(0,0,3);
pieslice(300,225,75-(r-2),75-r,70);

  setcolor(GREEN);
 setfillstyle(1,GREEN);
 setlinestyle(0,0,3);
pieslice(300,225,75-(r-2),75-r,60);


}


}





