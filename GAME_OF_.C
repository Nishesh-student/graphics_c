#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int g1=260,g2=230,g3=240,g4=250,g5=260,g6=230,g7=280,g8=250,g9=260,g10=200
,g11=260,g12=230,g13=260,g14=205,g15=240,g16=210,g17=260,g18=205,g19=280
,g20=210,x1=260,y1=190,r1=10;
int x=250,y=380,r=10,lp1=220,lp2=380,lp3=200,lp4=400;
void gk(){

//goal keeper
line(g1,g2,g3,g4);
line(g5,g6,g7,g8);
line(g9,g10,g11,g12);
line(g13,g14,g15,g16);
line(g17,g18,g19,g20);
circle(x1,y1,r1);
}
void jump(int a){
/*cleardevice();*/


//goal post
	line(20,250,500,250);
	line(70,100,450,100);
	line(70,100,20,250);
	line(450,100,500,250);
//ground
	line(20,400,600,400);
//ball
	circle(x,y,r);
//moving boy
	line(lp1,lp2,lp3,lp4);//leg l
	line(220,380,240,400);//leg r
	line(220,380,220,350);//body
	line(220,355,200,360);//hand l
	line(220,355,240,360);//hand r
	circle(220,340,10);//head

	//goal keeper
	if(a==2){
	/*cleardevice();*/
	line(350,150,300,180);	    //body
	line(300,180,280,170);      //leg l
	line(300,180,320,200);      //leg r
	line(345,155,340,140);      //hand l
	line(345,155,370,160);      //hand r
	circle(355,145,10);         //head }
	}
	if(a==1){
       /*	cleardevice();*/
	line(170,150,190,180);
line(190,180,180,200);
line(190,180,210,170);
line(175,155,150,145);
line(175,155,180,135);
circle(165,140,10);
}
}
void mid(int m){

/*cleardevice();*/


//goal post
	line(20,250,500,250);
	line(70,100,450,100);
	line(70,100,20,250);
	line(450,100,500,250);
//ground
	line(20,400,600,400);
//ball
	circle(x,y,r);
//moving boy
	line(lp1,lp2,lp3,lp4);//leg l
	line(220,380,240,400);//leg r
	line(220,380,220,350);//body
	line(220,355,200,360);//hand l
	line(220,355,240,360);//hand r
	circle(220,340,10);//head


	//goal keeper
	if(m==2){
		line(380,175,335,200);
		line(375,180,370,160);
		line(375,180,385,165);
		line(335,200,320,180);
		line(335,200,325,175);
		circle(390,170,10);
	}
	else if(m==1){
		line(170,210,140,200);
		line(170,210,190,205);
		line(170,210,185,200);
		line(145,200,140,185);
		line(145,200,130,185);
		circle(135,195,10);
	}
}


void fall(int b){
/*cleardevice();*/


	//goal post
	line(20,250,500,250);
	line(70,100,450,100);
	line(70,100,20,250);
	line(450,100,500,250);
//ground
	line(20,400,600,400);
//ball
	circle(x,y,r);
//moving boy
	line(lp1,lp2,lp3,lp4);//leg l
	line(220,380,240,400);//leg r
	line(220,380,220,350);//body
	line(220,355,200,360);//hand l
	line(220,355,240,360);//hand r
	circle(220,340,10);//head

	//goal keeper
	if(b==2){
	/*cleardevice();    */
	line(380,240,340,240); //body
	line(340,240,330,210);                //leg l
	line(340,240,315,230);                //leg r
	line(380,240,390,210);                //hand l
	line(380,240,385,210);                //hand r
	circle(390,230,10);                       //head
	}
	if(b==1){
	/*cleardevice();*/
	line(130,240,170,240);
line(170,240,185,220);
line(170,240,175,220);
line(130,240,120,220);
line(130,240,130,220);
circle(120,230,10);
}

}
int main(){
int gd=DETECT,gm,c,j,i;
//here g1-20,x1,y1,r1 are pts of goal keeper and
//x,y,r and lp1-4 are pts of boy
initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
//goal post
line(20,250,500,250);
line(70,100,450,100);
line(70,100,20,250);
line(450,100,500,250);
//ground
line(20,400,600,400);
//ball
circle(x,y,r);
//moving boy
line(lp1,lp2,lp3,lp4);//leg l
line(220,380,240,400);//leg r
line(220,380,220,350);//body
line(220,355,200,360);//hand l
line(220,355,240,360);//hand r
circle(220,340,10);//head
//goal keeper
gk();
// moving leg
for(j=1;j<=2;j++){

//goal keeper
gk();
if(j==1){
	lp3=190;
	lp4=390;
}
if(j==2){
	lp3=250;
	lp4=390;
}
delay(250);
cleardevice();
line(20,250,500,250);
line(70,100,450,100);
line(70,100,20,250);
line(450,100,500,250);
//ground
line(20,400,600,400);
//ball
circle(x,y,r);
//boy
line(lp1,lp2,lp3,lp4);//leg l
line(220,380,240,400);//leg r
line(220,380,220,350);//body
line(220,355,200,360);//hand l
line(220,355,240,360);//hand r
circle(220,340,10);//head
}

//goal keeper
gk();
printf("\n Enter 1 for right corner and 2 for left corner !\n");
printf("\n Enter the choice: ");
scanf("%d",&c);

//moving ball
for(i=1;i<=8;i++){


//goal keeper
//gk();
	 delay(250);
	 cleardevice();
	//goal post
	line(20,250,500,250);
	line(70,100,450,100);
	line(70,100,20,250);
	line(450,100,500,250);
	line(20,400,600,400);//ground
	//moving leg boy
	line(lp1,lp2,lp3,lp4);//leg l
	line(220,380,240,400);//leg r
	line(220,380,220,350);//body
	line(220,355,200,360);//hand l
	line(220,355,240,360);//hand r
	circle(220,340,10);//head
	//goal keeper
	//gk();
	//moving ball
	y=y-30;
	if(c==1){
	if(i>=5){
		x=400;
		}
	else{
		x=x+40;
	    }
	    }
	else if(c==2){
		if(i>=5){
		x=100;
		}
		else{
		x=x-40;
		}
		}
		circle(x,y,r);
	  if(i<4){
		gk();
		}
	  else if(i==5){
	       //	delay(350);
		cleardevice();
		jump(c);
		}
	  else if(i==6){
		cleardevice();
		mid(c);
		}
	  else if(i==7){
		//delay(350);
		cleardevice();
		fall(c);
		}


       /*	if(i==4){
	delay(350);
	cleardevice();
	      jump(c);

	}
	if(i==7){
	delay(350);
	cleardevice();
		fall(c);
	}*/


}
cleardevice();
outtextxy(300,250,"GOAL");
end:
getch();
closegraph();
return 0;
}