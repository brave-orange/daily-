#include<graphics.h>
#include<conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define PI 3.1415926
int main()
{  
	int x,y,x1,y1,x2,y2,i;double jiao,jiao2,jiao3;
	initgraph(900,480);	
	setbkcolor(RGB(25,16,20));
	cleardevice();
	circle(450,240,150);
    for(i=0;i<12;i++)
	{
		x=(int)(150*cos(i*(PI/6)));
		y=(int)(150*sin(i*(PI/6)));
		outtextxy(446+x,236+y,"*");
	}
    outtextxy(445,95,"12");
    outtextxy(585,235,"3");
	outtextxy(450,375,"6");
	outtextxy(305,235,"9");
    while(true)
	{   
		struct tm *now;
		time_t tval;
		tval = time(NULL);
        now = localtime(&tval);
		clearcircle(450,240,130);
		jiao=(PI/30)*now->tm_sec;
		setlinecolor(RGB(25,60,230));
		x=(int)(120*cos(jiao-PI/2));
		y=(int)(120*sin(jiao-PI/2));
		jiao2=(PI/30)*now->tm_min;
		x1=(int)(100*cos(jiao2-PI/2));
		y1=(int)(100*sin(jiao2-PI/2));
		jiao3=(PI/6)*now->tm_hour+(PI/360)*(now->tm_min);
		x2=(int)(80*cos(jiao3-PI/2));
		y2=(int)(80*sin(jiao3-PI/2));
		line(450,240,448+x,236+y);
        line(450,240,448+x1,236+y1);
		line(450,240,448+x2,236+y2); 
		Sleep(41);
		if(jiao==PI*2)
		{
			jiao2+=(PI/30);
			jiao=0;
		}
		if(jiao2==PI*2){
			jiao2=0;
		}
		if(jiao3==PI*2)
		{
			jiao3=0;
		}
		
	}
	 
	getch();
	closegraph();
	return 0;
}
