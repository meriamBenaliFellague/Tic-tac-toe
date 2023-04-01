#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void game_stracture();
int game(int x,int y);
int count_c(int z);
int main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,(char*)"");
initwindow(800,800,"the window");

int n1,n2,n=1;

game_stracture();

for(int i=0;i<9;i++){
printf("enter: 1.X or 2.O: ");
scanf("%d",&n1);
printf("enter number of square: ");
scanf("%d",&n2);

n=game(n1,n2);
if(n==0)
{
	break;
}
printf("%d",n);
}
cleardevice();
getch();
closegraph();
}



void game_stracture()
{
	setcolor(14);
line(500,750,500,100);
line(250,750,250,100);
line(50,300,700,300);
line(50,550,700,550);
}

int game(int x,int y)
{int h;
	if(x==1)
{
setcolor(4);	
switch(y)
{
case 1:line(60,290,240,110);line(240,290,60,110);break;
case 2:line(260,290,490,110);line(490,290,260,110);break;
case 3:line(510,110,690,290);line(510,290,690,110);break;
case 4:line(60,310,240,540);line(60,540,240,310);break;
case 5:line(260,310,490,540);line(260,540,490,310);break;
case 6:line(510,310,690,540);line(510,540,690,310);break;
case 7:line(60,560,240,740);line(60,740,240,560);break;
case 8:line(260,560,490,740);line(260,740,490,560);break;
case 9:line(510,740,690,560);line(510,560,690,740);break;
}
h=count_c(y);
if(h==0)
{
	return 0;
}
}else{setcolor(2);
switch(y)
{
case 1:circle(150,200,90);break;
case 2:circle(350,200,90);break;
case 3:circle(600,200,90);break;
case 4:circle(150,400,90);break;
case 5:circle(350,400,90);break;
case 6:circle(600,400,90);break;
case 7:circle(150,650,90);break;
case 8:circle(350,650,90);break;
case 9:circle(600,650,90);break;
h=count_c(y);
if(h==0)
{
	return 0;
}
}
}
}

int count_c(int z)
{int count=0;
	if(z==1||z==2||z==3)
	{
		count++;
	}else{count=0;}
	if(z==4||z==5||z==6)
	{
		count++;
	}else{count=0;}
	if(z==7||z==8||z==9)
	{
		count++;
	}else{count=0;}
	if(z==1||z==4||z==7)
	{
		count++;
	}else{count=0;}
	if(z==2||z==5||z==8)
	{
		count++;
	}else{count=0;}
	if(z==3||z==6||z==9)
	{
		count++;
	}else{count=0;}
	if(z==1||z==5||z==9)
	{
		count++;
	}else{count=0;}
	if(z==3||z==5||z==7)
	{
		count++;
	}else{count=0;}
	if(count==3)
	{
		return 0;
	}
}

