#include <iostream.h>
#include <conio.h>
#include <graphics.h>

struct peice
{
    int i[9];
    int j[9];
    int cou;
    peice()
    {
    cou=0;
    }
}red,white,orange,yellow,blue,green;
void left_bottom(int);
void right_bottom(int);
void left_top(int);
void topplus();
void right_top(int);
void bottom_left(int);
void bottom_right(int);
void detect();
void get();
void toplayer();
void midlayer();
void bottomplus();
void thirdlayer();
int cube[6][9],l,p,opp,te,i,j,ll,a,color,s,counter=0,extra[9],gd=DETECT,gm,choice,x,y;
void initialize();
void initialize2();
void input();
void menu();
void display()
{
    for(l=0;l<6;l++)
    {
	 for(p=0;p<9;p++)
	 {
	     cout<<"cube["<<l<<"]["<<p<<"]="<<cube[l][p]<<endl;
	 }
    }
    getch();
}
void draw(int);
int main()
{
   //initialize2();
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   menu();
  // input();
   // detect();
  // topplus();
 // toplayer();
  // midlayer();
  // bottomplus();
  // thirdlayer();

  getch();
    closegraph();
    return 0;
}
void menu()
{
  cleardevice();
  line(100,110,100,250);
  line(100,110,170,110);
  line(100,250,120,250);
  line(120,185,120,250);
  line(140,185,170,185);
  line(170,185,170,110);
  line(140,185,170,250);
  line(170,250,150,250);
  line(150,250,120,185);
  line(120,130,120,165);
  line(120,130,150,130);
  line(150,130,150,165);
  line(150,165,150,130);
  line(150,165,120,165);

  //u
  line(190,165,210,165);
  line(190,165,190,250);
  line(190,250,260,250);
  line(260,250,260,165);
  line(260,165,240,165);
  line(240,165,240,230);
  line(210,165,210,230);
  line(210,230,240,230);

  //b
  line(280,110,300,110);
  line(280,110,280,250);
  line(280,250,340,250);
  line(340,250,340,165);
  line(340,165,300,165);
  line(300,165,300,110);
  line(300,230,300,185);
  line(320,185,320,185);
  line(320,185,320,230);
  line(320,230,300,230);
  line(320,185,300,185);
  //i
  line(360,165,380,165);
  line(380,165,380,250);
  line(360,165,360,250);
  line(380,250,360,250);
  line(360,155,380,155);
  line(380,155,380,135);
  line(380,135,360,135);
  line(360,135,360,155);
   //c
   line(400,165,460,165);
   line(400,165,400,250);
   line(400,250,460,250);
   line(460,250,460,230);
   line(460,230,420,230);
   line(420,230,420,185);
   line(420,185,460,185);
   line(460,185,460,165);
   //'
   line(470,110,490,110);
   line(490,110,490,140);
   line(490,140,470,140);
   line(470,140,470,110);
   //s
   line(500,165,550,165);
   line(500,165,500,220);
   line(500,220,530,220);
   line(530,220,530,230);
   line(530,230,500,230);
   line(500,230,500,250);
   line(500,250,550,250);
   line(550,250,550,200);
   line(550,200,520,200);
   line(520,200,520,185);
   line(520,185,550,185);
   line(550,185,550,165);




}
void draw(int s)
{     int loop;
        cleardevice();
	setcolor(7);
	x=210;
	y=160;
	line(200,150,350,150);
	line(200,150,200,300);
	line(200,300,350,300);
	line(350,300,350,150);
	line(250,150,250,300);
	line(300,150,300,300);
	line(200,200,350,200);
	line(200,250,350,250);
	for(loop=0;loop<9;loop++)
	{
	  if(cube[s][loop]==0)
	  {
	    setfillstyle(1,4);
	  }
	  if(cube[s][loop]==1)
	  {
	    setfillstyle(1,15);
	  }
	  if(cube[s][loop]==2)
	  {
	    setfillstyle(1,6);
	  }
	  if(cube[s][loop]==3)
	  {
	    setfillstyle(1,14);
	  }
	  if(cube[s][loop]==4)
	  {
	    setfillstyle(1,1);
	  }
	  if(cube[s][loop]==5)
	  {
	    setfillstyle(1,2);
	  }
	  floodfill(x,y,7);
	  if(x==310)
	  {
	   x=210;
	   y+=50;
	  }
	  else
	  x+=50;
	}

}
void input()
    {

	x=210;
	y=160;
	setcolor(7);
	line(200,150,350,150);
	line(200,150,200,300);
	line(200,300,350,300);
	line(350,300,350,150);
	line(250,150,250,300);
	line(300,150,300,300);
	line(200,200,350,200);
	line(200,250,350,250);
	setcolor(15);
	outtextxy(100,170,"RED = 1");
	outtextxy(100,190,"WHITE = 2");
	outtextxy(100,210,"ORANGE = 3");
	outtextxy(100,230,"YELLOW = 4");
	outtextxy(100,250,"BLUE = 5");
	outtextxy(100,270,"GREEN = 6");
	outtextxy(100,290,"DELETE = 7");
	outtextxy(200,100,"ENTER COLOURS IN CUBE");
	for(j=0;j<6;j++)
	{
	if(j==0)
	outtextxy(210,350,"ENTER SIDE WITH RED CENTER");
	if(j==1)
	outtextxy(210,350,"ENTER SIDE WITH WHITE CENTER");
	if(j==2)
	outtextxy(210,350,"ENTER SIDE WITH ORANGE CENTER");
	if(j==3)
	outtextxy(210,350,"ENTER SIDE WITH YELLOW CENTER");
	if(j==4)
	outtextxy(210,350,"ENTER SIDE WITH BLUE CENTER");
	if(j==5)
	outtextxy(210,350,"ENTER SIDE WITH GREEN CENTER");

	x=210;
	y=160;
	for(i=0;i<9;i++)
	{
	 choice=getch();
	 if(choice=='1')
	 {
	   cube[j][i]=0;
	   color=4;
	 }
	 if(choice=='2')
	 {
	   cube[j][i]=1;
	   color=15;
	 }
	 if(choice=='3')
	 {
	   cube[j][i]=2;
	   color=6;
	 }
	 if(choice=='4')
	 {
	   cube[j][i]=3;
	   color=14;
	 }
	 if(choice=='5')
	 {
	   cube[j][i]=4;
	   color=1;
	 }
	 if(choice=='6')
	 {
	   cube[j][i]=5;
	   color=2;
	 }
	 if(choice=='7')
	 {
	     i=i-2;
	     color=0;
	     if(x==210)
	     {
	       x=310;
	       y=y-50;
	     }
	     else
	     x-=50;
	     setfillstyle(1,color);
	     floodfill(x,y,7);
	     continue;
	 }
	 setfillstyle(1,color);
	 floodfill(x,y,7);
	 if(x==310)
	 {
	  y+=50;
	  x=210;
	  }
	  else
	  x+=50;
	}
	l=210;
	opp=160;
	for(ll=0;ll<9;ll++)
	{
	  setfillstyle(1,0);
	  floodfill(l,opp,7);
	  if(l==310)
	 {
	  opp+=50;
	  l=210;
	  }
	  else
	  l+=50;

	}
	setcolor(0);
	if(j==0)
	outtextxy(210,350,"ENTER SIDE WITH RED CENTER");
	if(j==1)
	outtextxy(210,350,"ENTER SIDE WITH WHITE CENTER");
	if(j==2)
	outtextxy(210,350,"ENTER SIDE WITH ORANGE CENTER");
	if(j==3)
	outtextxy(210,350,"ENTER SIDE WITH YELLOW CENTER");
	if(j==4)
	outtextxy(210,350,"ENTER SIDE WITH BLUE CENTER");
	if(j==5)
	outtextxy(210,350,"ENTER SIDE WITH GREEN CENTER");
	setcolor(15);
	}
	getch();

	}
void thirdlayer()
{

   while((cube[4][0]!=4)||(cube[4][2]!=4)||(cube[4][6]!=4)||(cube[4][8]!=4)||(cube[0][8]!=0)||(cube[1][8]!=1)||(cube[2][8]!=2)||(cube[3][8]!=3))
   {
       counter=0;
       while(((cube[0][8]!=0)&&(cube[1][6]!=1)&&(cube[4][2]!=4))||((cube[1][6]!=0)&&(cube[0][8]!=4)&&(cube[4][2]!=1))||((cube[1][6]!=4)&&(cube[4][2]!=0)&&(cube[0][6]!=1)))
       {
	    if((cube[0][8]==0)&&(cube[1][6]==1)&&(cube[4][2]==4)||((cube[1][6]==0)&&(cube[0][8]==4)&&(cube[4][2]==1))||((cube[1][6]==4)&&(cube[4][2]==0)&&(cube[0][8]==1)))
	    break;

	  right_bottom(0);

	  bottom_right(0);

	  left_bottom(0);

	  bottom_left(0);

	  right_top(0);

	  bottom_right(0);

	  left_top(0);

	  bottom_left(0);

	  counter++;
	  if(counter==3)
	  {

	  right_bottom(1);

	  bottom_right(1);

	  left_bottom(1);

	  bottom_left(1);

	  right_top(1);

	  bottom_right(1);

	  left_top(1);

	  bottom_left(1);
	  counter=0;
	  }

       }
       while(((cube[1][8]!=1)&&(cube[2][6]!=2)&&(cube[4][8]!=4))||((cube[1][8]!=1)&&(cube[2][6]!=4)&&(cube[4][8]!=2))||((cube[1][8]!=4)&&(cube[4][8]!=1)&&(cube[2][6]!=2)))
       {
	   if(((cube[1][8]==1)&&(cube[2][6]==2)&&(cube[4][8]==4))||((cube[1][8]==2)&&(cube[2][6]==4)&&(cube[4][8]==1))||((cube[1][8]==4)&&(cube[4][8]==2)&&(cube[2][6]==1)))
	    break;

	  right_bottom(1);

	  bottom_right(1);

	  left_bottom(1);

	  bottom_left(1);

	  right_top(1);

	  bottom_right(1);

	  left_top(1);

	  bottom_left(1);

       }
       while((cube[4][0]!=4)||(cube[4][2]!=4)||(cube[4][6]!=4)||(cube[4][8]!=4))
       {

	   if((cube[4][0]!=4)&&(cube[4][2]!=4))
	   {

	       left_bottom(1);

	       bottom_right(1);

	       bottom_right(1);

	       left_top(1);

	       bottom_left(1);

	       left_bottom(1);

	       bottom_left(1);

	       left_top(1);

	       right_bottom(1);

	       bottom_right(1);

	       bottom_right(1);

	       right_top(1);

	       bottom_right(1);

	       right_bottom(1);

	       bottom_right(1);

	       right_top(1);
	   }
	   if((cube[4][0]!=4)&&(cube[4][6]!=4))
	   {

	       left_bottom(0);

	       bottom_right(0);

	       bottom_right(0);

	       left_top(0);

	       bottom_left(0);

	       left_bottom(0);

	       bottom_left(0);

	       left_top(0);

	       right_bottom(0);

	       bottom_right(0);

	       bottom_right(0);

	       right_top(0);

	       bottom_right(0);

	       right_bottom(0);

	       bottom_right(0);

	       right_top(0);
	   }
	   if((cube[4][8]!=4)&&(cube[4][2]!=4))
	   {

	       left_bottom(2);

	       bottom_right(2);

	       bottom_right(2);

	       left_top(2);

	       bottom_left(2);

	       left_bottom(2);

	       bottom_left(2);

	       left_top(2);

	       right_bottom(2);

	       bottom_right(2);

	       bottom_right(2);

	       right_top(2);

	       bottom_right(2);

	       right_bottom(2);

	       bottom_right(2);

	       right_top(2);
	   }
	   if((cube[4][8]!=4)&&(cube[4][6]!=4))
	   {

	       left_bottom(3);

	       bottom_right(3);

	       bottom_right(3);

	       left_top(3);

	       bottom_left(3);

	       left_bottom(3);

	       bottom_left(3);

	       left_top(3);

	       right_bottom(3);

	       bottom_right(3);

	       bottom_right(3);

	       right_top(3);

	       bottom_right(3);

	       right_bottom(3);

	       bottom_right(3);

	       right_top(3);
	   }
	   if(((cube[4][0]!=4)&&(cube[4][8]!=4))||((cube[4][2]!=4)&&(cube[4][6]!=4)))
	   {

	       left_bottom(3);

	       bottom_right(3);

	       bottom_right(3);

	       left_top(3);

	       bottom_left(3);

	       left_bottom(3);

	       bottom_left(3);

	       left_top(3);

	       right_bottom(3);

	       bottom_right(3);

	       bottom_right(3);

	       right_top(3);

	       bottom_right(3);

	       right_bottom(3);

	       bottom_right(3);

	       right_top(3);
	   }
       }

   }
}
void midlayer()
{

    while((cube[0][3]!=0)||(cube[0][5]!=0)||(cube[1][3]!=1)||(cube[1][5]!=1)||(cube[2][3]!=2)||(cube[2][5]!=2)||(cube[3][3]!=3)||(cube[3][5]!=3))
    {
	for(a=0;a<4;a++)
	{
	    if((cube[a][7]==0)||(cube[a][7]==1)||(cube[a][7]==2)||(cube[a][7]==3))
	    {
		//to get the color on opp side
		if(a==0)
		opp=cube[4][1];
		if(a==1)
		opp=cube[4][5];
		if(a==2)
		opp=cube[4][7];
		if(a==3)
		opp=cube[4][3];
		//to detect and place the 2 layer peices on place
		if(opp!=4)
		{
		    te=cube[a][7];

		    ll=a;
		   //to detect the position of center
		   while(ll!=te)
		   {

		       bottom_left(ll);
		       if(ll!=0)
			ll--;
		       else
			ll=3;
		   }
		   //if the opp peice matches on left side
		   s=ll;
		    if(s!=0)
			s--;
		       else
			s=3;
		    if(s==opp)
		    {

			bottom_right(ll);

			left_bottom(ll);

			bottom_left(ll);

			left_top(ll);

			bottom_left(s);

			right_bottom(s);

			bottom_right(s);

			right_top(s);
		    }
		    //if the opp peice matches on right side
		    s=ll;
		    if(s!=3)
			s++;
		       else
			s=0;
		    if(s==opp)
		    {

			bottom_left(ll);

			right_bottom(ll);

			bottom_right(ll);

			right_top(ll);

			bottom_right(s);

			left_bottom(s);

			bottom_left(s);

			left_top(s);
		    }

		}
		detect();

	    }
	}
	//to remove wrong peices
	if(counter>20)
	{
	    for(a=0;a<4;a++)
	{
	    if(cube[a][3]!=a)
	    {

		   left_bottom(a);

		   bottom_left(a);

		   left_top(a);
		   if(a!=0)
		    te=a-1;
		   else
		    te=3;

		   bottom_left(te);

		   right_bottom(te);

		   bottom_right(te);

		   right_top(te);
		   break;
	    }

	}
	counter=0;
	}
	counter++;


    }
}
void toplayer()
{
    while((cube[5][0]!=5)||(cube[5][2]!=5)||(cube[5][6]!=5)||(cube[5][8]!=5))
    {
	for(ll=0;ll<9;ll++)
	{
	  //to detect and place piece on left bottom
	  if((green.i[ll]<4)&&(green.j[ll]==6))
	  {
	      if(green.i[ll]!=0)
	      {
		  opp=cube[green.i[ll]-1][8];
		  te=green.i[ll]-1;
	      }
	      else
	      {
		  opp=cube[3][8];
		  te=3;
	      }
	      while(te!=opp)
	      {

		  bottom_left(te);
		  if(te!=0)
		    te--;
		  else
		    te=3;
	      }
	      //placing the piece on place
	      if(opp==te)
	      {
		  if(te!=3)
		    te++;
		  else
		    te=0;


		      bottom_right(te);



		  left_bottom(te);


		  bottom_left(te);


		  left_top(te);


	      }
	      detect();
	  }
	  //to detect and place piece on right bottom
	  if((green.i[ll]<4)&&(green.j[ll]==8))
	  {
	      if(green.i[ll]!=3)
	      {
		  opp=cube[green.i[ll]+1][6];
		  te=green.i[ll]+1;
	      }
	      else
	      {
		  opp=cube[0][6];
		  te=0;
	      }
	      while(te!=opp)
	      {

		  bottom_left(te);
		  if(te!=0)
		    te--;
		  else
		    te=3;
	      }
	      //placing the piece on place
	      if(opp==te)
	      {
		  if(te!=0)
		    te--;
		  else
		    te=3;

		  bottom_left(te);

		  right_bottom(te);


		     bottom_right(te);


		  right_top(te);
	      }
	      detect();
	  }
	  //to remove peice from right top
	  if((green.i[ll]<4)&&(green.j[ll]==2))
	  {

	      right_bottom(green.i[ll]);


		  bottom_right(green.i[ll]);



	      right_top(green.i[ll]);

	      detect();
	  }
	  //to remove peice from left top
	  if((green.i[ll]<4)&&(green.j[ll]==0))
	  {

	      left_bottom(green.i[ll]);


		  bottom_left(green.i[ll]);


	      left_top(green.i[ll]);
	      detect();
	  }
	  //to remove piece from blue
	 if(green.i[ll]==4)
	  {
	      if((green.j[ll]==0)||(green.j[ll]==2)||(green.j[ll]==6)||(green.j[ll]==8))
	      {
	      if(green.j[ll]==0)
		te=0;
	      if(green.j[ll]==2)
		te=1;
	      if(green.j[ll]==6)
		te=3;
	      if(green.j[ll]==8)
		te=2;

		left_bottom(te);

		bottom_left(te);

		left_top(te);
		detect();
	      }
	  }
	}
    }
    for(a=0;a<4;a++)
    {
	if(cube[a][0]!=a)
	{

	    left_bottom(a);

	    bottom_left(a);

	    left_top(a);
	    detect();
	    toplayer();
	}
    }
}
void topplus()
{

    while((cube[5][1]!=5)||(cube[5][3]!=5)||(cube[5][5]!=5)||(cube[5][7]!=5))
{
    for(ll=0;ll<9;ll++)
    {
      //if the peice is on right of center
      if((green.j[ll]==5)&&(green.i[ll]<4))
      {
           //targeting the founded peice
           
           right_bottom(green.i[ll]);

           //finding color on opp of cube peice
           if(green.i[ll]==3)
           opp=cube[0][7];
           else
           opp=cube[green.i[ll]+1][7];
            //matching opp peice with center
            if(green.i[ll]==3)
               {
                   te=0;
               }
               else
               te=green.i[ll]+1;

               while(opp!=te)
               { 
                 bottom_left(te);
                 if(te>0)
                 te--;
                 else
                  te=3;
               }
           //rotating and fixing up the peice in place
           if(opp==te)
           {
               if(te==3)
                te=-1;
                left_top(te+1);
                left_top(te+1);
               
           }
           detect();
      }

      //to place green peice on left side of center
      if((green.j[ll]==3)&&(green.i[ll]<4))
      {
          
          left_bottom(green.i[ll]);

          //to find opp of green
          if(green.i[ll]==0)
          opp=cube[3][7];
          else
          opp=cube[green.i[ll]-1][7];
          //to match the center with opp side of green
           if(opp!=green.i[ll]-1)
           {   if(green.i[ll]==0)
                   te=3;
               else
               te=green.i[ll]-1;
               while(opp!=te)
               { 
                 bottom_left(te);
                 if(te!=0)
                 te--;
                 else
                  te=3;
               }
           }
            //to fix the peice in place
            if(opp==te)
           {
               if(te==3)
                te=-1;
                left_top(te+1);
                left_top(te+1);
              
           }
          detect();
      }
      //if the peice is in blue centered side


          if((green.j[ll]==1)&&(green.i[ll]==4))
          {
                opp=cube[0][7];
                te=0;
                while(opp!=te)
                {
                   
                    bottom_left(te);
                    if(te==0)
                        te=3;
                    else
                        te--;
                }
                if(opp==te)
                {
                       if(te==3)
                te=-1;
                left_top(te+1);
                left_top(te+1);
               
                }
           detect();
          }
          if((green.j[ll]==3)&&(green.i[ll]==4))
          {
              opp=cube[3][7];
                te=3;
                while(opp!=te)
                {
                    
                    bottom_left(te);
                    if(te==0)
                        te=3;
                    else
                        te--;
                }
                if(opp==te)
                {
                if(te==3)
                te=-1;
                left_top(te+1);
                left_top(te+1);
               
                }
                detect();
          }
          if((green.j[ll]==5)&&(green.i[ll]==4))
          {
              opp=cube[1][7];
                te=1;
                while(opp!=te)
                {
                   
                    bottom_left(te);

                    if(te==0)
                        te=3;
                    else
                        te--;
                }
                if(opp==te)
                {
                if(te==3)
                te=-1;
                left_top(te+1);
                left_top(te+1);
               
                }
               detect();
          }
          if((green.j[ll]==7)&&(green.i[ll]==4))
          {
              opp=cube[2][7];
                te=2;
                while(opp!=te)
                {
                    
                    bottom_left(te);
                    if(te==0)
                        te=3;
                    else
                        te--;
                }
                if(opp==te)
                {
                if(te==3)
                te=-1;
                left_top(te+1);
                left_top(te+1);
               
                }
                detect();
          }

      //for peice is on the top of center
       if((green.j[ll]==1)&&(green.i[ll]<4))
       {
           if(green.i[ll]==0)
           {

               
               right_bottom(3);

           }
           else
           {
               
               right_bottom(green.i[ll]-1);

           }
           
           left_bottom(green.i[ll]);

          detect();
       }
       //for peice is on the bottom of center
       if((green.j[ll]==7)&&(green.i[ll]<4))
       {
           if(green.i[ll]==0)
           {
               
               right_bottom(3);
           }
           else
           {
               
              right_bottom(green.i[ll]-1);
           }
           
           right_bottom(green.i[ll]);
           detect();
       }
    }


}
for(a=0;a<4;a++)
    {
        if(cube[a][1]!=a)
        {
            if(a!=3)
            te=a+1;
            else
            te=0;
            
            left_bottom(te);
            
            left_bottom(te);
            detect();
            topplus();
        }
    }
}
void bottomplus()
{
    while((cube[4][1]!=4)||(cube[4][3]!=4)||(cube[4][5]!=4)||(cube[4][7]!=4))
    {
	//for making a plus sign from line
	if((cube[4][1]==4)&&(cube[4][7]==4))
	{

	    left_bottom(0);

	    left_bottom(3);

	    bottom_right(3);

	    left_top(3);

	    bottom_left(3);

	    left_top(0);
	    break;
	}
	if((cube[4][3]==4)&&(cube[4][5]==4))
	{

	    left_bottom(3);

	    left_bottom(2);

	    bottom_right(2);

	    left_top(2);

	    bottom_left(2);

	    left_top(3);
	    break;
	}
	//for making line from step
	if((cube[4][1]==4)&&(cube[4][3]==4))
	{

	    left_bottom(1);

	    left_bottom(0);

	    bottom_right(0);

	    left_top(0);

	    bottom_left(0);

	    left_top(1);
	}
	if((cube[4][1]==4)&&(cube[4][5]==4))
	{


	    left_bottom(2);

	    left_bottom(1);

	    bottom_right(1);

	    left_top(1);

	    bottom_left(1);

	    left_top(2);
	}
	if((cube[4][5]==4)&&(cube[4][7]==4))
	{
	    left_bottom(3);

	    left_bottom(2);

	    bottom_right(2);

	    left_top(2);

	    bottom_left(2);

	    left_top(3);
	}
	if((cube[4][3]==4)&&(cube[4][7]==4))
	{
	    left_bottom(0);

	    left_bottom(3);

	    bottom_right(3);

	    left_top(3);

	    bottom_left(3);

	    left_top(0);
	}
	//for making a step
	if((cube[4][3]!=4)&&(cube[4][7]!=4)&&(cube[4][1]!=4)&&(cube[4][5]!=4))
	{
	    left_bottom(0);

	    left_bottom(3);

	    bottom_right(3);

	    left_top(3);

	    bottom_left(3);

	    left_top(0);
	}
    }
    while(cube[0][7]!=0)
    {

	bottom_left(0);

    }
while((cube[0][7]!=0)||(cube[1][7]!=1)||(cube[2][7]!=2)||(cube[3][7]!=3))
{
    if(cube[0][7]==cube[3][7]-3)
    {

	left_bottom(2);

	bottom_right(2);

	bottom_right(2);

	left_top(2);

	bottom_left(2);

	left_bottom(2);

	bottom_left(2);

	left_top(2);

	bottom_left(2);
	break;
    }
    if(cube[0][7]==cube[1][7]-1)
    {

	left_bottom(3);

	bottom_right(3);

	bottom_right(3);

	left_top(3);

	bottom_left(3);

	left_bottom(3);

	bottom_left(3);

	left_top(3);

	bottom_left(3);
	break;
    }
    if(cube[0][7]==cube[2][7]-2)
    {

	left_bottom(0);

	bottom_right(0);

	bottom_right(0);

	left_top(0);

	bottom_left(0);

	left_bottom(0);

	bottom_left(0);

	left_top(0);

	left_bottom(3);

	bottom_right(3);

	bottom_right(3);

	left_top(3);

	bottom_left(3);

	left_bottom(3);

	bottom_left(3);

	left_top(3);

	bottom_left(3);
	break;
    }
    if((cube[1][7]!=1)&&(cube[2][7]!=2)&&(cube[3][7]!=3))
    {

	left_bottom(0);

	bottom_right(0);

	bottom_right(0);

	left_top(0);

	bottom_left(0);

	left_bottom(0);

	bottom_left(0);

	left_top(0);

	left_bottom(0);

	bottom_right(0);

	bottom_right(0);

	left_top(0);

	bottom_left(0);

	left_bottom(0);

	bottom_left(0);

	left_top(0);
	break;
    }
}
detect();
}
void get()
{
  int x,y;
  for(x=0;x<6;x++)
  {
      for(y=0;y<9;y++)
      {
	  cout<<"Enter for cube["<<x<<"]["<<y<<"];"<<endl;
	  cin>>cube[x][y];
      }
  }
}
void initialize2()
{
    cube[0][0]=5;
    cube[0][1]=4;
    cube[0][2]=5;
    cube[0][3]=5;
    cube[0][4]=0;
    cube[0][5]=1;
    cube[0][6]=5;
    cube[0][7]=3;
    cube[0][8]=3;

    cube[1][0]=3;
    cube[1][1]=0;
    cube[1][2]=2;
    cube[1][3]=2;
    cube[1][4]=1;
    cube[1][5]=4;
    cube[1][6]=2;
    cube[1][7]=5;
    cube[1][8]=4;

    cube[2][0]=4;
    cube[2][1]=4;
    cube[2][2]=4;
    cube[2][3]=0;
    cube[2][4]=2;
    cube[2][5]=2;
    cube[2][6]=1;
    cube[2][7]=4;
    cube[2][8]=0;

    cube[3][0]=0;
    cube[3][1]=5;
    cube[3][2]=1;
    cube[3][3]=5;
    cube[3][4]=3;
    cube[3][5]=3;
    cube[3][6]=1;
    cube[3][7]=0;
    cube[3][8]=1;

    cube[4][0]=2;
    cube[4][1]=2;
    cube[4][2]=5;
    cube[4][3]=1;
    cube[4][4]=4;
    cube[4][5]=1;
    cube[4][6]=4;
    cube[4][7]=3;
    cube[4][8]=2;

    cube[5][0]=0;
    cube[5][1]=2;
    cube[5][2]=0;
    cube[5][3]=3;
    cube[5][4]=5;
    cube[5][5]=0;
    cube[5][6]=3;
    cube[5][7]=1;
    cube[5][8]=3;
}
void initialize()
{
    cube[0][0]=1;
    cube[0][1]=0;
    cube[0][2]=5;
    cube[0][3]=1;
    cube[0][4]=0;
    cube[0][5]=1;
    cube[0][6]=5;
    cube[0][7]=0;
    cube[0][8]=5;

    cube[1][0]=2;
    cube[1][1]=2;
    cube[1][2]=3;
    cube[1][3]=4;
    cube[1][4]=1;
    cube[1][5]=5;
    cube[1][6]=1;
    cube[1][7]=2;
    cube[1][8]=2;

    cube[2][0]=4;
    cube[2][1]=2;
    cube[2][2]=2;
    cube[2][3]=3;
    cube[2][4]=2;
    cube[2][5]=2;
    cube[2][6]=4;
    cube[2][7]=3;
    cube[2][8]=4;

    cube[3][0]=4;
    cube[3][1]=0;
    cube[3][2]=5;
    cube[3][3]=4;
    cube[3][4]=3;
    cube[3][5]=5;
    cube[3][6]=0;
    cube[3][7]=0;
    cube[3][8]=3;

    cube[4][0]=0;
    cube[4][1]=4;
    cube[4][2]=0;
    cube[4][3]=1;
    cube[4][4]=4;
    cube[4][5]=1;
    cube[4][6]=1;
    cube[4][7]=4;
    cube[4][8]=1;

    cube[5][0]=3;
    cube[5][1]=5;
    cube[5][2]=2;
    cube[5][3]=5;
    cube[5][4]=5;
    cube[5][5]=3;
    cube[5][6]=0;
    cube[5][7]=3;
    cube[5][8]=3;
}
void detect()
{
    red.cou=0;
    white.cou=0;
    orange.cou=0;
    yellow.cou=0;
    blue.cou=0;
    green.cou=0;
	for(l=0;l<6;l++)
   {
       for(p=0;p<9;p++)
       {
	   if(cube[l][p]==0)
	   {
		 red.i[red.cou]=l;
		 red.j[red.cou]=p;
		 red.cou++;
	   }
	   if(cube[l][p]==1)
	   {
		 white.i[white.cou]=l;
		 white.j[white.cou]=p;
		 white.cou++;
	   }
	    if(cube[l][p]==2)
	   {
		 orange.i[orange.cou]=l;
		 orange.j[orange.cou]=p;
		 orange.cou++;
	   }
	    if(cube[l][p]==3)
	   {
		 yellow.i[yellow.cou]=l;
		 yellow.j[yellow.cou]=p;
		 yellow.cou++;
	   }
	   if(cube[l][p]==4)
	   {
		 blue.i[blue.cou]=l;
		 blue.j[blue.cou]=p;
		 blue.cou++;
	   }
	   if(cube[l][p]==5)
	   {
		 green.i[green.cou]=l;
		 green.j[green.cou]=p;
		 green.cou++;
	   }
       }
   }

}
void left_bottom(int n)
{
    int k,temp1,temp2,temp3,t1,t2,t3;
   draw(n);
    outtextxy(90,125,"LEFT BOTTOM");
   line(100,150,130,150);
   line(100,150,100,250);
   line(130,150,130,250);
   line(100,250,90,250);
   line(130,250,140,250);
   line(90,250,115,300);
   line(140,250,115,300);

   getch();   
    if(n==0)
    {
	temp1=cube[4][0];
	temp2=cube[4][3];
	temp3=cube[4][6];
	cube[4][0]=cube[0][0];
	cube[4][3]=cube[0][3];
	cube[4][6]=cube[0][6];
	t1=cube[2][8];
	t2=cube[2][5];
	t3=cube[2][2];
	cube[2][8]=temp1;
	cube[2][5]=temp2;
	cube[2][2]=temp3;
	temp1=cube[5][8];
	temp2=cube[5][5];
	temp3=cube[5][2];
	cube[5][8]=t1;
	cube[5][5]=t2;
	cube[5][2]=t3;
	cube[0][0]=temp1;
	cube[0][3]=temp2;
	cube[0][6]=temp3;

	t1=cube[3][2];
	cube[3][2]=cube[3][0];
	t2=cube[3][8];
	cube[3][8]=t1;
	t1=cube[3][6];
	cube[3][6]=t2;
	cube[3][0]=t1;
	t1=cube[3][5];
	cube[3][5]=cube[3][1];
	t2=cube[3][7];
	cube[3][7]=t1;
	t1=cube[3][3];
	cube[3][3]=t2;
	cube[3][1]=t1;

    }
    if(n==1)
    {
	temp1=cube[4][2];
	temp2=cube[4][1];
	temp3=cube[4][0];
	cube[4][2]=cube[1][0];
	cube[4][1]=cube[1][3];
	cube[4][0]=cube[1][6];
	t1=cube[3][8];
	t2=cube[3][5];
	t3=cube[3][2];
	cube[3][8]=temp1;
	cube[3][5]=temp2;
	cube[3][2]=temp3;
	temp1=cube[5][2];
	temp2=cube[5][1];
	temp3=cube[5][0];
	cube[5][2]=t1;
	cube[5][1]=t2;
	cube[5][0]=t3;
	cube[1][0]=temp1;
	cube[1][3]=temp2;
	cube[1][6]=temp3;

	t1=cube[0][2];
	cube[0][2]=cube[0][0];
	t2=cube[0][8];
	cube[0][8]=t1;
	t1=cube[0][6];
	cube[0][6]=t2;
	cube[0][0]=t1;
	t1=cube[0][5];
	cube[0][5]=cube[0][1];
	t2=cube[0][7];
	cube[0][7]=t1;
	t1=cube[0][3];
	cube[0][3]=t2;
	cube[0][1]=t1;
    }
    if(n==2)
    {
	temp1=cube[4][8];
	temp2=cube[4][5];
	temp3=cube[4][2];
	cube[4][8]=cube[2][0];
	cube[4][5]=cube[2][3];
	cube[4][2]=cube[2][6];
	t1=cube[0][8];
	t2=cube[0][5];
	t3=cube[0][2];
	cube[0][8]=temp1;
	cube[0][5]=temp2;
	cube[0][2]=temp3;
	temp1=cube[5][0];
	temp2=cube[5][3];
	temp3=cube[5][6];
	cube[5][0]=t1;
	cube[5][3]=t2;
	cube[5][6]=t3;
	cube[2][0]=temp1;
	cube[2][3]=temp2;
	cube[2][6]=temp3;

	t1=cube[1][2];
	cube[1][2]=cube[1][0];
	t2=cube[1][8];
	cube[1][8]=t1;
	t1=cube[1][6];
	cube[1][6]=t2;
	cube[1][0]=t1;
	t1=cube[1][5];
	cube[1][5]=cube[1][1];
	t2=cube[1][7];
	cube[1][7]=t1;
	t1=cube[1][3];
	cube[1][3]=t2;
	cube[1][1]=t1;
    }
    if(n==3)
    {
	temp1=cube[4][6];
	temp2=cube[4][7];
	temp3=cube[4][8];
	cube[4][6]=cube[3][0];
	cube[4][7]=cube[3][3];
	cube[4][8]=cube[3][6];
	t1=cube[1][8];
	t2=cube[1][5];
	t3=cube[1][2];
	cube[1][8]=temp1;
	cube[1][5]=temp2;
	cube[1][2]=temp3;
	temp1=cube[5][6];
	temp2=cube[5][7];
	temp3=cube[5][8];
	cube[5][6]=t1;
	cube[5][7]=t2;
	cube[5][8]=t3;
	cube[3][0]=temp1;
	cube[3][3]=temp2;
	cube[3][6]=temp3;

	t1=cube[2][2];
	cube[2][2]=cube[2][0];
	t2=cube[2][8];
	cube[2][8]=t1;
	t1=cube[2][6];
	cube[2][6]=t2;
	cube[2][0]=t1;
	t1=cube[2][5];
	cube[2][5]=cube[2][1];
	t2=cube[2][7];
	cube[2][7]=t1;
	t1=cube[2][3];
	cube[2][3]=t2;
	cube[2][1]=t1;
    }
}
void right_bottom(int n)
{
    int k,temp1,temp2,temp3,t1,t2,t3;
   draw(n);
    outtextxy(370,125,"RIGHT BOTTOM");
   line(400,150,430,150);
   line(400,150,400,250);
   line(430,150,430,250);
   line(400,250,390,250);
   line(430,250,440,250);
   line(390,250,415,300);
   line(440,250,415,300);

   getch(); 
    if(n==0)
    {
	temp1=cube[4][2];
	temp2=cube[4][5];
	temp3=cube[4][8];
	cube[4][2]=cube[0][2];
	cube[4][5]=cube[0][5];
	cube[4][8]=cube[0][8];
	t1=cube[2][6];
	t2=cube[2][3];
	t3=cube[2][0];
	cube[2][6]=temp1;
	cube[2][3]=temp2;
	cube[2][0]=temp3;
	temp1=cube[5][6];
	temp2=cube[5][3];
	temp3=cube[5][0];
	cube[5][6]=t1;
	cube[5][3]=t2;
	cube[5][0]=t3;
	cube[0][2]=temp1;
	cube[0][5]=temp2;
	cube[0][8]=temp3;

	t1=cube[1][0];
	cube[1][0]=cube[1][2];
	t2=cube[1][6];
	cube[1][6]=t1;
	t1=cube[1][8];
	cube[1][8]=t2;
	cube[1][2]=t1;

	t1=cube[1][3];
	cube[1][3]=cube[1][1];
	t2=cube[1][7];
	cube[1][7]=t1;
	t1=cube[1][5];
	cube[1][5]=t2;
	cube[1][1]=t1;
    }
    if(n==1)
    {
	temp1=cube[4][8];
	temp2=cube[4][7];
	temp3=cube[4][6];
	cube[4][8]=cube[1][2];
	cube[4][7]=cube[1][5];
	cube[4][6]=cube[1][8];
	t1=cube[3][6];
	t2=cube[3][3];
	t3=cube[3][0];
	cube[3][6]=temp1;
	cube[3][3]=temp2;
	cube[3][0]=temp3;
	temp1=cube[5][8];
	temp2=cube[5][7];
	temp3=cube[5][6];
	cube[5][8]=t1;
	cube[5][7]=t2;
	cube[5][6]=t3;
	cube[1][2]=temp1;
	cube[1][5]=temp2;
	cube[1][8]=temp3;

	t1=cube[2][0];
	cube[2][0]=cube[2][2];
	t2=cube[2][6];
	cube[2][6]=t1;
	t1=cube[2][8];
	cube[2][8]=t2;
	cube[2][2]=t1;

	t1=cube[2][3];
	cube[2][3]=cube[2][1];
	t2=cube[2][7];
	cube[2][7]=t1;
	t1=cube[2][5];
	cube[2][5]=t2;
	cube[2][1]=t1;


    }
    if(n==2)
    {
	temp1=cube[4][6];
	temp2=cube[4][3];
	temp3=cube[4][0];
	cube[4][6]=cube[2][2];
	cube[4][3]=cube[2][5];
	cube[4][0]=cube[2][8];
	t1=cube[0][6];
	t2=cube[0][3];
	t3=cube[0][0];
	cube[0][6]=temp1;
	cube[0][3]=temp2;
	cube[0][0]=temp3;
	temp1=cube[5][2];
	temp2=cube[5][5];
	temp3=cube[5][8];
	cube[5][2]=t1;
	cube[5][5]=t2;
	cube[5][8]=t3;
	cube[2][2]=temp1;
	cube[2][5]=temp2;
	cube[2][8]=temp3;

	t1=cube[3][0];
	cube[3][0]=cube[3][2];
	t2=cube[3][6];
	cube[3][6]=t1;
	t1=cube[3][8];
	cube[3][8]=t2;
	cube[3][2]=t1;
	t1=cube[3][1];
	cube[3][1]=cube[3][5];
	t2=cube[3][3];
	cube[3][3]=t1;
	t1=cube[3][7];
	cube[3][7]=t2;
	cube[3][5]=t1;
    }
    if(n==3)
    {
	temp1=cube[4][0];
	temp2=cube[4][1];
	temp3=cube[4][2];
	cube[4][0]=cube[3][2];
	cube[4][1]=cube[3][5];
	cube[4][2]=cube[3][8];
	t1=cube[1][6];
	t2=cube[1][3];
	t3=cube[1][0];
	cube[1][6]=temp1;
	cube[1][3]=temp2;
	cube[1][0]=temp3;
	temp1=cube[5][0];
	temp2=cube[5][1];
	temp3=cube[5][2];
	cube[5][0]=t1;
	cube[5][1]=t2;
	cube[5][2]=t3;
	cube[3][2]=temp1;
	cube[3][5]=temp2;
	cube[3][8]=temp3;

	 t1=cube[0][0];
	cube[0][0]=cube[0][2];
	t2=cube[0][6];
	cube[0][6]=t1;
	t1=cube[0][8];
	cube[0][8]=t2;
	cube[0][2]=t1;

	t1=cube[0][3];
	cube[0][3]=cube[0][1];
	t2=cube[0][7];
	cube[0][7]=t1;
	t1=cube[0][5];
	cube[0][5]=t2;
	cube[0][1]=t1;
    }
}
void bottom_left(int n)
{ int temp1,temp2,temp3,t1,t2,t3;
     draw(n);
   outtextxy(220,125,"BOTTOM LEFT");
   line(200,365,250,340);
   line(200,365,250,390);
   line(250,340,250,350);
   line(250,390,250,380);
   line(250,350,350,350);
   line(250,380,350,380);
   line(350,350,350,380);
   getch();  
    if(n<4)
    {
        temp1=cube[3][6];
        temp2=cube[3][7];
        temp3=cube[3][8];
        cube[3][6]=cube[0][6];
        cube[3][7]=cube[0][7];
        cube[3][8]=cube[0][8];
        t1=cube[2][6];
        t2=cube[2][7];
        t3=cube[2][8];
        cube[2][6]=temp1;
        cube[2][7]=temp2;
        cube[2][8]=temp3;
        temp1=cube[1][6];
        temp2=cube[1][7];
        temp3=cube[1][8];
        cube[1][6]=t1;
        cube[1][7]=t2;
        cube[1][8]=t3;
        cube[0][6]=temp1;
        cube[0][7]=temp2;
        cube[0][8]=temp3;

        t1=cube[4][6];
        cube[4][6]=cube[4][0];
        t2=cube[4][8];
        cube[4][8]=t1;
        t1=cube[4][2];
        cube[4][2]=t2;
        cube[4][0]=t1;

	t1=cube[4][3];
	cube[4][3]=cube[4][1];
	t2=cube[4][7];
	cube[4][7]=t1;
	t1=cube[4][5];
	cube[4][5]=t2;
	cube[4][1]=t1;
    }
}
void bottom_right(int n)
{
    int temp1,temp2,temp3,t1,t2,t3;
     draw(n);
   outtextxy(220,125,"BOTTOM RIGHT");
   line(200,350,300,350);
   line(200,380,300,380);
   line(200,350,200,380);
   line(300,350,300,340);
   line(300,380,300,390);
   line(300,340,350,365);
   line(300,390,350,365);

   getch();
    if(n<4)
    {
	temp1=cube[1][6];
	temp2=cube[1][7];
	temp3=cube[1][8];
	cube[1][6]=cube[0][6];
	cube[1][7]=cube[0][7];
	cube[1][8]=cube[0][8];
	t1=cube[2][6];
	t2=cube[2][7];
	t3=cube[2][8];
	cube[2][6]=temp1;
	cube[2][7]=temp2;
	cube[2][8]=temp3;
	temp1=cube[3][6];
	temp2=cube[3][7];
	temp3=cube[3][8];
	cube[3][6]=t1;
	cube[3][7]=t2;
	cube[3][8]=t3;
	cube[0][6]=temp1;
	cube[0][7]=temp2;
	cube[0][8]=temp3;

	t1=cube[4][0];
	cube[4][0]=cube[4][6];
	t2=cube[4][2];
	cube[4][2]=t1;
	t1=cube[4][8];
	cube[4][8]=t2;
	cube[4][6]=t1;

	t1=cube[4][3];
	cube[4][3]=cube[4][7];
	t2=cube[4][1];
	cube[4][1]=t1;
	t1=cube[4][5];
	cube[4][5]=t2;
	cube[4][7]=t1;

    }
}
void left_top(int n)
{
     int temp1,temp2,temp3,t1,t2,t3;
   draw(n);
   outtextxy(90,125,"LEFT UP");
   line(115,150,90,200);
   line(115,150,140,200);
   line(90,200,100,200);
   line(140,200,130,200);
   line(100,200,100,300);
   line(130,200,130,300);
   line(100,300,130,300);
   getch();
    if(n==0)
    {
        temp1=cube[5][8];
        temp2=cube[5][5];
        temp3=cube[5][2];
        cube[5][8]=cube[0][0];
        cube[5][5]=cube[0][3];
        cube[5][2]=cube[0][6];
        t1=cube[2][8];
        t2=cube[2][5];
        t3=cube[2][2];
        cube[2][8]=temp1;
        cube[2][5]=temp2;
        cube[2][2]=temp3;
        temp1=cube[4][0];
        temp2=cube[4][3];
        temp3=cube[4][6];
        cube[4][0]=t1;
        cube[4][3]=t2;
        cube[4][6]=t3;
        cube[0][0]=temp1;
        cube[0][3]=temp2;
        cube[0][6]=temp3;

        t1=cube[3][2];
        cube[3][2]=cube[3][8];
        t2=cube[3][0];
        cube[3][0]=t1;
        t1=cube[3][6];
        cube[3][6]=t2;
        cube[3][8]=t1;
        t1=cube[3][5];
        cube[3][5]=cube[3][7];
        t2=cube[3][1];
        cube[3][1]=t1;
        t1=cube[3][3];
        cube[3][3]=t2;
        cube[3][7]=t1;

    }
    if(n==1)
    {
        temp1=cube[5][2];
        temp2=cube[5][1];
        temp3=cube[5][0];
        cube[5][2]=cube[1][0];
        cube[5][1]=cube[1][3];
        cube[5][0]=cube[1][6];
        t1=cube[3][8];
        t2=cube[3][5];
        t3=cube[3][2];
        cube[3][8]=temp1;
        cube[3][5]=temp2;
        cube[3][2]=temp3;
        temp1=cube[4][2];
        temp2=cube[4][1];
        temp3=cube[4][0];
        cube[4][2]=t1;
        cube[4][1]=t2;
        cube[4][0]=t3;
        cube[1][0]=temp1;
        cube[1][3]=temp2;
        cube[1][6]=temp3;

        t1=cube[0][2];
        cube[0][2]=cube[0][8];
        t2=cube[0][0];
        cube[0][0]=t1;
        t1=cube[0][6];
        cube[0][6]=t2;
        cube[0][8]=t1;
        t1=cube[0][5];
        cube[0][5]=cube[0][7];
        t2=cube[0][1];
        cube[0][1]=t1;
        t1=cube[0][3];
        cube[0][3]=t2;
        cube[0][7]=t1;
    }
    if(n==2)
    {
        temp1=cube[5][0];
        temp2=cube[5][3];
        temp3=cube[5][6];
        cube[5][0]=cube[2][0];
        cube[5][3]=cube[2][3];
        cube[5][6]=cube[2][6];
        t1=cube[0][8];
        t2=cube[0][5];
        t3=cube[0][2];
        cube[0][8]=temp1;
        cube[0][5]=temp2;
        cube[0][2]=temp3;
        temp1=cube[4][8];
        temp2=cube[4][5];
        temp3=cube[4][2];
        cube[4][8]=t1;
        cube[4][5]=t2;
        cube[4][2]=t3;
        cube[2][0]=temp1;
        cube[2][3]=temp2;
        cube[2][6]=temp3;

        t1=cube[1][2];
        cube[1][2]=cube[1][8];
        t2=cube[1][0];
        cube[1][0]=t1;
        t1=cube[1][6];
        cube[1][6]=t2;
        cube[1][8]=t1;
        t1=cube[1][5];
        cube[1][5]=cube[1][7];
        t2=cube[1][1];
        cube[1][1]=t1;
        t1=cube[1][3];
        cube[1][3]=t2;
        cube[1][7]=t1;
    }
    if(n==3)
    {
        temp1=cube[5][6];
        temp2=cube[5][7];
        temp3=cube[5][8];
        cube[5][6]=cube[3][0];
        cube[5][7]=cube[3][3];
        cube[5][8]=cube[3][6];
        t1=cube[1][8];
        t2=cube[1][5];
        t3=cube[1][2];
        cube[1][8]=temp1;
        cube[1][5]=temp2;
        cube[1][2]=temp3;
        temp1=cube[4][6];
        temp2=cube[4][7];
        temp3=cube[4][8];
        cube[4][6]=t1;
        cube[4][7]=t2;
        cube[4][8]=t3;
        cube[3][0]=temp1;
        cube[3][3]=temp2;
        cube[3][6]=temp3;

        t1=cube[2][2];
        cube[2][2]=cube[2][8];
        t2=cube[2][0];
        cube[2][0]=t1;
        t1=cube[2][6];
        cube[2][6]=t2;
        cube[2][8]=t1;
        t1=cube[2][5];
        cube[2][5]=cube[2][7];
        t2=cube[2][1];
        cube[2][1]=t1;
        t1=cube[2][3];
        cube[2][3]=t2;
        cube[2][7]=t1;
    }
}
void right_top(int n)
{
    int k,temp1,temp2,temp3,t1,t2,t3;
     draw(n);
   outtextxy(390,125,"RIGHT UP");
   line(415,150,390,200);
   line(415,150,440,200);
   line(390,200,400,200);
   line(440,200,430,200);
   line(400,200,400,300);
   line(430,200,430,300);
   line(400,300,430,300);

   getch();
    if(n==0)
    {
        temp1=cube[5][6];
        temp2=cube[5][3];
        temp3=cube[5][0];
        cube[5][6]=cube[0][2];
        cube[5][3]=cube[0][5];
        cube[5][0]=cube[0][8];
        t1=cube[2][6];
        t2=cube[2][3];
        t3=cube[2][0];
        cube[2][6]=temp1;
        cube[2][3]=temp2;
        cube[2][0]=temp3;
        temp1=cube[4][2];
        temp2=cube[4][5];
        temp3=cube[4][8];
        cube[4][2]=t1;
        cube[4][5]=t2;
        cube[4][8]=t3;
        cube[0][2]=temp1;
        cube[0][5]=temp2;
        cube[0][8]=temp3;

        t1=cube[1][2];
        cube[1][2]=cube[1][0];
        t2=cube[1][8];
        cube[1][8]=t1;
        t1=cube[1][6];
        cube[1][6]=t2;
        cube[1][0]=t1;
        t1=cube[1][5];
        cube[1][5]=cube[1][1];
        t2=cube[1][7];
        cube[1][7]=t1;
        t1=cube[1][3];
        cube[1][3]=t2;
        cube[1][1]=t1;

    }
    if(n==1)
    {
        temp1=cube[5][8];
        temp2=cube[5][7];
        temp3=cube[5][6];
        cube[5][8]=cube[1][2];
        cube[5][7]=cube[1][5];
        cube[5][6]=cube[1][8];
        t1=cube[3][6];
        t2=cube[3][3];
        t3=cube[3][0];
        cube[3][6]=temp1;
        cube[3][3]=temp2;
        cube[3][0]=temp3;
        temp1=cube[4][8];
        temp2=cube[4][7];
        temp3=cube[4][6];
        cube[4][8]=t1;
        cube[4][7]=t2;
        cube[4][6]=t3;
        cube[1][2]=temp1;
        cube[1][5]=temp2;
        cube[1][8]=temp3;

        t1=cube[2][2];
        cube[2][2]=cube[2][0];
        t2=cube[2][8];
        cube[2][8]=t1;
        t1=cube[2][6];
        cube[2][6]=t2;
        cube[2][0]=t1;
        t1=cube[2][5];
        cube[2][5]=cube[2][1];
        t2=cube[2][7];
        cube[2][7]=t1;
        t1=cube[2][3];
        cube[2][3]=t2;
        cube[2][1]=t1;
    }
    if(n==2)
    {
        temp1=cube[5][2];
        temp2=cube[5][5];
        temp3=cube[5][8];
        cube[5][2]=cube[2][2];
        cube[5][5]=cube[2][5];
        cube[5][8]=cube[2][8];
        t1=cube[0][6];
        t2=cube[0][3];
        t3=cube[0][0];
        cube[0][6]=temp1;
        cube[0][3]=temp2;
        cube[0][0]=temp3;
        temp1=cube[4][6];
        temp2=cube[4][3];
        temp3=cube[4][0];
        cube[4][6]=t1;
        cube[4][3]=t2;
        cube[4][0]=t3;
        cube[2][2]=temp1;
        cube[2][5]=temp2;
        cube[2][8]=temp3;

        t1=cube[3][2];
        cube[3][2]=cube[3][0];
        t2=cube[3][8];
        cube[3][8]=t1;
        t1=cube[3][6];
        cube[3][6]=t2;
        cube[3][0]=t1;
        t1=cube[3][5];
        cube[3][5]=cube[3][1];
        t2=cube[3][7];
        cube[3][7]=t1;
        t1=cube[3][3];
        cube[3][3]=t2;
        cube[3][1]=t1;
    }
    if(n==3)
    {
        temp1=cube[5][0];
        temp2=cube[5][1];
        temp3=cube[5][2];
        cube[5][0]=cube[3][2];
        cube[5][1]=cube[3][5];
        cube[5][2]=cube[3][8];
        t1=cube[1][6];
        t2=cube[1][3];
        t3=cube[1][0];
        cube[1][6]=temp1;
        cube[1][3]=temp2;
        cube[1][0]=temp3;
        temp1=cube[4][0];
        temp2=cube[4][1];
        temp3=cube[4][2];
        cube[4][0]=t1;
        cube[4][1]=t2;
        cube[4][2]=t3;
        cube[3][2]=temp1;
        cube[3][5]=temp2;
        cube[3][8]=temp3;

        t1=cube[0][2];
        cube[0][2]=cube[0][0];
        t2=cube[0][8];
        cube[0][8]=t1;
        t1=cube[0][6];
        cube[0][6]=t2;
        cube[0][0]=t1;
        t1=cube[0][5];
        cube[0][5]=cube[0][1];
        t2=cube[0][7];
        cube[0][7]=t1;
        t1=cube[0][3];
        cube[0][3]=t2;
        cube[0][1]=t1;
    }
}
