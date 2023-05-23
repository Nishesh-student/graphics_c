#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
int gd=DETECT,gm,i,x=40,y=380,r=20;
initgraph(&gd,&gm,"c:\\TurboC3\\bgi");

for(i=2;i<=10;i++){
line(20,400,800,400);
circle(x,y,r);
x=x+60;
if(i%2==0){
	y=320;
	}
else{
	y=380;
	}
delay(500);
cleardevice();
line(20,400,800,400);
circle(x,y,r);
}
getch();
closegraph();
return 0;
}