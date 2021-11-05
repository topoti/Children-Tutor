#include<graphics.h>
#include<iostream>
#include<bits/stdc++.h>
#include<MMSystem.h>
#include<windows.h>
void mainMenu();
//option in main-menu
void optionMathematics();
void optionGeometry();
void optionAlphabet();
//mathematics method
void optionCounting();
void Zero();
void One();
void Two();
void Three();
void Four();
void Five();
void Six();
void Seven();
void Eight();
void Nine();
void subtract(int m,int n);
void sum(int m,int n);
void notpossible();
void mul(int m, int n);
void division(int m, int n);

//geometry learning method
void Rectangle();
void Triangle();
void Circle();
//alphabet learning methods
void Capital_A();
void Capital_B();
void Capital_C();
void Capital_D();
void Capital_E();
void Capital_F();
void Capital_G();
void Capital_H();
void Capital_I();
void Capital_J();
void Capital_K();
void Capital_L();
void Capital_M();
void Capital_N();
void Capital_O();
void Capital_P();
void Capital_Q();
void Capital_R();
void Capital_S();
void Capital_T();
void Capital_U();
void Capital_V();
void Capital_W();
void Capital_X();
void Capital_Y();
void Capital_Z();
//other methods  for special functionalities
void option_c_x();
void sound_number(int i);

//Learn counting
void Zero()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"ZERO");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"0");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/0.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/zero.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void One()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"ONE");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"1");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/1.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/one.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Two()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"TWO");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"2");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/2.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/two.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Three()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"THREE");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"3");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/3.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/three.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Four()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"FOUR");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"4");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/4.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/four.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Five()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"FIVE");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"5");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/5.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/five.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Six()
{
     int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"SIX");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"6");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/6.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/six.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Seven()
{
     int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"SEVEN");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"7");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/7.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/seven.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Eight()
{
     int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"EIGHT");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"8");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/8.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/eight.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Nine()
{
     int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"NINE");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"9");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/Counting/9.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/Counting/nine.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}


void sound_number(int i)
{
    if(i==1)
    {
        PlaySound(TEXT("audio/1.wav"),NULL,SND_SYNC);
    }
    else if(i==2)
    {
        PlaySound(TEXT("audio/2.wav"),NULL,SND_SYNC);
    }
    else if(i==3)
    {
        PlaySound(TEXT("audio/3.wav"),NULL,SND_SYNC);
    }
    else if(i==4)
    {
        PlaySound(TEXT("audio/4.wav"),NULL,SND_SYNC);
    }
    else if(i==5)
    {
        PlaySound(TEXT("audio/5.wav"),NULL,SND_SYNC);
    }
    else if(i==6)
    {
        PlaySound(TEXT("audio/6.wav"),NULL,SND_SYNC);
    }
    else if(i==7)
    {
        PlaySound(TEXT("audio/7.wav"),NULL,SND_SYNC);
    }
    else if(i==8)
    {
        PlaySound(TEXT("audio/8.wav"),NULL,SND_SYNC);
    }
    else if(i==9)
    {
        PlaySound(TEXT("audio/9.wav"),NULL,SND_SYNC);
    }
    else if(i==10)
    {
        PlaySound(TEXT("audio/10.wav"),NULL,SND_SYNC);
    }
    else if(i==11)
    {
        PlaySound(TEXT("audio/11.wav"),NULL,SND_SYNC);
    }
    else if(i==12)
    {
        PlaySound(TEXT("audio/12.wav"),NULL,SND_SYNC);
    }
    else if(i==13)
    {
        PlaySound(TEXT("audio/13.wav"),NULL,SND_SYNC);
    }
    else if(i==14)
    {
        PlaySound(TEXT("audio/14.wav"),NULL,SND_SYNC);
    }
    else if(i==15)
    {
        PlaySound(TEXT("audio/15.wav"),NULL,SND_SYNC);
    }
    else if(i==16)
    {
        PlaySound(TEXT("audio/16.wav"),NULL,SND_SYNC);
    }
    else if(i==17)
    {
        PlaySound(TEXT("audio/17.wav"),NULL,SND_SYNC);
    }
    else if(i==18)
    {
        PlaySound(TEXT("audio/18.wav"),NULL,SND_SYNC);
    }
    else if(i==20)
    {
        PlaySound(TEXT("audio/20.wav"),NULL,SND_SYNC);
    }
    else if(i==21)
    {
        PlaySound(TEXT("audio/21.wav"),NULL,SND_SYNC);
    }
    else if(i==24)
    {
        PlaySound(TEXT("audio/24.wav"),NULL,SND_SYNC);
    }
    else if(i==25)
    {
        PlaySound(TEXT("audio/25.wav"),NULL,SND_SYNC);
    }
    else if(i==27)
    {
        PlaySound(TEXT("audio/27.wav"),NULL,SND_SYNC);
    }
    else if(i==28)
    {
        PlaySound(TEXT("audio/28.wav"),NULL,SND_SYNC);
    }
    else if(i==30)
    {
        PlaySound(TEXT("audio/30.wav"),NULL,SND_SYNC);
    }
    else if(i==32)
    {
        PlaySound(TEXT("audio/32.wav"),NULL,SND_SYNC);
    }
    else if(i==35)
    {
        PlaySound(TEXT("audio/35.wav"),NULL,SND_SYNC);
    }
    else if(i==36)
    {
        PlaySound(TEXT("audio/36.wav"),NULL,SND_SYNC);
    }
    else if(i==40)
    {
        PlaySound(TEXT("audio/40.wav"),NULL,SND_SYNC);
    }
    else if(i==42)
    {
        PlaySound(TEXT("audio/42.wav"),NULL,SND_SYNC);
    }
    else if(i==45)
    {
        PlaySound(TEXT("audio/45.wav"),NULL,SND_SYNC);
    }
    else if(i==48)
    {
        PlaySound(TEXT("audio/48.wav"),NULL,SND_SYNC);
    }
    else if(i==49)
    {
        PlaySound(TEXT("audio/49.wav"),NULL,SND_SYNC);
    }
    else if(i==50)
    {
        PlaySound(TEXT("audio/50.wav"),NULL,SND_SYNC);
    }
    else if(i==54)
    {
        PlaySound(TEXT("audio/54.wav"),NULL,SND_SYNC);
    }
    else if(i==56)
    {
        PlaySound(TEXT("audio/56.wav"),NULL,SND_SYNC);
    }
    else if(i==60)
    {
        PlaySound(TEXT("audio/60.wav"),NULL,SND_SYNC);
    }
    else if(i==63)
    {
        PlaySound(TEXT("audio/63.wav"),NULL,SND_SYNC);
    }
    else if(i==64)
    {
        PlaySound(TEXT("audio/64.wav"),NULL,SND_SYNC);
    }
    else if(i==70)
    {
        PlaySound(TEXT("audio/70.wav"),NULL,SND_SYNC);
    }
    else if(i==72)
    {
        PlaySound(TEXT("audio/72.wav"),NULL,SND_SYNC);
    }
    else if(i==80)
    {
        PlaySound(TEXT("audio/80.wav"),NULL,SND_SYNC);
    }
    else if(i==81)
    {
        PlaySound(TEXT("audio/81.wav"),NULL,SND_SYNC);
    }
    else if(i==90)
    {
        PlaySound(TEXT("audio/90.wav"),NULL,SND_SYNC);
    }
    else
    {
        PlaySound(TEXT("audio/0.wav"),NULL,SND_SYNC);
    }
}

void sum(int m,int n)
{
    setcolor(1);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,30,"SUMMATION");
    setcolor(15);
    char st1[1],st2[1],st3[2];
    gcvt(m,1,st1);
    for(int i=1,j=0; i<=m; i++)
    {
        line(40+j,70,40+j,150);
        j=j+20;
    }
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(7);
    outtextxy(80,180,st1);
    gcvt(n,1,st2);
    outtextxy(450,180,st2);
    for(int i=1,j=0; i<=n; i++)
    {
        line(400+j,70,400+j,150);
        j=j+20;
    }
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    setcolor(WHITE);
    outtextxy(60,220,"TO SUM,");
      setcolor(CYAN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(90,250,"WE HAVE TO COUNT ALL THE LINES");
    PlaySound(TEXT("audio/sum_ins1.wav"),NULL,SND_SYNC);
    PlaySound(TEXT("audio/sum_ins2.wav"),NULL,SND_SYNC);
    for(int i=1,j=0; i<=m+n; i++)
    {
        if(i==m+1)
        {
            delay(1500);
        }
        setcolor(3);
        if(i>m)
        {
            line(400+j,70,400+j,150);
            j=j+20;
        }
        else
        {
            line(40+j,70,40+j,150);
            j=j+20;
            if(i==m)
            {
                j=0;
            }
        }
        sound_number(i);
    }
    gcvt(n+m,2,st3);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(GREEN);
    outtextxy(150,300,"SO THE ANSWER IS:");
    PlaySound(TEXT("audio/ans.wav"),NULL,SND_SYNC);
    sound_number(m+n);
    outtextxy(400,300,st3);
}

void subtract(int m,int n)
{
    setcolor(1);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(140,30,"SUBTRACTION");
    setcolor(15);
    char st1[1],st2[1],st3[2];
    gcvt(m,1,st1);
    for(int i=1,j=0; i<=m; i++)
    {
        line(40+j,70,40+j,150);
        j=j+20;
    }
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(7);
    outtextxy(80,180,st1);
    for(int i=1,j=0; i<=n; i++)
    {
        line(400+j,70,400+j,150);
        j=j+20;
    }
    gcvt(n,1,st2);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(7);
    outtextxy(450,180,st2);
    delay(1000);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(40,220,"AT FIRST,");
    delay(300);
    setcolor(RED);
    outtextxy(60,240,"ERASE THE LINES, WE WANT TO SUBTRACT");
    PlaySound(TEXT("audio/sub_ins1.wav"),NULL,SND_SYNC);
    for(int i=1,j=0,k=0; i<=n; i++)
    {
        setcolor(0);
        line(400+j,70,400+j,150);
        j=j+20;
        delay(800);
        setcolor(4);
        line(40+k,70,40+k,150);
        PlaySound(TEXT("audio/click.wav"),NULL,SND_SYNC);
        k=k+20;
        delay(1200);
    }
    //erasing n
    setcolor(0);
    outtextxy(450,180,st2);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(40,265,"NOW,");
    setcolor(CYAN);
    outtextxy(60,285,"COUNT THE REMAINING LINES");
    PlaySound(TEXT("audio/sub_ins2.wav"),NULL,SND_SYNC);
    delay(1000);
    for(int i=n,z=i*20,p=1; i<m; i++,p++)
    {
        setcolor(3);
        line(40+z,70,40+z,150);
        z=z+20;
        sound_number(p);
        delay(500);
    }
    delay(500);
    gcvt(m-n,2,st3);
    setcolor(GREEN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(90,320,"SO THE ANSWER IS:");
    PlaySound(TEXT("audio/ans.wav"),NULL,SND_SYNC);
    sound_number(m-n);
    outtextxy(340,320,st3);
}
void subNotPossible()
{
    setcolor(1);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(140,30,"SUBTRACTION");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    setcolor(4);
    outtextxy(50,200,"SUBTRACT, NOT POSSSIBLE!");
    PlaySound(TEXT("audio/not_possible.wav"),NULL,SND_SYNC);
}

//multiplication
void mul(int m,int n)
{
    setcolor(1);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(100,30,"MULTIPLICATION");
    setcolor(15);
    char st1[1],st2[1],st3[2];
    gcvt(m,1,st1);
    for(int i=1,j=0; i<=m; i++)
    {
        line(40+j,70,40+j,150);
        j=j+20;
    }
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(7);
    outtextxy(80,150,st1);
    gcvt(n,1,st2);
    outtextxy(450,150,st2);
    for(int i=1,j=0; i<=n; i++)
    {
        line(400+j,70,400+j,150);
        j=j+20;
    }
   //draw result lines
    for(int k=1,j=0;k<=n;k++)
    {
        for(int i=1;i<=m; i++)
    {
        line(40+j,200,40+j,270);
        j=j+20;
    }
    }
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(30,170,"AFTER MULTIPLICATION,");

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(60,280,"TO MULTIPLY,");
    setcolor(CYAN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(90,310,"WE HAVE TO COUNT THE LINES");
    PlaySound(TEXT("audio/mul_ins1.wav"),NULL,SND_SYNC);
    PlaySound(TEXT("audio/sum_ins2.wav"),NULL,SND_SYNC);
    //count lines
    for(int i=1,j=0; i<=m*n; i++)
    {
        setcolor(3);
        line(40+j,200,40+j,270);
            j=j+20;
        sound_number(i);
    }
    gcvt(n*m,2,st3);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(GREEN);
    outtextxy(150,335,"SO THE ANSWER IS:");
    PlaySound(TEXT("audio/ans.wav"),NULL,SND_SYNC);
    sound_number(m*n);
    outtextxy(400,335,st3);
}

//division
void division(int m,int n)
{
    setcolor(1);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(100,30,"DIVISION");
    setcolor(15);
    char st1[1],st2[1],st3[2];
    gcvt(m,1,st1);
    for(int i=1,j=0; i<=m; i++)
    {
        line(40+j,70,40+j,150);
        j=j+20;
    }
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(7);
    outtextxy(80,150,st1);
    gcvt(n,1,st2);
    outtextxy(450,150,st2);
    for(int i=1,j=0; i<=n; i++)
    {
        line(400+j,70,400+j,150);
        j=j+20;
    }
    //result lines
        for(int i=1 ,j=0;i<=m/n; i++)
    {
        line(40+j,200,40+j,270);
        j=j+20;
    }

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(30,170,"AFTER DIVISION,");

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(60,280,"TO DIVIDE,");
    setcolor(CYAN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(90,310,"WE HAVE TO COUNT THE LINES");
    PlaySound(TEXT("audio/div_ins.wav"),NULL,SND_SYNC);
    PlaySound(TEXT("audio/sum_ins2.wav"),NULL,SND_SYNC);
    //count result line
    for(int i=1,j=0; i<=m/n; i++)
    {
        setcolor(3);
        line(40+j,200,40+j,270);
            j=j+20;
        sound_number(i);
    }
    gcvt(m/n,1,st3);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(GREEN);
    outtextxy(150,335,"SO THE ANSWER IS:");
    PlaySound(TEXT("audio/ans.wav"),NULL,SND_SYNC);
    sound_number(m/n);
    outtextxy(400,335,st3);
}

void divNotPossible()
{
    setcolor(1);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(140,30,"DIVISION");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    setcolor(4);
    outtextxy(50,200,"DIVISION, NOT POSSSIBLE!");
    PlaySound(TEXT("audio/divNotPossible.wav"),NULL,SND_SYNC);
}

//geometry
void Rectangle()
{
    setcolor(LIGHTBLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,30,"GEOMETRY");
    setcolor(WHITE);
    rectangle(80,90,520,230);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    for(int i=0; i<=10; i++)
    {
        setcolor(i);
        outtextxy(180,250,"RECTANGLE");
        delay(150);
        if(i==7)
        PlaySound(TEXT("audio/geometry/rectangle.wav"),NULL,SND_SYNC);
    }
    setcolor(WHITE);
    //description
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     outtextxy(100,280,"It is RECTANGLE,");
     outtextxy(100,300,"Because it has 4 angles.");
     PlaySound(TEXT("audio/geometry/rectangle_ins1.wav"),NULL,SND_SYNC);

     outtextxy(100,325,"Count the angles.");
    PlaySound(TEXT("audio/geometry/rectangle_ins2.wav "),NULL,SND_SYNC);
     setcolor(GREEN);
     arc(80, 230, 0,90, 30);
     outtextxy(100,190,"1");
     PlaySound(TEXT("audio/1.wav"),NULL,SND_SYNC);
     delay(100);
     arc(80,90,270,360,30);
     outtextxy(105,110,"2");
     PlaySound(TEXT("audio/2.wav"),NULL,SND_SYNC);
      delay(100);
     arc(520,90,180,270,30);
     outtextxy(490,120,"3");
     PlaySound(TEXT("audio/3.wav"),NULL,SND_SYNC);
      delay(100);
      arc(520,230,90,180,30);
      outtextxy(490,185,"4");
      PlaySound(TEXT("audio/4.wav"),NULL,SND_SYNC);
       delay(100);
     setcolor(GREEN);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     outtextxy(100,370,"Enter 'n' for next");
     setcolor(RED);
     outtextxy(100,400,"Enter 'x' for back to Menu");
}
void Triangle()
{
    setcolor(LIGHTBLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,30,"GEOMETRY");
    //triangle
    setcolor(WHITE);
    line(300,90,80,230);
    line(300,90,520,230);
    line(80,230,520,230);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    for(int i=0; i<=10; i++)
    {
        setcolor(i);
        outtextxy(180,250,"TRIANGLE");
        delay(150);
        if(i==7)
        PlaySound(TEXT("audio/geometry/triangle.wav"),NULL,SND_SYNC);
    }
    setcolor(WHITE);
    //description
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     outtextxy(100,280,"It is TRIANGLE,");
     outtextxy(100,295,"Because it has 3 angles.");
     PlaySound(TEXT("audio/geometry/triangle_ins1.wav"),NULL,SND_SYNC);
     outtextxy(100,320,"Count the angles.");
     PlaySound(TEXT("audio/geometry/triangle_ins2.wav"),NULL,SND_SYNC);
     setcolor(GREEN);

     arc(300, 90, 200,340, 40);
     outtextxy(300,130,"1");
     PlaySound(TEXT("audio/1.wav"),NULL,SND_SYNC);

     arc(520,230,110,200,40);
     outtextxy(460,210,"2");
     PlaySound(TEXT("audio/2.wav"),NULL,SND_SYNC);

     arc(80,230,340,80,40);
     outtextxy(130,205,"3");
     PlaySound(TEXT("audio/3.wav"),NULL,SND_SYNC);

     setcolor(GREEN);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     outtextxy(100,370,"Enter 'n' for next.");
     setcolor(RED);
     outtextxy(100,400,"Enter 'x' for back to Menu.");
    // cleardevice();
}
void Circle()
{
    setcolor(LIGHTBLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,30,"GEOMETRY");
    //circle
    setcolor(WHITE);
    circle(300,170,90);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    for(int i=0; i<=10; i++)
    {
        setcolor(i);
        outtextxy(220,270,"CIRCLE");
        delay(150);
        if(i==7)
        PlaySound(TEXT("audio/geometry/CIRCLE.wav"),NULL,SND_SYNC);
    }
    //description
    setcolor(WHITE);
     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     outtextxy(85,320,"A Circle have a CENTRE and RADIUS.");
     PlaySound(TEXT("audio/geometry/circle_ins1.wav"),NULL,SND_SYNC);

    setcolor(GREEN);
    //centre
    circle(300,170,3);
     PlaySound(TEXT("audio/geometry/circle_ins2.wav"),NULL,SND_SYNC);
     delay(300);
     //radius
     line(300,170,390,170);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(300,175,"Radius");
     PlaySound(TEXT("audio/geometry/circle_ins3"),NULL,SND_SYNC);

     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
     setcolor(RED);
     outtextxy(100,400,"Enter 'x' for back to Menu.");
   //  cleardevice();
}

//alphabet
void Capital_A()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    /// Front AREA
    line(450,100,500,100);
    line(450,100,440,105);
    line(450,110,500,110);
    line(450,110,440,105);
    /// TOP FRONT WING
    line(500,100,520,30);
    line(520,30,520,100);
    /// BOTTOM FRONT WING
    line(500,110,520,180);
    line(520,180,520,110);
    /// REAR AREA
    line(520,100,570,100);
    line(520,110,570,110);
    /// TOP REAR AREA
    line(570,100,580,70);
    line(580,70,580,100);
    ///BOTTOM REAR WING
    line(570,110,580,140);
    line(580,140,580,110);
    /// LAST AREA
    line(580,100,585,100);
    line(585,110,585,100);
    settextstyle(8,HORIZ_DIR,5);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"A for AEROPLANE");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,250,"A");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/A.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/aeroplane.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_B()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    int j,l,point[30],flag=0;
    setcolor(RED);
    rectangle(100,300,200,360);
    setcolor(YELLOW);
    rectangle(180,310,190,320);
    setcolor(YELLOW);
    rectangle(140,310,130,320);
    setcolor(YELLOW);
    rectangle(110,310,120,320);
    setcolor(GREEN);
    rectangle(156,315,161,360);
    setcolor(GREEN);
    rectangle(162,315,167,360);
    setcolor(GREEN);
    circle(120,370,10);
    circle(180,370,10);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(80,400,"B for BUS");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"B");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/B.wav"),NULL,SND_SYNC);
            else

                PlaySound(TEXT("audio/word/bus.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_C()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    ellipse(200,380,0,360,50,10);
    ellipse(200,300,0,360,70,10);
    line(130,300,150,380);
    line(270,300,250,380);
    ellipse(270,340,-110,100,30,15);
    ellipse(270,340,-110,100,31,14);
    //text
   setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,400,"C for CUP");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"C");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/C.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/cup.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_D()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //head
    circle(200,280,20);
    //body
    rectangle(180,310,220,360);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(200,315,WHITE);
    //kneck
    rectangle(190,300,210,310);
    setfillstyle(SOLID_FILL,RED);
    floodfill(191,301,WHITE);
    //hand
    line(190,310,160,350);
    line(191,310,161,350);
    line(189,310,159,350);
    line(210,310,240,350);
    line(211,310,241,350);
    line(209,310,239,350);
    floodfill(181,311,WHITE);
    floodfill(219,311,WHITE);
    //leg
    rectangle(207,360,212,405);
    rectangle(190,360,195,405);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(208,361,WHITE);
    floodfill(191,361,WHITE);
    //eye
    circle(194,270,3);
    circle(207,270,3);
    //mouth
    ellipse(200,285,180,360,8,10);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,420,"D for DOLL");
    setcolor(WHITE);
    line(50,415,maxx-50,415);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"D");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/D.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/doll.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_E()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    ellipse(210,340,0,360,25,40);
    ellipse(280,355,0,360,40,25);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(210,360,WHITE);
    floodfill(280,355,WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,400,"E for EGG");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"E");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/E.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/egg.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_F()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    //fan
    setcolor(WHITE);
    settextstyle(8,HORIZ_DIR,5);
    ellipse(250,330,0,360,20,8);
    line(243,322,243,295);
    line(255,322,255,295);
    ellipse(190,330,0,360,40,4);
    ellipse(310,330,0,360,40,4);
    ellipse(250,320,203,336,4,40);
    setfillstyle(SOLID_FILL,RED);
    floodfill(250,330,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(190,330,WHITE);
    floodfill(310,330,WHITE);
    floodfill(250,350,WHITE);
    //text
    setcolor(LIGHTBLUE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,420,"F for FAN");
    setcolor(WHITE);
    line(50,415,maxx-50,415);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"F");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/F.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/fan.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_G()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //glass
    settextstyle(8,HORIZ_DIR,5);
    ellipse(200,380,0,360,35,8);
    ellipse(200,290,0,360,45,10);
    line(155,290,165,380);
    line(245,290,235,380);
    //texr
    setcolor(LIGHTBLUE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,400,"G for GLASS");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"G");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/G.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/glass.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_H()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    settextstyle(8,HORIZ_DIR,5);
    ellipse(250,350,0,360,23,9);
    line(227,350,220,370);
    line(273,350,280,370);
    ellipse(250,390,112,428,80,20);
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(250,390,WHITE);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(250,350,WHITE);
    //text
    setcolor(LIGHTBLUE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,420,"H for HAT");
    setcolor(WHITE);
    line(50,410,maxx-50,410);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"H");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/H.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/hat.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_I()
{

    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);

    ellipse(180,300,0,180,40,100);
    line(140,300,140,335);
    line(220,300,220,335);
    line(140,335,220,335);
    //stick of ice cream
    line(175,335,175,380);
    line(190,335,190,380);
    line(175,380,190,380);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(180,300,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(176,336,WHITE);
//text
    setcolor(LIGHTBLUE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,400,"I for ICE-CREAM");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"I");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/I.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/icecream"),NULL,SND_SYNC);

        }
    }
    cleardevice();
}
void Capital_J()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    ellipse(200,300,41,319,100,40);
    arc(200,300,-20,20,80);
    line(280,298,315,298);
    line(280,302,315,302);
    circle(319,300,4);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(190,290,WHITE);
    setfillstyle(SOLID_FILL,6);
    floodfill(319,300,WHITE);
    floodfill(300,300,WHITE);
    setcolor(YELLOW);
    line(110,280,110,283);
    line(110,220,110,223);
    line(120,300,120,303);
    line(130,290,130,293);
    line(150,265,150,268);
    line(140,270,140,273);
    line(140,300,140,303);
    line(150,290,150,293);
    line(150,320,150,323);
    line(160,330,160,333);
    line(160,330,160,333);
    line(180,280,180,283);
    line(180,320,180,323);
    line(170,300,170,303);
    line(190,320,190,323);
    line(190,280,190,283);
    line(195,300,195,303);
    line(210,300,210,303);
    line(200,270,200,273);
    line(200,315,200,318);
    line(220,270,220,273);
    line(220,265,220,266);
    line(220,330,220,333);
    line(230,300,230,303);
    line(240, 280,240,283);
    line(240,320,240,323);
    line(255,300,255,303);
    line(265,300,265,303);
    line(260,270,260,273);
    line(265,320,265,323);

//text
    setcolor(LIGHTBLUE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,400,"J for JACKFRUIT");
    setcolor(WHITE);
    line(50,370,maxx-50,370);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,100,"J");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/J.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/jackfruit"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_K()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    //kite
    line(180,270,140,320);
    line(180,270,220,320);
    line(140,320,180,370);
    line(220,320,180,370);
    line(180,370,170,390);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(200,330,WHITE);
    //kite tail
    line(180,370,190,390);
    line(170,390,190,390);
    setfillstyle(SOLID_FILL,RED);
    floodfill(180,380,WHITE);
    setcolor(LIGHTGRAY);
    line(180,270,180,370);
    line(140,320,220,320);
    //text
    setcolor(LIGHTGREEN);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,410,"K for KITE");

    setcolor(WHITE);
    line(50,395,maxx-50,395);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"K");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/K.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/kite.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_L()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    ellipse(250,300,0,360,40,60);
    rectangle(245,360,255,400);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(250,300,WHITE);
    setfillstyle(SOLID_FILL,50);
    floodfill(250,370,WHITE);
    setcolor(LIGHTGRAY);
    line(250,360,250,245);
    line(250,340,275,315);
    line(250,310,225,285);
    line(250,290,275,265);
    line(250,260,240,250);
//text
    setcolor(LIGHTGREEN);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
    outtextxy(90,420,"L for LEAF");
    setcolor(WHITE);
    line(50,405,maxx-50,405);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"L");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/L.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/leaf.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_M()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    arc(520,70,0,360,55);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(530,60,WHITE);
    //text
    setcolor(LIGHTGREEN);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
    outtextxy(90,400,"M for MOON");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,9);
        outtextxy(50+i,280,"M");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/M.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/moon.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_N()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    rectangle(100,250,530,380);
    setfillstyle(HATCH_FILL,BROWN);
    floodfill(101,251,WHITE);
//text
    setcolor(LIGHTGREEN);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(100,410,"N for NET");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"N");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/N.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/net.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_O()
{

    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    ellipse(250,300,0,360,60,50);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(251,300,WHITE);
    line(247,250,247,240);
    line(253,250,253,240);
    line(247,240,253,240);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(248,242,WHITE);
    //leaf
    //text
    setcolor(LIGHTGREEN);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,420,"O for ORANGE");
    setcolor(WHITE);
    line(50,395,maxx-50,395);

    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"O");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
               {
                   PlaySound(TEXT("audio/letter/O.wav"),NULL,SND_SYNC);
               }
            else
                PlaySound(TEXT("audio/word/orange.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Capital_P()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    rectangle(100,330,400,350);
    line(400,330,435,340);
    line(400,350,435,340);
    setfillstyle(SOLID_FILL,RED);
    floodfill(300,340,WHITE);
//text
    setcolor(LIGHTMAGENTA);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
    outtextxy(90,400,"P for PEN");
    setcolor(WHITE);
    line(50,380,maxx-50,380);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"P");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/P.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/pen.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_Q()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    bar3d(100,300,300,330,100,1);
    for(int i=5; i<170; i+=20)
    {
        line(210+i,250,211+i,252);
        line(190+i,260,192+i,261);
        line(170+i,270,171+i,272);
        line( 150+i,280,152+i,281);
        line(130+i,290,131+i,292);
    }
    setfillstyle(SOLID_FILL,3);
    floodfill(320,270,WHITE);
    floodfill(360,270,WHITE);
    //text
    setcolor(LIGHTMAGENTA);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,390,"Q for QUILT");
    setcolor(WHITE);
    line(50,360,maxx-50,360);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"Q");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/Q.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/quilt.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_R()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    rectangle(180,300,350,380);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(320,320,WHITE);
    //text
    setcolor(LIGHTMAGENTA);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(70,410,"R for RECTANGLE");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-70; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"R");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/R.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/rectangle.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_S()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    arc(520,70,0,360,55);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(530,60,WHITE);
    //text
    setcolor(LIGHTMAGENTA);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,410,"S for SUN");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,260,"S");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/S.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/sun.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_T()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    line(250,250,180,350);
    line(250,250,320,350);
    line(180,350,320,350);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(260,290,WHITE);
//text
    setcolor(LIGHTMAGENTA);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,400,"T for TRIANGLE");
    setcolor(WHITE);
    line(50,360,maxx-50,360);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"T");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/T.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/triangle.wav"),NULL,SND_SYNC);

        }
    }
    cleardevice();
}
void Capital_U()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);

    ellipse(250,300,0,180,85,70);
    //handle
    line(165,300,335,300);
    line(248,300,248,380);
    line(252,300,252,385);
    line(252,385,236,385);
    line(236,385,236,370);
    line(240,380,248,380);
    line(240,380,240,370);
    line(236,370,240,370);
    rectangle(247,230,252,210);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(250,350,WHITE);
    floodfill(248,215,WHITE);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(250,280,WHITE);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,400,"U for UMBRELLA");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"U");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/U.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/umbrella.wav"),NULL,SND_SYNC);

        }
    }
    cleardevice();
}
void Capital_V()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);

    /***CAR BODY ******/
    line(50,370,90,370);
    arc(110,370,0,180,20);
    line(130,370,220,370);
    arc(240,370,0,180,20);
    line(260,370,300,370);
    line(300,370,300,350);
    line(300,350,240,330);
    line(240,330,200,300);
    line(200,300,110,300);
    line(110,300,80,330);
    line(80,330,50,340);
    line(50,340,50,370);

    /***CAR Windows***/
    line(165,305,165,330);
    line(165,330,230,330);
    line(230,330,195,305);
    line(195,305,165,305);

    line(160,305,160,330);
    line(160,330,95,330);
    line(95,330,120,305);
    line(120,305,160,305);

    /**Wheels**/
    circle(110,370,17);
    circle(240,370,17);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,410,"V for VEHICLE");
    setcolor(WHITE);
    line(50,390,maxx-50,390);  //ROAD

    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,50,"V");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/V.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/vehicle.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_W()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,DARKGRAY);
    //out border
    rectangle(100,160,450,380);
    //next
    rectangle(110,170,440,370);
    floodfill(105,162,WHITE);
    //middle
    rectangle(260,170,270,370);
    floodfill(261,171,WHITE);
    rectangle(273,170,278,370);
    floodfill(274,171,WHITE);
    //first column
    rectangle(120,178,255,233);
    line(123,178,123,233);
    line(123,182,255,182);
    rectangle(120,241,255,293);
    line(123,241,123,293);
    line(123,245,255,245);
    rectangle(120,300,255,360);
    line(123,300,123,360);
    line(123,304,255,304);
    //second column
    rectangle(290,178,425,233);
    line(293,178,293,233);
    line(293,182,425,182);
    rectangle(290,241,425,293);
    line(293,241,293,293);
    line(293,245,425,245);
    rectangle(290,300,425,360);
    line(293,300,293,360);
    line(293,304,425,304);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(60,410,"W for WINDOW");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,9);
        outtextxy(50+i,30,"W");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/W.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/window.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}
void Capital_X()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
   //jointer
    rectangle(100,180,440,200);
   rectangle(100,340,440,360);
   //bars
   //1
   rectangle(130,160,170,380);
   circle(150,190,5);
   circle(150,350,5);
   //2
   rectangle(190,160,230,380);
   circle(210,190,5);
   circle(210,350,5);
   //3
   rectangle(250,160,290,380);
   circle(270,190,5);
   circle(270,350,5);
   //4
   rectangle(310,160,350,380);
   circle(330,190,5);
   circle(330,350,5);
   //5
   rectangle(370,160,410,380);
    circle(390,190,5);
   circle(390,350,5);
   //hammer

     rectangle(491,220,494,275);
     circle(493,215,6);
     setfillstyle(SOLID_FILL,LIGHTGRAY);
      floodfill(493,215,WHITE);

    int A[6];
    A[1]=4;
    A[2]=14;
    A[3]=9;
    A[4]=2;
    A[5]=5;
    for(int i=1,j=131;i<6;i++)
    {
         setfillstyle(SOLID_FILL,A[i]);
         floodfill(j,161,WHITE);
         floodfill(j,181,WHITE);
          floodfill(j,211,WHITE);
          floodfill(j,211,WHITE);
          floodfill(j,211,WHITE);
          floodfill(j,359,WHITE);
          floodfill(j,379,WHITE);
         j=j+60;
    }
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(60,410,"X for XYLOPHONE");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,20,"X");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/X.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/xylophone.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Capital_Y()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(YELLOW);
    line(250,250,200,340);
    line(250,250,300,340);
    line(200,340,300,340);
    rectangle(350,270,470,340);
    arc(100,300,0,360,40);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(250,300,YELLOW);
    floodfill(370,300,YELLOW);
    floodfill(100,300,YELLOW);
    //text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(90,410,"Y for YELLOW");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,30,"Y");
        delay(10);
        if(i==20||i==250)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/Y.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/yellow.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void Capital_Z()
{
    int maxx=getmaxx();
    int maxy=getmaxy();
    setcolor(WHITE);
    rectangle(60,270,maxx-70,380);
    line(80,270,80,380);
    line(160,270,160,380);
    line(240,270,240,380);
    line(320,270,320,380);
    line(400,270,400,380);
    line(480,270,480,380);
    line(560,270,560,380);

    setfillstyle(SOLID_FILL,WHITE);
    floodfill(81,271,WHITE);
    floodfill(241,271,WHITE);
    floodfill(401,271,WHITE);
    floodfill(561,271,WHITE);
//text
    setcolor(LIGHTRED);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    outtextxy(60,410,"Z for ZEBRA-CROSSING");
    setcolor(WHITE);
    line(50,390,maxx-50,390);
    for(int i=0; i<maxy-50; i++)
    {
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,10);
        outtextxy(50+i,30,"Z");
        delay(10);
        if(i==20||i==300)
        {
            if(i==20)
                PlaySound(TEXT("audio/letter/Z.wav"),NULL,SND_SYNC);
            else
                PlaySound(TEXT("audio/word/zebra crossing.wav"),NULL,SND_SYNC);
        }
    }
    cleardevice();
}

void option_c_x()
{
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(2);
    outtextxy(70,400,"TYPE c TO CONTINUE.");
    setcolor(4);
    outtextxy(70,420,"TYPE x TO BACK MAIN-MENU.");
}

void optionAlphabet()
{
    setcolor(CYAN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,40,"ALPHABET");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    setcolor(WHITE);
    outtextxy(70,150,"LET'S LEARN ALPHABET!! ");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(70,230,"PRESS ANY LETTER:");
    setcolor(RED);
    settextstyle(SIMPLEX_FONT,HORIZ_DIR,1);
    outtextxy(70,320,"PRESS '0' FOR GO BACK.");
}
void optionGeometry()
{
    setcolor(GREEN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,30,"GEOMETRY");
    setcolor(15);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(110,100,"PRESS 1 FOR GEOMETRY LEARNING");
    outtextxy(110,160,"PRESS 2 FOR SKILL TEST");
    setcolor(RED);
    outtextxy(110,300,"PRESS x TO GO BACK");
}
void optionMathematics()
{
    setcolor(GREEN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(150,30,"MATHEMATICS");

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(15);
    outtextxy(20,90, "PRESS 1 TO LEARN COUNTING");
    outtextxy(20,140,"PRESS 2 TO LEARN ADD OF TWO DIGIT");
    outtextxy(20,190,"PRESS 3 TO LEARN SUBTRACTION OF TWO DIGIT");
    outtextxy(20,240,"PRESS 4 TO LEARN MULTIPLICATION OF TWO DIGIT");
    outtextxy(20,290,"PRESS 5 TO LEARN DIVISION OF TWO DIGIT");
    setcolor(RED);
    outtextxy(110,360,"PRESS x TO GO BACK");
}

void optionCounting()
{
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    setcolor(WHITE);
    outtextxy(70,100,"LET'S LEARN COUNTING!! ");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
    outtextxy(70,230,"PRESS ANY NUMBER:");
    setcolor(RED);
    settextstyle(SIMPLEX_FONT,HORIZ_DIR,1);
    outtextxy(70,320,"PRESS b FOR GO BACK.");

}
void mainMenu()
{
    settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
    setcolor(9);
    outtextxy(110,20,"Main Menu");
    line(110,50,350,50);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(7);
    outtextxy(110,100,"PRESS 1 FOR MATHEMATICS");
    outtextxy(110,160,"PRESS 2 FOR GEOMATRY");
    outtextxy(110,220,"PRESS 3 FOR ALPHABET");
    setcolor(RED);
    outtextxy(110,350,"PRESS x FOR QUITE");
}
int main()
{
    int driver=DETECT,mode;
    int gm;
    initgraph(&driver,&mode,"C:\\TC\\BGT ");
    settextstyle(GOTHIC_FONT,HORIZ_DIR,2);
    setcolor(10);
    outtextxy(50,200,"WELCOME TO CHILDERN'S TUTOR!");
    delay(1500);
    cleardevice();

    char i;
    mainMenu();
    //cleardevice();
    while(1)
    {
        i=getch();
        cleardevice();
        if(i=='1')
        {
            optionMathematics();
            while(1)
            {
                char d;
                d=getch();

                if(d=='1')
                {
                    while(1)
                 {
                   cleardevice();
                   optionCounting();
                char d;
                d=getch();
                if(d=='b')
                {
                    cleardevice();
                    optionMathematics();
                    break;
                }
                else if(d=='0')
                {
                    cleardevice();
                    Zero();
                }
                else if(d=='1')
                {
                    cleardevice();
                    One();
                }
                else if(d=='2')
                {
                    cleardevice();
                    Two();
                }
                else if(d=='3')
                {
                    cleardevice();
                    Three();
                }
                else if(d=='4')
                {
                    cleardevice();
                    Four();
                }
                else if(d=='5')
                {
                    cleardevice();
                    Five();
                }
                else if(d=='6')
                {
                    cleardevice();
                    Six();
                }
                else if(d=='7')
                {
                    cleardevice();
                    Seven();
                }
                else if(d=='8')
                {
                    cleardevice();
                    Eight();
                }
                else if(d=='9')
                {
                    cleardevice();
                    Nine();
                }

                 }
                }
                else if(d=='2')
                {
                    //summmation
                    while(1)
                    {
                        cleardevice();

                        char number[2],st1[1],st2[1];
                        int t=0,a[2],n,m;
                        cleardevice();
                        while(t<2)
                        {
                            setcolor(1);
                            settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
                            outtextxy(150,30,"SUMMATION");
                            settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                            setcolor(15);
                            outtextxy(70,100,"TYPE TWO DIGIT:");
                            number[t]=getch();
                            if(number[t]=='1')
                            {
                                a[t]=1;
                            }
                            else if(number[t]=='2')
                            {
                                a[t]=2;
                            }
                            else if(number[t]=='3')
                            {
                                a[t]=3;
                            }
                            else if(number[t]=='4')
                            {
                                a[t]=4;
                            }
                            else if(number[t]=='5')
                            {
                                a[t]=5;
                            }
                            else if(number[t]=='6')
                            {
                                a[t]=6;
                            }
                            else if(number[t]=='7')
                            {
                                a[t]=7;
                            }
                            else if(number[t]=='8')
                            {
                                a[t]=8;
                            }
                            else if(number[t]=='9')
                            {
                                a[t]=9;
                            }
                            else if(number[t]=='0')
                            {
                                a[t]=0;
                            }
                            if(t==0)
                            {
                                //this is the first integer input   as t==0
                                n=a[t];
                                gcvt(n,1,st1);
                                outtextxy(280,100,st1);
                                outtextxy(300,100,"+ ");
                            }
                            else
                            {
                                m=a[t];
                                gcvt(m,1,st2);
                                outtextxy(320,100,st2);
                            }
                            t++;
                        }
                        delay(200);
                        cleardevice();
                        sum(n,m);
                        option_c_x();
                        char c;
                        c=getch();
                        if(c=='c')
                        {
                            continue;
                        }
                        else if(c=='x')
                        {
                            cleardevice();
                            optionMathematics();
                            break;
                        }
                    }
                }
                else if(d=='3')
                {
                    //subtraction
                    while(1)
                    {
                        cleardevice();
                        char number[2],st1[1],st2[1];
                        setcolor(1);
                        settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
                        outtextxy(140,30,"SUBTRACTION");
                        int t=0,a[2],n,m;
                        while(t<2)
                        {
                            setcolor(15);
                            settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                            outtextxy(70,100,"TYPE TWO DIGIT:");
                            number[t]=getch();
                            if(number[t]=='1')
                            {
                                a[t]=1;
                            }
                            else if(number[t]=='2')
                            {
                                a[t]=2;
                            }
                            else if(number[t]=='3')
                            {
                                a[t]=3;
                            }
                            else if(number[t]=='4')
                            {
                                a[t]=4;
                            }
                            else if(number[t]=='5')
                            {
                                a[t]=5;
                            }
                            else if(number[t]=='6')
                            {
                                a[t]=6;
                            }
                            else if(number[t]=='7')
                            {
                                a[t]=7;
                            }
                            else if(number[t]=='8')
                            {
                                a[t]=8;
                            }
                            else if(number[t]=='9')
                            {
                                a[t]=9;
                            }
                            else if(number[t]=='0')
                            {
                                a[t]=0;
                            }
                            if(t==0)
                            {
                                n=a[t];
                                gcvt(n,1,st1);
                                outtextxy(280,100,st1);
                                outtextxy(300,100,"- ");
                            }
                            else
                            {
                                m=a[t];
                                gcvt(m,1,st2);
                                outtextxy(320,100,st2);
                            }
                            t++;
                        }
                        delay(200);
                        cleardevice();
                        if(m<=n)
                        {
                            subtract(n,m);
                        }
                        else
                        {
                            subNotPossible();
                        }
                        char c;
                        option_c_x();
                        c=getch();
                        if(c=='c')
                        {
                            cleardevice();
                            continue;
                        }
                        else if(c=='x')
                        {
                            cleardevice();
                            optionMathematics();
                            break;
                        }

                    }

                }
                else if ( d=='4')
                {
                  while(1)
                    {
                        cleardevice();

                        char number[2],st1[1],st2[1];
                        int t=0,a[2],n,m;
                        cleardevice();
                        while(t<2)
                        {
                            setcolor(1);
                            settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
                            outtextxy(150,30,"MULTIPLICATION");
                            settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                            setcolor(15);
                            outtextxy(70,100,"TYPE TWO DIGIT:");
                            number[t]=getch();
                            if(number[t]=='1')
                            {
                                a[t]=1;
                            }
                            else if(number[t]=='2')
                            {
                                a[t]=2;
                            }
                            else if(number[t]=='3')
                            {
                                a[t]=3;
                            }
                            else if(number[t]=='4')
                            {
                                a[t]=4;
                            }
                            else if(number[t]=='5')
                            {
                                a[t]=5;
                            }
                            else if(number[t]=='6')
                            {
                                a[t]=6;
                            }
                            else if(number[t]=='7')
                            {
                                a[t]=7;
                            }
                            else if(number[t]=='8')
                            {
                                a[t]=8;
                            }
                            else if(number[t]=='9')
                            {
                                a[t]=9;
                            }
                            else if(number[t]=='0')
                            {
                                a[t]=0;
                            }
                            if(t==0)
                            {
                                //this is the first integer input   as t==0
                                n=a[t];
                                gcvt(n,1,st1);
                                outtextxy(280,100,st1);
                                outtextxy(300,100,"* ");
                            }
                            else
                            {
                                m=a[t];
                                gcvt(m,1,st2);
                                outtextxy(320,100,st2);
                            }
                            t++;
                        }
                        delay(200);
                        cleardevice();
                        mul(n,m);
                        option_c_x();
                        char c;
                        c=getch();
                        if(c=='c')
                        {
                            continue;
                        }
                        else if(c=='x')
                        {
                            cleardevice();
                            optionMathematics();
                            break;
                        }
                    }

                }

                   else if ( d=='5')
                {
                  while(1)
                    {
                        cleardevice();

                        char number[2],st1[1],st2[1];
                        int t=0,a[2],n,m;
                        cleardevice();
                        while(t<2)
                        {
                            setcolor(1);
                            settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
                            outtextxy(150,30,"DIVISION");
                            settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                            setcolor(15);
                            outtextxy(70,100,"TYPE TWO DIGIT:");
                            number[t]=getch();
                            if(number[t]=='1')
                            {
                                a[t]=1;
                            }
                            else if(number[t]=='2')
                            {
                                a[t]=2;
                            }
                            else if(number[t]=='3')
                            {
                                a[t]=3;
                            }
                            else if(number[t]=='4')
                            {
                                a[t]=4;
                            }
                            else if(number[t]=='5')
                            {
                                a[t]=5;
                            }
                            else if(number[t]=='6')
                            {
                                a[t]=6;
                            }
                            else if(number[t]=='7')
                            {
                                a[t]=7;
                            }
                            else if(number[t]=='8')
                            {
                                a[t]=8;
                            }
                            else if(number[t]=='9')
                            {
                                a[t]=9;
                            }
                            else if(number[t]=='0')
                            {
                                a[t]=0;
                            }
                            if(t==0)
                            {
                                //this is the first integer input   as t==0
                                n=a[t];
                                gcvt(n,1,st1);
                                outtextxy(280,100,st1);
                                outtextxy(300,100,"/ ");
                            }
                            else
                            {
                                m=a[t];
                                gcvt(m,1,st2);
                                outtextxy(320,100,st2);
                            }
                            t++;
                        }
                        delay(200);
                        cleardevice();
                        if(m<n)
                        {
                            division(n,m);
                        }
                        else
                        {
                            divNotPossible();
                        }

                        option_c_x();
                        char c;
                        c=getch();
                        if(c=='c')
                        {
                            continue;
                        }
                        else if(c=='x')
                        {
                            cleardevice();
                            optionMathematics();
                            break;
                        }
                    }

                }
                else
                {
                    cleardevice();
                    mainMenu();
                    break;
                }
             }

            }
        else if(i=='2')
        {
           // optionGeometry();
           cleardevice();
           Rectangle();
           int cnt=1;
            while(1)
            {
                char d;
                d=getch();
                cnt++;
                if(d=='n')
                {
                    if(cnt%2==0)
                    {
                        cleardevice();
                        Triangle();
                    }
                    else
                    {
                        cleardevice();
                        Circle();
                    }
                }
                else if(d=='x')
                {
                    cleardevice();
                    mainMenu();
                    break;
                }
                else
                {
                    mainMenu();
                    break;
                }
            }
        }
        else if(i=='3')
        {
            while(1)
            {
                optionAlphabet();
                char d;
                d=getch();
                if(d=='0')
                {
                    cleardevice();
                    mainMenu();
                    break;
                }
                else if(d=='a')
                {
                    cleardevice();
                    Capital_A();
                }
                else if(d=='b')
                {
                    cleardevice();
                    Capital_B();
                }
                else if(d=='c')
                {
                    cleardevice();
                    Capital_C();
                }
                else if(d=='d')
                {
                    cleardevice();
                    Capital_D();
                }
                else if(d=='e')
                {
                    cleardevice();
                    Capital_E();
                }
                else if(d=='f')
                {
                    cleardevice();
                    Capital_F();
                }
                else if(d=='g')
                {
                    cleardevice();
                    Capital_G();
                }
                else if(d=='h')
                {
                    cleardevice();
                    Capital_H();
                }
                else if(d=='i')
                {
                    cleardevice();
                    Capital_I();
                }
                else if(d=='j')
                {
                    cleardevice();
                    Capital_J();
                }
                else if(d=='k')
                {
                    cleardevice();
                    Capital_K();
                }
                else if(d=='l')
                {
                    cleardevice();
                    Capital_L();
                }
                else if(d=='m')
                {
                    cleardevice();
                    Capital_M();
                }
                else if(d=='n')
                {
                    cleardevice();
                    Capital_N();
                }
                else if(d=='o')
                {
                    cleardevice();
                    Capital_O();
                }
            }
        }
        else if(i=='x')
        {
            settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
            setcolor(9);
            outtextxy(60,220,"THANK YOU!!");
            delay(700);
            outtextxy(80,250,"SEE YOU AGAIN.");
            delay(900);
            return 0;
        }
        else
        {
            mainMenu();
        }
    }
    getch();
    closegraph();
    return 0;
}
