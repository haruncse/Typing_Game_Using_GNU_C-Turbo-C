#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#define true 1
#define false 0

///////////****************FUNCTION PROTOTYPE**********************//////////
void second_page();
void desktop1();
void page1();
void game();
void option();
void option1();
void option2();
void option3();
void option4();
void start();
void exit();
void load();
void password();
void harun_info();
void unvailed();
void submit();
void endf();
void pus();
////////////////////////////// global variable//////////////////////////////
     int Xpos,Ypos,button;
     int o=0;
     int cc=0,varified=0,final;
     char n[10];
//////////////////////////*INITMOUSE FUNCTION*/////////////////////////////
int initmouse()
{
     union REGS in,out;
     in.x.ax=0;
     int86(0x33,&in,&out);
     if(out.x.ax==0)
	return false;
     else
	return true;
}
//////////////////////////////*SHOWN MOUSE*/////////////////////////////////
void showmouse()
{
     union REGS in ,out;
     in.x.ax=1;
     int86(0x33,&in,&out);
}
//////////////////////*HIDE MOUSE*/////////////////////////////////////////
void hidemouse()
{
     union REGS in ,out;
     in.x.ax=2;
     int86(0x33,&in,&out);
}
//****************************mouse pos****************

void mouseInfo(int*button,int*xpos,int*ypos)
{
     union REGS in ,out;
     in.x.ax=3;
     int86(0x33,&in,&out);
     *xpos=out.x.cx;
     *ypos=out.x.dx;
     *button=out.x.bx;
}
    //**********************for desolve*********
void part1()
{
     int poly2[]={222,94,282,94,280,180,222,180};
     setcolor(GREEN);
     setfillstyle(SOLID_FILL,GREEN);
     fillpoly(4,poly2);
     setcolor(GREEN);
}

////////////////////////////desktop///////////////////////////////////////

void desktop1()
{
     cleardevice();
    setbkcolor(5);
     setfillstyle(3,9);
     int x=getmaxx(),y=getmaxy();
     bar(0,0,x,y);
     setfillstyle(1,2);
     bar(0,0,640,20);
     setcolor(15);
     settextstyle(1,0,1);
     outtextxy(170,45,"Option:");
     settextstyle(1,0,1);
     setcolor(2);
     rectangle(500,50,590,100);
       setcolor(15);
      outtextxy(505,55,"Developer");
       setcolor(2);
     settextstyle(1,0,1);
     setcolor(2);
     rectangle(500,130,590,180);
       setcolor(15);
      outtextxy(505,135,"Help");
       setcolor(2);
     settextstyle(1,0,1);
      setcolor(2);
     rectangle(500,210,590,260);
       setcolor(15);
      outtextxy(510,215,"Exit");
       setcolor(2);
     rectangle(240,170,400,210);
     settextstyle(1,0,3);
     setcolor(15);
     outtextxy(245,175,"Start Game");
      setcolor(14);
     settextstyle(1,0,6);
     outtextxy(60,300,"MAIN MENUE");
     setcolor(0);
     rectangle(240,50,400,70);
     setfillstyle(1,15);
     bar(239,51,399,69);
     settextstyle(0,0,1);
     outtextxy(250,56,"EASY MOOD");
     setfillstyle(1,2);
     bar(390,51,399,69);
     outtextxy(392,57,"");
     while(1)
     {
	mouseInfo(&button,&Xpos,&Ypos);
	showmouse();

/////////////////////////////OPTION////////////////////////////////////////

	if(1==(button&1))
	if(Xpos>=390&&Xpos<=399&&Ypos>=51&&Ypos<=69)
	{
	   option();
	}
	//////////////////Developer/////////////
	if(1==(button&1))
	if(Xpos>=500&&Xpos<=590&&Ypos>=50&&Ypos<=100)
	{
	   hidemouse();
	   varified=1;
	   harun_info();
		showmouse();
	}
	/////////////////////////////////////////
	////////////////////// Help//////////////////
	if(1==(button&1))
	if(Xpos>=500&&Xpos<=590&&Ypos>=130&&Ypos<=180)
	{
	   hidemouse();
	   page1();
	}
	///////////////////////////////////////////////
	////////////////////EXIT//////////////
	if(1==(button&1))
	if(Xpos>=500&&Xpos<=590&&Ypos>=210&&Ypos<=260)
	{
	   hidemouse();
	   exit(0);
	}
	/////////////////////////////////////////

//////////////////////////////start/////////////////////////////////////////

	if(1==(button&1))
	if(Xpos>=240&&Xpos<=400&&Ypos>=170&&Ypos<=210)
	{
	   hidemouse();
	   o=1;
	   game();

	}

////////////////////////////////exit/////////////////////////////////////

	exit();
     }
}
///////////////**************/LOADING/*****************************//////////
void load()
{
int i,n,x;
{

//////////////////////////////


/////////////////////////////
   setbkcolor(5);


   int poly5[]={25,25,600,25,600,450,25,450};
   setcolor(2);
   setfillstyle(3,9);
  fillpoly(4,poly5);
   settextstyle(7,0,3);

    bar(0,0,1000,500);


       setcolor(10);

       //////////////////
	  setfillstyle(3,9);
   setcolor(4);
   settextstyle(1,0,5);
    settextstyle(1,HORIZ_DIR,7);
   outtextxy(175,45,"M B S T U");
   settextstyle(3,0,5);

   setcolor(15);
    settextstyle(1,HORIZ_DIR,7);
   outtextxy(100,130,"TYPEING GAME");
   settextstyle(3,0,5);
   setcolor(1);
    settextstyle(1,HORIZ_DIR,7);
   outtextxy(180,200,"SOFTWARE");
   x=250;

   for(i=1;i<=3;++i)
  {
  settextstyle(2,0,6);
  setcolor(15);
   settextstyle(1,HORIZ_DIR,4);

   outtextxy(180,320,"loading ");
    settextstyle(0,HORIZ_DIR,2);
   for(n=250;n<256;++n)
   {

     outtextxy(x+35,335,".");

   delay(300);
   x=x+10;
    }

    cleardevice();
    ///////////////////////////


   int poly5[]={25,25,600,25,600,450,25,450};
   setcolor(2);

   fillpoly(4,poly5);
   settextstyle(7,0,3);
    //////////////////////////////////
    x=250;
     setfillstyle(3,9);
     settextstyle(1,0,5);

     bar(0,0,1000,500);
     setcolor(4);
      settextstyle(1,HORIZ_DIR,7);

   outtextxy(175,45,"M B S T U");
    settextstyle(3,0,5);
    setcolor(15);
     settextstyle(1,HORIZ_DIR,7);
     outtextxy(100,130,"TYPEING GAME");
    settextstyle(3,0,5);
    setcolor(1);
     settextstyle(1,HORIZ_DIR,7);
   outtextxy(180,200,"SOFTWARE");

}    }
}
/*********************************MAIN FUNCTION **************************/
/////////////////////////////////////////////////////////////////////////////
void main()
{
int driver = DETECT, mode,x,i,n;
initgraph(&driver, &mode, "c:\\tc\\bgi");
 initmouse();
 load();     //////////  1

  password(); ////////////// 2
   submit();  //////////  3
 second_page();  ///////////// 4
desktop1();   //////////////// 5
getch();

}
///////////////////////////SUBMIT//////////////////////
void submit()
{
 cleardevice();
setbkcolor(0);
setcolor(15);

 settextstyle(1,0,4);
  outtextxy(140,40,"Submitted To");
  setcolor(10);

   settextstyle(1,HORIZ_DIR,7);
  outtextxy(25,90,"Md.Sazzad Hossain");
  setcolor(5);
   settextstyle(1,0,5);
  outtextxy(80,180,"Assistant Professor");
  setcolor(11);
  outtextxy(100,240,"Dept. of CSE");
  setcolor(12);
  settextstyle(1,HORIZ_DIR,7);
  outtextxy(150,300,"MBSTU");
  getch();

}
////////////////////////////////////////////////////
     ////////////////////////Pass word////////////////////////
     void password()
 {
  hidemouse();
  char b[4];
  int c=0,l=0;
 cleardevice();
 setbkcolor(0);



setfillstyle(9,8);



   int poly5[]={25,25,600,25,600,450,25,450};
   setcolor(2);

  fillpoly(4,poly5);
   settextstyle(7,0,3);

		    bar(1,1,633,480);
		  setfillstyle(1,BLUE);

		   bar(220,250,345,300);

  setcolor(4);

   settextstyle(3,0,2);



	 settextstyle(1,HORIZ_DIR,7);
   outtextxy(25,55,"USER VARIFICATION");
	   settextstyle(1,HORIZ_DIR,4);
  outtextxy(140,160,"Please Enter Product Key");
   outtextxy(190,190,"And Press Enter");
    if(cc>4)
      {

     unvailed();
      }
	   cc++;
	 int cmp;
    settextstyle(1,HORIZ_DIR,2);
  for(c=0;c<=4;c++)
  {
    b[c]=getch();
    outtextxy(250+l,270,"*");
    l=l+10;
  }    cc++;

  b[5]='\0';
  cmp=strcmp(b,"harun");
  if(cmp!=0)
  {
       settextstyle(1,HORIZ_DIR,4);
   outtextxy(75,310,"You Entered Wrong Product Key ");
   outtextxy(130,350,"Please Try Again........ ");
   }
  /////////////
   settextstyle(1,HORIZ_DIR,4);
  if(b[0]=='h')
  if(b[1]=='a')
  if(b[2]=='r')
  if(b[3]=='u')
  if(b[4]=='n')

  {

    getch();
    cc=0;

   submit();


  }
  if(b[0]!='h')
  {

    getch();
    password();

  }
  if(b[0]=='h')
  if(b[1]!='a')
  {
    getch();


     getch();

    password();
  }
  if(b[0]=='h')
  if(b[1]=='a')
  if(b[2]!='r')
  {
    getch();


    getch();

    password();
  }
  if(b[0]=='h')
  if(b[1]=='a')
  if(b[2]=='r')
  if(b[3]!='u')
  {
    getch();
     getch();
   password();
  }
  if(b[0]=='h')
  if(b[1]=='a')
  if(b[2]=='r')
  if(b[3]=='u')
  if(b[4]!='n')
  {
    getch();

    getch();

    password();
  }

  if(b[0]!='h')
  if(b[1]!='a')
  if(b[2]!='r')
  if(b[3]!='u')
  if(b[4]!='n')

  {
    getch();


    getch();

    password();
  }




}

///////////////////////unvalied/////////////////////
void unvailed()
{
 cleardevice();
 setbkcolor(9);
 hidemouse();

   {
   settextstyle(1,0,6);
   settextstyle(1,HORIZ_DIR,7);
    setcolor(4);
   outtextxy(15,70,"USER NOT VARIFIED");
   settextstyle(1,0,4);
   outtextxy(55,180,"SORRY ! ! ! You are BLOCKED! ! ! ! ! !");
    settextstyle(1,0,3);
    setcolor(15);
    outtextxy(160,215,"You Entered Wrong Product Key");
    outtextxy(175,245,"More then Three (03)Times ");
    outtextxy(160,275,"Please Contact With the Developer ");
    setcolor(4);
     rectangle(495,375,590,415);

     settextstyle(1,0,1);

    setcolor(4);
     outtextxy(500,380,"Developer");
      setcolor(4);
       rectangle(610,5,635,22);
      outtextxy(613,1,"x");
       rectangle(95,375,190,415);
     outtextxy(110,380,"Exit");


    while(1)
     {
	mouseInfo(&button,&Xpos,&Ypos);
	showmouse();
	if(1==(button&1))
	if(Xpos>=495&&Xpos<=590&&Ypos>=375&&Ypos<=415)
	{
	showmouse();
	harun_info();

	}
	if(1==(button&1))
	if(Xpos>=95&&Xpos<=190&&Ypos>=375&&Ypos<=415)
	{
	   hidemouse();

	  exit(0);

	}
	exit();
     }

	      }
}


/////////////////****************SECAND PAGE*****************//////////////

void second_page()
{
  int poly5[]={25,25,600,25,600,450,25,450};
  char *a[]={"W","e","l","c","o","m","e"," ","T","o","M","y"," ","P","r","o","j","e","c","t"};
int i,k;
int j;
char *ch[]={"M","A","W","L","A","N","A",
"B","H","A","S","H","A","N","I",
"S","C","I","E","N","C","E",
"&",
"T","E","C","H","N","O","L","O","G","Y",
"U","N","I","V","E","R","S","I","T","Y"};
char *nm[]={"T","h","i","s"," ","p","r","o","j","e","c","t"," ","i","s"," ","m","a","d","e",
" ","b","y"," ","M","d",":"," ","H","a","r","u","n","-","A","r","-","R","a","s","h","i","d"," ","C","E","-","1","2","0","0","8"};
cleardevice();

setfillstyle(1,4);
bar(0,0,getmaxx(),getmaxy());
setfillstyle(1,8);
bar(10,10,getmaxx()-6,getmaxy()-6);
setfillstyle(1,1);
bar(20,20,getmaxx()-12,getmaxy()-12);

setfillstyle(1,12);
bar(0,0,getmaxx(),getmaxy());
setfillstyle(1,10);
bar(5,5,getmaxx()-10,getmaxy()-10);
setfillstyle(1,5);
bar(10,10,getmaxx()-20,getmaxy()-20);


   setcolor(2);
   setfillstyle(10, 4);
   fillpoly(4,poly5);
   settextstyle(7,0,3);

   //////////////////******************///////////////////////

setcolor(8);

setcolor(GREEN);
delay(230);
settextstyle(1,HORIZ_DIR,3);
for(i=0,k=80;i<4;k+=35,i++)
{setcolor(10);
outtextxy(k,80,a[i]);
delay(230);
}

for(i=4,k=220;i<7;k+=35,i++)
{setcolor(10);
outtextxy(k,80,a[i]);
delay(230);
}
settextstyle(1,HORIZ_DIR,3);
setcolor(YELLOW);
for(i=7,k=80;i<20;k+=35,i++)
{setcolor(10);
outtextxy(k,110,a[i]);
delay(250);
}
/////////////////*************////////////////
setcolor(14);
delay(100);
settextstyle(1,HORIZ_DIR,1);
for(i=0,k=27;i<7;k+=15,i++)
{outtextxy(k,160,ch[i]);
delay(100);
}
for(i=7,k=150;i<15;k+=15,i++)
{outtextxy(k,160,ch[i]);
delay(100);
}
for(i=15,k=300;i<22;k+=15,i++)
{outtextxy(k,160,ch[i]);
delay(100);
}
for(i=22,k=420;i<23;k+=15,i++)
{outtextxy(k,160,ch[i]);
delay(100);
}
for(i=23,k=439;i<33;k+=15,i++)
{outtextxy(k,160,ch[i]);
delay(100);
}
for(i=33,k=260;i<43;k+=15,i++)
{outtextxy(k,200,ch[i]);
delay(100);
}
/////my name display //////////////
for(i=0,k=30;i<23;k+=15,i++)
{    setcolor(15);
outtextxy(k,300,nm[i]);
delay(100);
}
for(i=23,k=170;i<43;k+=15,i++)
{        setcolor(10);
outtextxy(k,340,nm[i]);
delay(100);
}
    getch();
  }
  ///////////////////////////GAME/////////////////////////////
  ///////////////////////////
  void game()
{
   FILE *fp;

   int i,k,l=1,j=0,m,q=0,en=1,end=0,lt=0;

    char a[20],b[20],d[15],ch,c[20],nm[20];



     i=0; k=0;n[0]=48;n[1]=48;n[1]='\0';b[0]='\0';c[0]=48;c[1]='\0';

     hidemouse();
      cleardevice();

	 {

     setbkcolor(2);
     setfillstyle(2,2);
      bar(0,0,1000,500);

	 {
	 if(o==1)
      fp=fopen("harun1.txt","r+");
      /* setcolor(15);
	outtextxy(230,240,"   EASY MODE  ");  */
	 if(o==2)
      fp=fopen("harun2.txt","r+");
      /* setcolor(15);
	outtextxy(230,240,"MEDIUM MOOD"); */
	 if(o==3)
      fp=fopen("harun3.txt","r+");
       /*	setcolor(15);
	outtextxy(230,240,"HARD MOOD");  */
       if(o==4)
      fp=fopen("harun4.txt","r+");
	/* setcolor(15);
	outtextxy(230,240,"NUMBERS"); */
    while(!end)
	{
	 setfillstyle(10,4);
       {

 {

  x:
  settextstyle(3,0,2);
  setcolor(3);

  {
    fseek(fp,1L,j);
    {
    k++;
       j=1;
    a[i]=getc(fp);i++;
    }
  if((k%5)!=0)
 {
   goto x;
 }
 else
 {
  a[i]='\0';   en++;


       for(m=1;m<=650;m+=5)

	{

	 delay(5);
   setcolor(2);
 settextstyle(3,0,2);
  setcolor(3);

		     setviewport(0,0,650,600,0);

		      setfillstyle(10,4);


		setfillstyle(10,4);
      setfillstyle(1,RED);

	   bar(5,50,650,200);

		setfillstyle(10,4);

		 setcolor(1);
		 settextstyle(1,0,3);
      outtextxy(35,245,">>Instruction<<");
		 setcolor(4);
		 settextstyle(1,0,1);
      outtextxy(35,270,"1. For EXIT >>Press shift+1 times .");
      outtextxy(35,290,"2. Type 5 Letters at a time.");
      outtextxy(35,310,"3. For PUSE Press * .");




	 setcolor(1);
     settextstyle(1,0,3);
       outtextxy(150,10,"Type this word shown below");

		settextstyle(1,0,1);
	outtextxy(100,210,"You was typed :");
	 settextstyle(1,0,2);
	setcolor(4);
	outtextxy(270,210,b);
	{
	 setcolor(1);
     settextstyle(1,0,3);
     outtextxy(415,240,">> Live Score <<");
	 setcolor(15);
	 if(o==1)
	 {
	  setcolor(15) ;
       outtextxy(230,240,"   EASY MODE  ");
       }
       if(o==2)
       {
	setcolor(15);
       outtextxy(230,240," MEDIUM MOOD");
       }
       if(o==3)
       {
	setcolor(15);
       outtextxy(230,240,"   HARD MODE  ");
       }
       if(o==4)
       {
	setcolor(15);
       outtextxy(230,240,"   NUMBERS ");
       }

	   setcolor(4);
	  settextstyle(1,0,1);
	  outtextxy(425,300,"Word Corrected ");

	       outtextxy(563,300,n);
		 setcolor(4);
	       settextstyle(1,0,1);
		outtextxy(425,330,"Leter Correct");
		outtextxy(550,330,c);
		 setcolor(1);
	       settextstyle(1,0,1);
		outtextxy(20,360,"  Developer ");
		 setcolor(13);
	       settextstyle(1,0,3);
		outtextxy(25,380," Md.Harun-Ar-Rashid");
		 setcolor(4);
	       settextstyle(1,0,1);
		outtextxy(20,405,"  ID: CE-12008");

	       }

	       setcolor(15);
	  settextstyle(q,0,7);
	  outtextxy(m,60,a);
	}
   i=0;

       int h=0;

   b[0]='\0';
		 h=0;
	      while(h<5)
	       {
    settextstyle(0,0,1);
     ch=getch();
     if(ch=='!')
     {
    endf();

     }
      if(ch=='*')
     {
     pus();

     }

       gotoxy(32,14);

     b[h]=ch;
     if(b[h]==a[h])
     {
     lt++;
     }
      h++;
      settextstyle(1,0,1);
  setcolor(3);

       }
	    b[h]='\0';

	    h=0;

	if(b[0]=='!')
       {

     endf();
       break;
       }


	clearviewport();
	 setfillstyle(10,4);

		q++;
		 if(q==2)
		 {
		 q++;
		 }
	  if(q>10)
	  {
	  q=1;
	  }
///////////////
    l=strcmp(a,b);
   if(l==0)
     {
      final++;
    itoa(final,n,10);
    itoa(lt,c,10);


  settextstyle(7,0,2);
   setcolor(4);
    outtextxy(330,340,n);
    outtextxy(530,340,c);
	cleardevice();
	 setfillstyle(10,4);

   }

  {
   goto x;
    }

     }

      }

	}
	    }







       }

	  }
	  }


     fclose(fp);


}
////////////////////////PUS FUNCTION////////////////////////////
 void pus()
 {    cleardevice();
	       setbkcolor(0);
	      setfillstyle(2,2);
			setcolor(1);


      setcolor(4);
     settextstyle(1,0,3);
     settextstyle(1,0,8);
	outtextxy(230,190,"PAUSE");
	settextstyle(1,0,1);
      setcolor(4);
      outtextxy(230,290,"Total Score: ");
      outtextxy(360,290,n);


     setcolor(15);
     setlinestyle(SOLID_LINE,1,1);
     rectangle(495,375,590,415);

     rectangle(95,375,190,415);
     settextstyle(1,0,1);
     outtextxy(500,380,"PLAY");
     outtextxy(110,380,"MENUE");


     while(1)
     {
	mouseInfo(&button,&Xpos,&Ypos);
	showmouse();
	if(1==(button&1))
	if(Xpos>=495&&Xpos<=590&&Ypos>=375&&Ypos<=415)
	{
	   hidemouse();
	   game();
	   showmouse();
	}
	if(1==(button&1))
	if(Xpos>=95&&Xpos<=190&&Ypos>=375&&Ypos<=415)
	{
	   hidemouse();


	   desktop1();
	   showmouse();
	}
       exit();
     }

 }


  ///////////////////////////// END FUNCTION////////////////////
  void endf()
  {
   cleardevice();
	       setbkcolor(0);
	      setfillstyle(2,2);
			setcolor(1);
			settextstyle(0,0,6);
			outtextxy(120,200,"GAME OVER");
      setcolor(4);
     settextstyle(1,0,3);

      setcolor(4);


	settextstyle(1,0,3);
      setcolor(4);
      outtextxy(230,290,"Total Score: ");
      outtextxy(360,290,n);

     setcolor(15);
     setlinestyle(SOLID_LINE,1,1);
     rectangle(495,375,590,415);
     rectangle(95,375,190,415);
      rectangle(280,375,385,415);
     settextstyle(1,0,1);
     outtextxy(500,380,"Try again");
     outtextxy(110,380,"MENUE");
      outtextxy(290,380,"EXIT");
     while(1)
     {
	mouseInfo(&button,&Xpos,&Ypos);
	showmouse();
	if(1==(button&1))
	if(Xpos>=495&&Xpos<=590&&Ypos>=375&&Ypos<=415)
	{
	   hidemouse();
	   game();
	   showmouse();
	}
	if(1==(button&1))
	if(Xpos>=95&&Xpos<=190&&Ypos>=375&&Ypos<=415)
	{
	   hidemouse();

      desktop1();
	   showmouse();
	}
		if(1==(button&1))
	if(Xpos>=280&&Xpos<=385&&Ypos>=375&&Ypos<=415)
	{
	   hidemouse();

       exit(0);

	   showmouse();
	}
       exit();
     }
  }



////////////////////////////////page1/////////////////////////////////////

void page1()
{
     cleardevice();

     settextstyle(1,0,3);
     setcolor(10);

     settextstyle(1,0,2);

      outtextxy(230,100,"Instruction");

     setlinestyle(SOLID_LINE,1,3);

       line(100,130,550,130);
     settextstyle(7,0,1);
     outtextxy(160,145,"You have to type the word");
     outtextxy(170,165," showing on the screen");
     outtextxy(210,185,"and press ENTER");
     outtextxy(60,230,"For pass any level you have to match at least 5 word.");
     outtextxy(170,255,"If you fail then the game is over.");
     outtextxy(23,280,"If you match 5 or more word then you will go another level.");
     setcolor(15);
     setlinestyle(SOLID_LINE,1,1);

     rectangle(95,375,190,415);
     settextstyle(1,0,1);

     outtextxy(110,380,"Back");
     delay(100);
     while(1)
     {
	mouseInfo(&button,&Xpos,&Ypos);
	showmouse();

	if(1==(button&1))
	if(Xpos>=95&&Xpos<=190&&Ypos>=375&&Ypos<=415)
	{
	   hidemouse();
	   desktop1();
	   showmouse();
	}
	if(1==(button&1))
	if(Xpos>=625&&Xpos<=637&&Ypos>=0&&Ypos<=17)
	{
	   hidemouse();
	   exit(0);
	   showmouse();
	}
	if(Xpos>=625&&Xpos<=637&&Ypos>=0&&Ypos<=17)
	{
	   setcolor(3);
	   settextstyle(0,0,1);
	   outtextxy(629,6,"X");
	}

	else
	{
	   setcolor(15);
	   settextstyle(0,0,1);
	   outtextxy(629,6,"X");
	}
     }
}

//////////////////////////////////option//////////////////////////////////

void option()
{
     hidemouse();
     setfillstyle(1,15);
     bar(239,69,399,149);
     setcolor(0);
     settextstyle(0,0,1);
     outtextxy(250,76,"EASY MOOD");
     outtextxy(250,96,"MEDIUM MOOD");
     outtextxy(250,116,"HARD MOOD");
     outtextxy(250,136,"NUMBERS");
     while(1)
     {
	mouseInfo(&button,&Xpos,&Ypos);
	showmouse();
	if(1==(button&1))
	if(Xpos>=240&&Xpos<=400&&Ypos>=70&&Ypos<=90)
	{
	   option1();
	}
	if(1==(button&1))
	if(Xpos>=240&&Xpos<=400&&Ypos>=91&&Ypos<=110)
	{
	   option2();
	}
	if(1==(button&1))
	if(Xpos>=240&&Xpos<=400&&Ypos>=111&&Ypos<=130)
	{
	   option3();
	}
	if(1==(button&1))
	if(Xpos>=240&&Xpos<=400&&Ypos>=131&&Ypos<=150)
	{
	   option4();
	}
     }

}
void option1()
{
     hidemouse();
     o=1;
     setfillstyle(1,15);
     bar(239,51,389,69);
     setcolor(0);
     settextstyle(0,0,1);

     outtextxy(250,56,"EASY MOOD");
     setfillstyle(5,5);
     bar(239,69,399,149);
     showmouse();

    start();
}
void option2()
{
     hidemouse();
     o=2;
     setfillstyle(1,15);
     bar(239,51,389,69);
     setcolor(0);
     settextstyle(0,0,1);
     outtextxy(250,56,"MEDIUM MOOD");
     setfillstyle(5,5);
     bar(239,69,399,149);
     showmouse();
     start();
}
void option3()
{
     hidemouse();
     o=3;
     setfillstyle(1,15);
     bar(239,51,389,69);
     setcolor(0);
     settextstyle(0,0,1);
     outtextxy(250,56,"HARD MOOD");
     setfillstyle(5,5);
     bar(239,69,399,149);
     showmouse();
     start();
}
void option4()
{
     hidemouse();
     o=4;
     setfillstyle(1,15);
     bar(239,51,389,69);
     setcolor(0);
     settextstyle(0,0,1);
     setfillstyle(5,5);
     bar(239,69,399,149);
     outtextxy(250,56,"NUMBERS");
     showmouse();
     start();
}

///////////////////////////////////start//////////////////////////////////

void start()
{
     while(1)
     {
	mouseInfo(&button,&Xpos,&Ypos);
	showmouse();
	if(1==(button&1))
	if(Xpos>=295&&Xpos<=345&&Ypos>=370&&Ypos<=400)
	{
	   hidemouse();
	   page1();
	   game();
	}
		if(1==(button&1))
	if(Xpos>=240&&Xpos<=400&&Ypos>=170&&Ypos<=210)
	{
	   hidemouse();
	  // page1();
	   game();
	}
	if(1==(button&1))
	if(Xpos>=390&&Xpos<=399&&Ypos>=51&&Ypos<=69)
	{
	   option();
	}
		//////////////////Developer/////////////
	if(1==(button&1))
	if(Xpos>=500&&Xpos<=590&&Ypos>=50&&Ypos<=100)
	{
	   hidemouse();
	   varified=1;
	   harun_info();
		showmouse();
	}
	/////////////////////////////////////////
	////////////////////// Help//////////////////
	if(1==(button&1))
	if(Xpos>=500&&Xpos<=590&&Ypos>=130&&Ypos<=180)
	{
	   hidemouse();
	   page1();
	}
	///////////////////////////////////////////////
	////////////////////EXIT//////////////
	if(1==(button&1))
	if(Xpos>=500&&Xpos<=590&&Ypos>=210&&Ypos<=260)
	{
	   hidemouse();
	   exit(0);
	}
	exit();
     }
}

/////////////////////////////////////exit//////////////////////////////////

void exit()
{
     if(1==(button&1))
     if(Xpos>=610&&Xpos<=635&&Ypos>=5&&Ypos<=22)
     {
	hidemouse();
	exit(0);
	showmouse();
     }
     if(Xpos>=610&&Xpos<=635&&Ypos>=5&&Ypos<=22)
     {

	 setcolor(4);
	 settextstyle(1,0,1);
       rectangle(610,5,635,22);
      outtextxy(613,1,"x");
     }
     else
     {
	setcolor(15);
       rectangle(610,5,635,22);
       settextstyle(1,0,1);
       setcolor(4);
      outtextxy(613,1,"x");
     }

}

void harun_info()
{
cleardevice();
 hidemouse();
setfillstyle(1,4);
bar(0,0,getmaxx(),getmaxy());
setfillstyle(1,8);
bar(10,10,getmaxx()-6,getmaxy()-6);
setfillstyle(1,10);
bar(20,20,getmaxx()-12,getmaxy()-12);
setfillstyle(10,2);
bar(20,20,getmaxx()-12,getmaxy()-12);
////////////******************************////////////////

 int i,j,x=240,y=100;
// cleardevice();
 for(j=0;j<4;++j){y=y+50;
 for(i=0;i<40;++i)
	{int poly[]={x,y,x+160,y,x+160,y+i,x,y+i};
	setfillstyle(SOLID_FILL,7);
	fillpoly(4,poly);
	}   }
       showmouse();
  setcolor(4);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(278,152,"Harun");
  outtextxy(247,202,"ID:CE-12008");
  outtextxy(242,255,"Dept. of CSE");
   outtextxy(256,300,"MBSTU");


  outtextxy(425,415,"Back");
showmouse();
	      //This function show the mouse pointer
while(1)
{mouseInfo(&button,&Xpos,&Ypos);//This function determine the mouse postion////
if(1==(button&1))//This condition means the Left click of mouse
if(Xpos>425&&Xpos<470&&Ypos>415&&Ypos<455) //position where mouse pointer active
{
hidemouse();
  //This function hide the mouse pointer
  if(varified!=1)
  {
unvailed();
showmouse();
  }
  else
  {
   desktop1();
   showmouse();
  }


}
exit();
}}