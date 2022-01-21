#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int i=0;

setbkcolor(WHITE);
setcolor(BLUE);


rectangle(300,200,400,300);
rectangle(250,250,350,350);


getch();
closegraph();
return 0;
}
