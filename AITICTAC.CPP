#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<iostream.h>
#include<math.h>
int a[9]={0,0,0,0,0,0,0,0,0},turn=0,user=1;
void rustam()
{
	setbkcolor(5);
	setcolor(14);
	settextstyle(7,0,9);
	outtextxy(100,5,"WELCOME");
	outtextxy(250,80,"TO");
	settextstyle(3,0,9);
	setfillstyle(4,15);
	bar(0,190,getmaxx(),200);
	bar(0,470,getmaxx(),480);
	bar(0,190,10,getmaxy());
	bar(625,190,640,getmaxy());
	setcolor(14);
	outtextxy(65,180,"TIC     TIC");
	outtextxy(230,275," TAC");
	outtextxy(65,370,"TOE    TOE");
	setcolor(11);
	settextstyle(7,0,8);
	outtextxy(30,290,"MADE     BY");
	settextstyle(7,0,4);
	setcolor(15);
	outtextxy(220,380,"  CrunkBoy ");
	outtextxy(220,420,"  RUSTAM  " );

}
void smiley()
{
	setfillstyle(1,14);
	fillellipse(40,240,27,27);
	fillellipse(590,240,27,27);
	for(int i=1;i<=200;i+=80)
	{
		fillellipse(240+i,240,27,27);
	}
	setfillstyle(1,16);
	fillellipse(30,230,4,6);
	fillellipse(50,230,4,6);
	setcolor(BLACK);
	ellipse(40,245,180,360,12,10);
	for(int j=1;j<=200;j+=80)
	{
		setfillstyle(1,16);
		fillellipse(230+j,230,3,5);
		fillellipse(250+j,230,3,5);
		setcolor(BLACK);
		ellipse(240+j,245,180,360,12,10);
	}
	setfillstyle(1,16);
	fillellipse(580,230,3,5);
	fillellipse(600,230,3,5);
	setcolor(16);
	ellipse(590,245,180,360,12,10);
}
void theme()
{
	setbkcolor(4);
	setfillstyle(1,6);
	bar(150,100,160,350);
	bar(150,100,490,110);
	bar(490,100,500,350);
	bar(150,350,500,360);
	setfillstyle(9,1);
	bar(260,110,265,350);
	bar(380,110,385,350);
	bar(160,190,490,195);
	bar(160,270,490,275);
}
void smiley_n_cross()
{
	setfillstyle(1,14);
	fillellipse(210,150,28,28);
	setfillstyle(1,6);
	fillellipse(200,140,3,5);
	fillellipse(220,140,3,5);
	ellipse(210,155,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(320,150,28,28);
	setfillstyle(1,6);
	fillellipse(310,140,3,5);
	fillellipse(330,140,3,5);
	ellipse(320,155,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(440,150,28,28);
	setfillstyle(1,6);
	fillellipse(430,140,3,5);
	fillellipse(450,140,3,5);
	ellipse(440,155,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(210,230,28,28);
	setfillstyle(1,6);
	fillellipse(200,220,3,5);
	fillellipse(220,220,3,5);
	ellipse(210,235,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(320,230,28,28);
	setfillstyle(1,6);
	fillellipse(310,220,3,5);
	fillellipse(330,220,3,5);
	ellipse(320,235,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(440,230,28,28);
	setfillstyle(1,6);
	fillellipse(430,220,3,5);
	fillellipse(450,220,3,5);
	ellipse(440,235,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(210,310,28,28);
	setfillstyle(1,6);
	fillellipse(200,300,3,5);
	fillellipse(220,300,3,5);
	ellipse(210,315,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(320,310,28,28);
	setfillstyle(1,6);
	fillellipse(310,300,3,5);
	fillellipse(330,300,3,5);
	ellipse(320,315,180,360,12,10);
	setfillstyle(1,14);
	fillellipse(440,310,28,28);
	setfillstyle(1,6);
	fillellipse(430,300,3,5);
	fillellipse(450,300,3,5);
	ellipse(440,315,180,360,12,10);
	setcolor(15);
}
int check(int x)
{
	switch(x)
	{
		case 1: if(a[0]==0)
			return 1;
			else
			return 0;
		case 2: if(a[1]==0)
			return 1;
			else
			return 0;
		case 3: if(a[2]==0)
			return 1;
			else
			return 0;
		case 4: if(a[3]==0)
			return 1;
			else
			return 0;
		case 5: if(a[4]==0)
			return 1;
			else
			return 0;
		case 6: if(a[5]==0)
			return 1;
			else
			return 0;
		case 7: if(a[6]==0)
			return 1;
			else
			return 0;
		case 8: if(a[7]==0)
			return 1;
			else
			return 0;
		case 9: if(a[8]==0)
			return 1;
			else
			return 0;
	}
	return 0;
}
/*char win()
{
	//Win Conditions
	if(a[0]==2&& a[1]==2&&a[2]!=1)
		return '3';
	if(a[0]==2&& a[2]==2&&a[1]!=1)
		return '2';
	if(a[0]==2&&a[5]==2&&a[8]!=1)
		return '9';
	if(a[0]==2&&a[8]==2&&a[5]!=1)
		return '6';
	if(a[0]==2&&a[3]==2&&a[6]!=1)
		return '7';
	if(a[0]==2&&a[6]==2&&a[3]!=1)
		return '4';
	if(a[0]==2&&a[1]==2&&a[2]!=1)
		return '3';
	if(a[1]==2&&a[4]==2&&a[7]!=1)
		return '8';
	if(a[1]==2&&a[7]==2&&a[4]!=1);
		return '5';
	if(a[1]==2&&a[2]==2&&a[0]!=1)
		return '1';
	if(a[1]==2&&a[0]==2&&a[2]!=1)
		return '3';
	if(a[2]==2&&a[4]==2&&a[6]!=1)
		return '7';
	if(a[2]==2&&a[6]==2&&a[4]!=1)
		return '5';
	if(a[2]==2&&a[5]==2&&a[8]!=1)
		return '9';
	if(a[2]==2&&a[8]==2&&a[5]!=1)
		return '6';
	if(a[2]==2&&a[1]==2&&a[0]!=1)
		return '1';
	if(a[2]==2&&a[0]==2&&a[1]!=1)
		return '2';
	if(a[3]==2&&a[0]==2&&a[6]!=1)
		return '7';
	if(a[3]==2&&a[6]==2&&a[0]!=1)
		return '1';
	if(a[3]==2&&a[4]==2&&a[5]!=1)
		return '6';
	if(a[3]==2&&a[5]==2&&a[4]!=1)
		return '5';
	if(a[4]==2&&a[5]==2&&a[3]!=1)
		return '4';
	if(a[4]==2&&a[3]==2&&a[5]!=1)
		return '6';
	if(a[4]==2&&a[0]==2&&a[8]!=1)
		return '9';
	if(a[4]==2&&a[8]==2&&a[0]!=1)
		return '1';
	if(a[4]==2&&a[1]==2&&a[7]!=1)
		return '8';
	if(a[4]==2&&a[7]==2&&a[1]!=1)
		return '2';
	if(a[4]==2&&a[2]==2&&a[6]!=1)
		return '7';
	if(a[4]==2&&a[6]==2&&a[2]!=1)
		return '3';
	if(a[5]==2&&a[2]==2&&a[8]!=1)
		return '9';
	if(a[5]==2&&a[8]==2&&a[2]!=1)
		return '3';
	if(a[5]==2&&a[4]==2&&a[3]!=1)
		return '4';
	if(a[5]==2&&a[3]==2&&a[4]!=1)
		return '5';
	if(a[6]==2&&a[3]==2&&a[0]!=1)
		return '1';
	if(a[6]==2&&a[0]==2&&a[3]!=1)
		return '4';
	if(a[6]==2&&a[7]==2&&a[8]!=1)
		return '9';
	if(a[6]==2&&a[8]==2&&a[7]!=1)
		return '8';
	if(a[6]==2&&a[4]==2&&a[2]!=1)
		return '3';
	if(a[6]==2&&a[2]==2&&a[4]!=1)
		return '5';
	if(a[7]==2&&a[6]==2&&a[8]!=1)
		return '9';
	if(a[7]==2&&a[8]==2&&a[6]!=1)
		return '7';
	if(a[7]==2&&a[4]==2&&a[1]!=1)
		return '2';
	if(a[7]==2&&a[1]==2&&a[4]!=1)
		return '5';
	if(a[8]==2&&a[7]==2&&a[6]!=1)
		return '7';
	if(a[8]==2&&a[6]==2&&a[7]!=1)
		return '8';
	if(a[8]==2&&a[2]==2&&a[5]!=1)
		return '6';
	if(a[8]==2&&a[5]==2&&a[2]!=1)
		return '3';
	if(a[8]==2&&a[4]==2&&a[0]!=1)
		return '1';
	if(a[8]==2&&a[0]==2&&a[4]!=1);
		return '5';
	return '0';
}
char check_draw()
{
	if(a[0]==1&& a[1]==1&&a[2]==0)
		return '3';
	if(a[0]==1&& a[2]==1&&a[1]==0)
		return '2';
	if(a[0]==1&&a[5]==1&&a[8]==0)
		return '9';
	if(a[0]==1&&a[8]==1&&a[5]==0)
		return '6';
	if(a[0]==1&&a[3]==1&&a[6]==0)
		return '7';
	if(a[0]==1&&a[6]==1&&a[3]==0)
		return '4';
	if(a[0]==1&&a[1]==1&&a[2]==0)
		return '3';
	if(a[1]==1&&a[4]==1&&a[7]==0)
		return '8';
	if(a[1]==1&&a[7]==1&&a[4]==0);
		return '5';
	if(a[1]==1&&a[2]==1&&a[0]==0)
		return '1';
	if(a[1]==1&&a[0]==1&&a[2]==0)
		return '3';
	if(a[2]==1&&a[4]==1&&a[6]==0)
		return '7';
	if(a[2]==1&&a[6]==1&&a[4]==0)
		return '5';
	if(a[2]==1&&a[5]==1&&a[8]==0)
		return '9';
	if(a[2]==1&&a[8]==1&&a[5]==0)
		return '6';
	if(a[2]==1&&a[1]==1&&a[0]==0)
		return '1';
	if(a[2]==1&&a[0]==1&&a[1]==0)
		return '2';
	if(a[3]==1&&a[0]==1&&a[6]==0)
		return '7';
	if(a[3]==1&&a[6]==1&&a[0]==0)
		return '1';
	if(a[3]==1&&a[4]==1&&a[5]==0)
		return '6';
	if(a[3]==1&&a[5]==1&&a[4]==0)
		return '5';
	if(a[4]==1&&a[5]==1&&a[3]==0)
		return '4';
	if(a[4]==1&&a[3]==1&&a[5]==0)
		return '6';
	if(a[4]==1&&a[0]==1&&a[8]==0)
		return '9';
	if(a[4]==1&&a[8]==1&&a[0]==0)
		return '1';
	if(a[4]==1&&a[1]==1&&a[7]==0)
		return '8';
	if(a[4]==1&&a[7]==1&&a[1]==0)
		return '2';
	if(a[4]==1&&a[2]==1&&a[6]==0)
		return '7';
	if(a[4]==1&&a[6]==1&&a[2]==0)
		return '3';
	if(a[5]==1&&a[2]==1&&a[8]==0)
		return '9';
	if(a[5]==1&&a[8]==1&&a[2]==0)
		return '3';
	if(a[5]==1&&a[4]==1&&a[3]==0)
		return '4';
	if(a[5]==1&&a[3]==1&&a[4]==0)
		return '5';
	if(a[6]==1&&a[3]==1&&a[0]==0)
		return '1';
	if(a[6]==1&&a[0]==1&&a[3]==0)
		return '4';
	if(a[6]==1&&a[7]==1&&a[8]==0)
		return '9';
	if(a[6]==1&&a[8]==1&&a[7]==0)
		return '8';
	if(a[6]==1&&a[4]==1&&a[2]==0)
		return '3';
	if(a[6]==1&&a[2]==1&&a[4]==0)
		return '5';
	if(a[7]==1&&a[6]==1&&a[8]==0)
		return '9';
	if(a[7]==1&&a[8]==1&&a[6]==0)
		return '7';
	if(a[7]==1&&a[4]==1&&a[1]==0)
		return '2';
	if(a[7]==1&&a[1]==1&&a[4]==0)
		return '5';
	if(a[8]==1&&a[7]==1&&a[6]==0)
		return '7';
	if(a[8]==1&&a[6]==1&&a[7]==0)
		return '8';
	if(a[8]==1&&a[2]==1&&a[5]==0)
		return '6';
	if(a[8]==1&&a[5]==1&&a[2]==0)
		return '3';
	if(a[8]==1&&a[4]==1&&a[0]==0)
		return '1';
	if(a[8]==1&&a[0]==1&&a[4]==0);
		return '5';
		return '0';
}
*/
char computer()
{
	char ch;
	if(a[4]==0)
	{
		return '5';
	}
	if(a[0]==0)
	{
		return '1';
	}
	if(a[0]==a[1] &&a[2]==0)
	{
		return '3';
	}
	if(a[0]==a[2]&&a[1]==0)
	{
		return '2';
	}
	if(a[0]==a[4]&&a[8]==0)
	{
		return '9';
	}
	if(a[0]==a[8]&&a[4]==0)
	{
		return '5';
	}
	if(a[0]==a[3]&&a[6]==0)
	{
		return '7';
	}
	if(a[0]==a[6]&&a[3]==0)
	{
		return '4';
	}
	if(a[1]==a[4]&&a[7]==0)
	{
		return '8';
	}
	if(a[1]==a[7]&&a[4]==0)
	{
		return '5';
	}
	if(a[1]==a[0]&&a[2]==0)
	{
		return '3';
	}
	if(a[1]==a[2]&&a[0]==0)
	{
		return '1';
	}
	if(a[2]==a[4]&&a[6]==0)
	{
		return '7';
	}
	if(a[2]==a[6]&&a[4]==0)
	{
		return '5';
	}
	if(a[2]==a[5]&&a[8]==0)
	{
		return '9';
	}
	if(a[2]==a[0]&&a[1]==0)
	{
		return '2';
	}
	if(a[2]==a[1]&&a[0]==0)
	{
		return '1';
	}
	if(a[2]==a[8]&&a[5]==0)
	{
		return '6';
	}
	if(a[3]==a[4]&&a[5]==0)
	{
		return '6';
	}
	if(a[3]==a[5]&&a[4]==0)
	{
		return '5';
	}
	if(a[3]==a[0]&&a[6]==0)
	{
		return '7';
	}
	if(a[3]==a[6]&&a[0]==0)
	{
		return '1';
	}
	if(a[4]==a[0]&a[8]==0)
	{
		return '9';
	}
	if(a[4]==a[8]&&a[0]==0)
	{
		return '1';
	}
	if(a[4]==a[1]&&a[7]==0)
	{
		return '8';
	}
	if(a[4]==a[7]&&a[1]==0)
	{
		return '2';
	}
	if(a[4]==a[2]&&a[6]==0)
	{
		return '7';
	}
	if(a[4]==a[6]&&a[2]==0)
	{
		return '3';
	}
	if(a[4]==a[3]&&a[5]==0)
	{
		return '6';
	}
	if(a[4]==a[5]&&a[3]==0)
	{
		return '4';
	}
	if(a[5]==a[2]&&a[8]==0)
	{
		return '9';
	}
	if(a[5]==a[8]&&a[2]==0)
	{
		return '3';
	}
	if(a[5]==a[4]&&a[3]==0)
	{
		return '4';
	}
	if(a[5]==a[3]&&a[4]==0)
	{
		return '5';
	}
	if(a[6]==a[0]&&a[3]==0)
	{
		return '4';
	}
	if(a[6]==a[3]&&a[0]==0)
	{
		return '1';
	}
	if(a[6]==a[7]&&a[8]==0)
	{
		return '9';
	}
	if(a[6]==a[8]&&a[7]==0)
	{
		return '8';
	}
	if(a[7]==a[6]&&a[8]==0)
	{
		return '9';
	}
	if(a[7]==a[8]&&a[6]==0)
	{
		return '7';
	}
	if(a[7]==a[4]&&a[1]==0)
	{
		return '2';
	}
	if(a[7]==a[1]&&a[4]==0)
	{
		return '5';
	}
	if(a[8]==a[0]&&a[4]==0)
	{
		return '5';
	}
	if(a[8]==a[4]&&a[0]==0)
	{
		return '1';
	}
	if(a[8]==a[5]&&a[2]==0)
	{
		return '3';
	}
	if(a[8]==a[2]&&a[5]==0)
	{
		return '6';
	}
	if(a[8]==a[6]&&a[7]==0)
	{
		return '8';
	}
	if(a[8]==a[7]&&a[6]==0)
	{
		return '7';
	}
	if(a[0]==a[8] && a[1]==0)
	{
		return '2';
	}
	if(a[2]==a[6] && a[1]==0)
	{
		return '2';
	}
	if(a[1]==0)
		return '2';
	if(a[2]==0)
		return  '3';
	if(a[7]==0)
		return '8';
	if(a[5]==0)
		return '6';
	if(a[3]==0)
		return '4';

}
int display(int x,int y)
{
	int w[26]={170,135,200,135,210,110,220,135,
		   250,135,235,150,250,165,220,165,
		   210,190,200,165,170,165,185,150,170,135};
	int r[26]={280,135,310,135,320,110,330,135,
		   360,135,345,150,360,165,330,165,
		   320,190,310,165,280,165,295,150,280,135};
	int e[26]={390,135,420,135,430,110,440,135,
		   470,135,455,150,470,165,440,165,
		   430,190,420,165,390,165,405,150,390,135};
	int q[26]={170,215,200,215,210,190,220,215,
		   250,215,235,230,250,245,220,245,
		   210,270,200,245,170,245,185,230,170,215};
	int t[26]={280,215,310,215,320,190,330,215,
		   360,215,345,230,360,245,330,245,
		   320,270,310,245,280,245,295,230,280,215};
	int z[26]={390,215,420,215,430,190,440,215,
		   470,215,455,230,470,245,440,245,
		   430,270,420,245,390,245,405,230,390,215};
	int io[26]={170,295,200,295,210,270,220,295,
		    250,295,235,310,250,325,220,325,
		    210,350,200,325,170,325,185,310,170,295};
	int oi[26]={280,295,310,295,320,270,330,295,
		    360,295,345,310,360,325,330,325,
		    320,350,310,325,280,325,295,310,280,295};
	int ioi[26]={390,295,420,295,430,270,440,295,
		     470,295,455,310,470,325,440,325,
		     430,350,420,325,390,325,405,310,390,295};
	switch(y)
	{
		case 1: if(x==1)
			{

				a[0]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,w);
			 }
			 else
			 {
				 a[0]=2;
				 user=1;
				 setfillstyle(1,7);
				 ellipse(210,145,180,0,40,30);
				 ellipse(210,145,180,0,40,10);
				 floodfill(220,160,15);
			 }
			 break;
		case 2:  if(x==1)
			 {
				a[1]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,r);
			 }
			 else
			 {
				a[1]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(325,145,180,0,40,30);
				ellipse(325,145,180,0,40,10);
				floodfill(335,160,15);
			 }
			 break;
		case 3: if(x==1)
			{
				a[2]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,e);
			}
			else
			{
				a[2]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(440,145,180,0,40,30);
				ellipse(440,145,180,0,40,10);
				floodfill(455,160,15);
			}
			break;
		case 4: if(x==1)
			{
				a[3]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,q);
			}
			else
			{
				a[3]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(210,215,180,0,40,30);
				ellipse(210,215,180,0,40,10);
				floodfill(220,230,15);
			}
			break;
		case 5: if(x==1)
			{
				a[4]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,t);
			}
			else
			{
				a[4]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(325,215,180,0,40,30);
				ellipse(325,215,180,0,40,10);
				floodfill(340,230,15);
			}
			break;
		case 6: if(x==1)
			{
				a[5]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,z);
			}
			else
			{
				a[5]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(440,215,180,0,40,30);
				ellipse(440,215,180,0,40,10);
				floodfill(455,230,15);
			}
			break;
		case 7: if(x==1)
			{
				a[6]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,io);
			 }
			 else
			 {
				a[6]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(210,285,180,0,40,30);
				ellipse(210,285,180,0,40,10);
				floodfill(220,300,15);
			 }
			 break;
		case 8: if(x==1)
			{
				a[7]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,oi);
			}
			else
			{
				a[7]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(325,285,180,0,40,30);
				ellipse(325,285,180,0,40,10);
				floodfill(340,300,15);
			}
			break;
		case 9: if(x==1)
			{
				a[8]=1;
				user=2;
				setfillstyle(1,7);
				fillpoly(13,ioi);
			}
			else
			{
				a[8]=2;
				user=1;
				setfillstyle(1,7);
				ellipse(440,285,180,0,40,30);
				ellipse(440,285,180,0,40,10);
				floodfill(450,300,15);
			}
	}
	return 0;
}
int winner(int q)
{
	switch(q)
	{
		case 1: if(a[0]==a[1]&&a[0]==a[2])
			{
				return 1;
			}
			if(a[0]==a[4]&&a[0]==a[8])
			{
				return 1;
			}
			if(a[0]==a[3]&&a[0]==a[6])
			{
				return 1;
			}
			return 0;
		case 2: if(a[1]==a[4]&&a[1]==a[7])
			{
				return 1;
			}
			if(a[1]==a[0]&&a[1]==a[2])
			{
				return 1;
			}
			return 0;
		case 3: if(a[2]==a[1]&&a[2]==a[0])
			{
				return 1;
			}
			if(a[2]==a[4]&&a[2]==a[6])
			{
				return 1;
			}
			if(a[2]==a[5]&&a[2]==a[8])
			{
				return 1;
			}
			return 0;
		case 4: if(a[3]==a[4]&&a[3]==a[5])
			{
				return 1;
			}
			if(a[3]==a[0]&&a[3]==a[6])
			{
				return 1;
			}
			return 0;
		case 5: if(a[4]==a[0]&&a[4]==a[8])
			{
				return 1;
			}
			if(a[4]==a[1]&&a[4]==a[7])
			{
				return 1;
			}
			if(a[4]==a[5]&&a[4]==a[3])
			{
				return 1;
			}
			if(a[4]==a[2]&&a[4]==a[6])
			{
				return 1;
			}
			return 0;
		case 6: if(a[5]==a[3]&&a[5]==a[4])
			{
				return 1;
			}
			if(a[5]==a[2]&&a[5]==a[8])
			{
				return 1;
			}
			return 0;
		case 7: if(a[6]==a[0]&&a[6]==a[3])
			{
				return 1;
			}
			if(a[6]==a[4]&&a[6]==a[2])
			{
				return 1;
			}
			if(a[6]==a[7]&&a[6]==a[8])
			{
				return 1;
			}
			return 0;
		case 8: if(a[7]==a[6]&&a[7]==a[8])
			{
				return 1;
			}
			if(a[7]==a[4]&&a[7]==a[1])
			{
				return 1;
			}
			return 0;
		case 9: if(a[8]==a[4]&&a[8]==a[0])
			{
				return 1;
			}
			if(a[8]==a[7]&&a[8]==a[6])
			{
				return 1;
			}
			if(a[8]==a[5]&&a[8]==a[2])
			{
				return 1;
			}
			return 0;
	 }
	 return 0;
}
int main(void)
{
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	/* initialize graphics and local variables */
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
	 /* read result of initialization */
	errorcode = graphresult();
	if(errorcode != grOk)  /* an error occurred */
	{
		 printf("Graphics error: %s\n", grapherrormsg(errorcode));
		 printf("Press any key to halt:");
		 getch();
		exit(1); /* terminate with an error code */
	}
	rustam();
	smiley();
	getch();
	cleardevice();
	theme();
	smiley_n_cross();
	int n,h=0;
	char ch;
	flushall();
	while(h!=9)
	{
		  if(user==1)
		  {
			  ch=getche();
		  }
		  else
		  {
			  ch=computer();
		  }
		  switch(ch)
		  {
			case '1':turn=check(1);
				 if(turn==1)
				 {
					display(user,1);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(1);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '2':turn=check(2);
				 if(turn==1)
				 {
					display(user,2);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(2);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '3':turn=check(3);
				 if(turn==1)
				 {
					display(user,3);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(3);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '4':turn=check(4);
				 if(turn==1)
				 {
					display(user,4);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(4);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '5':turn=check(5);
				 if(turn==1)
				 {
					display(user,5);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(5);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					 else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '6':turn=check(6);
				 if(turn==1)
				 {
					display(user,6);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(6);
				 if(n==1)
				{
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					 else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '7':turn=check(7);
				 if(turn==1)
				 {
					display(user,7);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(7);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '8':turn=check(8);
				 if(turn==1)
				 {
					display(user,8);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
					break;
				 }
				 n=winner(8);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
			case '9':turn=check(9);
				 if(turn==1)
				 {
					display(user,9);
					h++;
				 }
				 else
				 {
					outtextxy(20,20,"Wrong Input");
				 }
				 n=winner(9);
				 if(n==1)
				 {
					if(user==2)
					outtextxy(300,50,"Player 1 Win");
					 else
					outtextxy(300,50,"Player 2 Win");
					h=9;
				 }
				 break;
				default:
				ch=getch();
		  }
	}
	if(h==9)
	{
		printf("Draw");
	}
	getch();
	closegraph();
	return 0;
}