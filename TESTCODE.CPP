#include<iostream.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

//using namespace std;
int check(int);
void interface(int,int,char);
void gamee(int,int,int,int);
char player1[50],player2[50],txt[50];
//--------------------------------------
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 int A=1,B=1,f=1,D=0;
 char x,ds[10];
 clrscr();
//---------------------------------------
 cout<<"***************************Welcome to snakes and ladders game*******************\n";
 cout<<"***************************Please enter players name****************************\n";
 cout<<"********************************Player A:***************************************";
cin>>player1;
 cout<<"********************************Player B:***************************************";cin>>player2;
setcolor(BROWN);
setlinestyle(DASHED_LINE,1,3);
line(0,150,635,150);
line(0,300,635,300);
settextstyle(0,0,3);
setcolor(RED);
outtextxy(35,200,"PRESS ANY KEY FOR GAME");
for(int h=0;h<8;h++)   //horizontal circles
{
if(h%2==0)
{
    setcolor(1);
}
else
{
    setcolor(4);
}
circle(20+(h*20),380,10);
}

for(h=1;h<3;h++)  
{
if(h%2==0)
{
    setcolor(1);
}
else
{
     setcolor(4);
}
circle(160,380-(h*20),10);
}
setcolor(0);
settextstyle(0,0,8);
outtextxy(280,320,"&");
setcolor(MAGENTA);
line(550,380,450,340);
line(562,372,462,332);
line(518,370,536,360);
line(486,360,496,350);
setcolor(15);
settextstyle(0,0,1);
getch();
clrscr();
srand(time(0));
//---------------------------------------------------------------
if(A==1 && B==1)
{
      int gd=DETECT,gm;
      initgraph(&gd,&gm,"c:\\turboc3\\bgi");
      setcolor(BROWN);
      char tim[5];
      settextstyle(0,0,3);
      for(int s=3; s>0; s--)
      {
       itoa(s,tim,10);
       outtextxy(100,200,"GAME ABOUT TO START");
       outtextxy(350,290,tim);
       delay(1000);
       cleardevice();
      }
      closegraph();
}
//---------------------------------------------------------------
 while(A!=100 && B!=100)
{
  closegraph();
  gamee(A,B,f,D);
  x=getch();
  if(x=='q'||x=='Q')
  {
   interface(A,B,x);
   return(0);
  }
D=(rand()%6)+1;
  itoa(D,ds,10);

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int i=0;

setcolor(RED);
setlinestyle(0,0,3);

while(i<50)
{
rectangle(300-i,200,400-i,300);
setcolor(BLUE);
circle(300+i,300,10);
setcolor(RED);
rectangle(250+i,250,350+i,350);
line(300-i,200,250+i,250);
line(400-i,200,350+i,250);
line(300-i,300,250+i,350);
line(400-i,300,350+i,350);
delay(80);
i=i+10;
cleardevice();
}

i=0;
while(i<50)
{
rectangle(250,200+i,350,300+i);
setcolor(BLUE);
circle(350,300-i,10);
setcolor(RED);
rectangle(300,250-i,400,350-i);
line(250,200+i,300,250-i);
line(350,200+i,400,250-i);
line(250,300+i,300,350-i);
line(350,300+i,400,350-i);
delay(80);
i=i+10;
cleardevice();
}


i=0;
while(i<50)
{
rectangle(250+i,250,350+i,350);
setcolor(BLUE);
circle(350-i,250,10);
setcolor(RED);
rectangle(300-i,200,400-i,300);
line(250+i,250,300-i,200);
line(350+i,250,400-i,200);
line(250+i,350,300-i,300);
line(350+i,350,400-i,300);
i=i+10;
delay(80);
cleardevice();
}


i=0;
while(i<50)
{
rectangle(300,250-i,400,350-i);
setcolor(BLUE);
circle(300,250+i,10);
setcolor(RED);
rectangle(250,200+i,350,300+i);
line(300,250-i,250,200+i);
line(400,250-i,350,200+i);
line(300,350-i,250,300+i);
line(400,350-i,350,300+i);
i=i+10;
delay(80);
cleardevice();
}
settextstyle(0,0,5);
outtextxy(290,250,ds);

getch();
closegraph();


  if(f)
    {
      A=A+D;
      if(A>100)
      A=A-D;
      A=check(A);
    }
  else
    { 
       B=B+D;
       if(B>100)
       B=B-D;
       B=check(B);

    }
  f=!f;

 }

 if(A==100)
 {
   interface(A,B,x);
   return(0);
  }
 else
   {
   interface(A,B,x);
  return(0);
  }


 getch();
 closegraph();

 return(0);

}
void interface(int A,int B,char x)
{
   clrscr();
   closegraph();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   setcolor(CYAN);
   settextstyle(0,HORIZ_DIR,3);
   char w[10]="  WON";
   if(A==100)
        {
          strcat(player1,w);
          outtextxy(250,250,w);
        }
    if(B==100)
        {
          strcat(player2,w);
           outtextxy(250,250,w);
        }
    if(x=='q'||x=='Q')
       {
          outtextxy(220,200,"GAME OVER");
          outtextxy(100,270,"WINNERS NEVER QUIT");
       }
   getch();
}
//---------------------------------------------
void gamee(int A,int B,int f,int D)
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int k=100;
int x1=0,x2=400,y1=10,y2=10,x11=0,x22=0,y11=10,y22=410;
setlinestyle(0,0,3);

//draw the bord
for(int i=0;i<11;i++)
{
setcolor(LIGHTBLUE);
line(x1,y1,x2,y2);
line(x11,y11,x22,y22);
  x11+=40;
  x22+=40;
  y1+=40;
  y2+=40;
}

//ladder
//**************************************9-14
setcolor(RED);
line(328,382,260,338);
line(340,374,272,330);
line(308,368,320,360);
line(288,354,300,346);
//****************************************51-67
setcolor(BROWN);
line(368,182,260,145);
line(380,174,272,137);
line(338,172,350,164);
line(308,162,320,154);
line(278,152,290,144);
//****************************************32-98
setcolor(GREEN);
line(328,262,100,18);
line(340,254,112,10);
line(284,214,296,206);
line(238,166,252,158);
line(196,118,204,110);
line(152,70,160,62);
line(106,22,114,14);
//*****************************************38-60
setcolor(MAGENTA);
line(88,262,20,178);
line(100,254,32,170);
line(68,235,80,227);
line(48,208,56,200);
line(24,180,36,173);
//******************************************16-36
setcolor(GREEN);
line(168,342,168,258);
line(180,342,180,258);
line(168,316,180,316);
line(168,300,180,300);
line(168,275,180,275);
//******************************************90-91
setcolor(CYAN);
line(368,62,368,18);
line(380,62,380,18);
line(368,42,380,42);
line(368,30,380,30);
//*******************************************63-81
setcolor(BLUE);
line(128,142,20,58);
line(140,134,32,50);
line(102,120,114,112);
line(76,100,88,92);
line(50,80,62,72);
line(24,60,36,52);
//**********************************************
//circles
setlinestyle(0,0,1);
//59-65
int l;
for(l=0;l<9;l++)
{
setcolor(BROWN);
circle(60+(l*20),190,6);
setfillstyle(SOLID_FILL,6);
floodfill(60+(l*20),190,6);
}
for(l=1;l<2;l++)
{
circle(220,190-(l*20),6);
setfillstyle(SOLID_FILL,6);
floodfill(220,190-(l*20),6);
}
setcolor(YELLOW);
circle(220,150,6);
setfillstyle(SOLID_FILL,14);
floodfill(220,150,14);
//2-17
for(l=0;l<5;l++)
{
setcolor(MAGENTA);
circle(60+(l*20),390,6);
setfillstyle(SOLID_FILL,5);
floodfill(60+(l*20),390,5);
}
for(l=1;l<2;l++)
{
circle(140,390-(l*20),6);
setfillstyle(SOLID_FILL,5);
floodfill(140,390-(l*20),5);
}
setcolor(YELLOW);
circle(140,350,6);
setfillstyle(SOLID_FILL,14);
floodfill(140,350,14);
//26-30
for(l=0;l<8;l++)
{
setcolor(RED);
circle(220+(l*20),310,6);
setfillstyle(SOLID_FILL,4);
floodfill(220+(l*20),310,4);
}
setcolor(YELLOW);
circle(380,310,6);
setfillstyle(SOLID_FILL,14);
floodfill(380,310,14);
//71-94
for(l=0;l<7;l++)
{
setcolor(LIGHTRED);
circle(260+(l*20),110,6);
setfillstyle(SOLID_FILL,12);
floodfill(260+(l*20),110,12);
}
for(l=1;l<4;l++)
{
circle(260,110-(l*20),6);
setfillstyle(SOLID_FILL,12);
floodfill(260,110-(l*20),12);
}
setcolor(YELLOW);
circle(260,30,6);
setfillstyle(SOLID_FILL,14);
floodfill(260,30,14);
//41-38
for(l=0;l<5;l++)
{
setcolor(BLUE);
circle(20+(l*20),270,6);
setfillstyle(SOLID_FILL,1);
floodfill(20+(l*20),270,1);
}
for(l=1;l<2;l++)
{
circle(20,270-(l*20),6);
setfillstyle(SOLID_FILL,1);
floodfill(20,270-(l*20),1);
}
setcolor(YELLOW);
circle(20,230,6);
setfillstyle(SOLID_FILL,14);
floodfill(20,230,14);
//83-80
for(l=0;l<5;l++)
{
setcolor(GREEN);
circle(20+(l*20),70,6);
setfillstyle(SOLID_FILL,2);
floodfill(20+(l*20),70,2);
}
for(l=1;l<2;l++)
{
circle(20,70+(l*20),6);
setfillstyle(SOLID_FILL,2);
floodfill(20,70+(l*20),2);
}
setcolor(YELLOW);
circle(100,70,6);
setfillstyle(SOLID_FILL,14);
floodfill(100,70,14);
//31-48
for(l=0;l<5;l++)
{
setcolor(DARKGRAY);
circle(300+(l*20),230,6);
setfillstyle(SOLID_FILL,8);
floodfill(300+(l*20),230,8);
}
for(l=1;l<2;l++)
{
circle(380,230+(l*20),6);
setfillstyle(SOLID_FILL,8);
floodfill(380,230+(l*20),8);
}
setcolor(YELLOW);
circle(300,230,6);
setfillstyle(SOLID_FILL,14);
floodfill(300,230,14);

//numbering
setcolor(WHITE);
char str[5];
for(i=0;i<10;i++)
{
 if(i%2==0)
  {
	 for(l=0;l<10;l++)
	   {  itoa(k,str,10);
	    outtextxy(5+(l*40),10+5+(i*40),str);


	    if(k==A)
	    { setcolor(BLUE);
	      circle(20+(40*l),30+(i*40),9);
	      setfillstyle(SOLID_FILL,BLUE);
	      floodfill(20+(40*l),30+(i*40),BLUE);
                    setcolor(WHITE);
	    }


	    if(k==B)
	    { setcolor(YELLOW);
	      circle(20+9+(40*l),30+(i*40),9);
	      setfillstyle(SOLID_FILL,YELLOW);
	      floodfill(20+9+(40*l),30+(i*40),YELLOW);
                    setcolor(WHITE);
	    }


	    k--;


	   }
  }

  else
   {
	  for(l=0;l<10;l++)
	  {

	    itoa(k,str,10);
	    outtextxy(5+360-(l*40),10+5+(i*40),str);

	    if(k==A)
	    { setcolor(BLUE);
	      circle(380-(40*l),30+(i*40),9);
	      setfillstyle(SOLID_FILL,BLUE);
	      floodfill(380-(40*l),30+(i*40),BLUE);
                    setcolor(WHITE);
	    }



	    if(k==B)
	    { setcolor(YELLOW);
	      circle(380+9-(40*l),30+(i*40),9);
	      setfillstyle(SOLID_FILL,YELLOW);
	      floodfill(380+9-(40*l),30+(i*40),YELLOW);
                    setcolor(WHITE);
	    }



	    k--;
	  }
   }

}

//**********************************
setcolor(GREEN);
outtextxy(2,30,"DONE");
outtextxy(2,390,"START");
//***********************************
//writing snakes and ladder
setcolor(RED);
settextstyle(SIMPLEX_FONT,HORIZ_DIR,5);
outtextxy(70,415,"SNAKES AND LADDER");
//***********************************
char words[10];
setcolor(BLUE);
itoa(A,words,10);
outtextxy(10,415,words);
setcolor(14);
itoa(B,words,10);
outtextxy(500,415,words);
//***********************************
//writing about stuff
settextstyle(SIMPLEX_FONT,HORIZ_DIR,1);
//first crcle
setlinestyle(0,0,3);
line(405,320,610,320);
setlinestyle(0,0,1);
setcolor(BLUE);
circle(440,390,10);
setfillstyle(SOLID_FILL,1);
floodfill(440,390,1);
setlinestyle(DOTTED_LINE,0,5);
line(465,390,485,390);
outtextxy(495,370,player1);
//2nd circle
setcolor(YELLOW);
circle(440,340,10);
setfillstyle(SOLID_FILL,14);
floodfill(440,340,14);
setlinestyle(DOTTED_LINE,0,5);
line(465,340,485,340);
outtextxy(495,320,player2);
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
setcolor(WHITE);
rectangle(500,290,450,150);
setfillstyle(SOLID_FILL,15);\
floodfill(455,185,15);
setcolor(BLACK);
int y=230;
for(int m=1;m<7;m++)
{
if(D==0)
{
break;
}
if(m%2==0)
{
y=y-((m-1)*20);
circle(475,y,10);
}
else
{
y=y+((m-1)*20);
circle(475,y,10);
}
if(m==D)
{
break;
}
}
setcolor(RED);
outtextxy(520,230,"ROLL!!");
outtextxy(520,210,"DICE");
outtextxy(520,190,"AFTER");



//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
setcolor(BLUE);
settextstyle(SIMPLEX_FONT,HORIZ_DIR,2);
outtextxy(440,15,"LETS PLAY");
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
settextstyle(SIMPLEX_FONT,HORIZ_DIR,1);
if(f)
{
setcolor(BLUE);
outtextxy(550,370,"TURN");
//gotoxy(460,120);
}
else
{
setcolor(YELLOW);
outtextxy(550,320,"TURN");
//gotoxy(460,120);
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
setcolor(YELLOW);
line(405,70,610,70);
line(405,100,610,100);
setcolor(RED);
if(A>B)
{
outtextxy(425,70,"PLAYER 1 IS LEADING");
}
else if(B>A)
{
outtextxy(425,70,"PLAYER 2 IS LEADING");
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
setcolor(GREEN);
settextstyle(0,0,4);
outtextxy(425,110,"MOVE!!!!");
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
settextstyle(0,0,1);
setlinestyle(0,0,3);
setcolor(WHITE);
rectangle(610,410,405,10);
setlinestyle(0,0,1);






}//END OF DISPLAY




int check(int ch)
{
//for ladder
if(ch==9) return 14;
if(ch==32) return 98;
if(ch==51) return 67;
if(ch==38) return 60;
if(ch==16) return 36;
if(ch==90) return 91;
if(ch==64) return 81;
//for snakes
if(ch==65) return 59;
if(ch==17) return 2;
if(ch==94) return 71;
if(ch==30) return 26;
if(ch==38) return 41;
if(ch==83) return 80 ;
if(ch==48) return 31;
return ch;
}