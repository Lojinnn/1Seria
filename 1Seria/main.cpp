#include "TXLib.h"
#include "windows.h"
#include "iostream"
#include <cstdlib>

int red = 0;
int green = 0;
int blue = 0;

COLORREF color = RGB (red, green, blue);

const COLORREF FEILD = RGB(222, 185, 117);
const COLORREF DIRT2 = RGB(90, 67, 33);
const COLORREF DIRT1 = RGB(118, 84, 50);
const COLORREF REDBRICK_COLOR = RGB(230, 50, 50);
const COLORREF RED_WOOD = RGB(200, 34, 34);
const COLORREF BROWN_COLOR = RGB(128, 64, 48);
const COLORREF BLUE_COLOR = RGB(0,191-50, 255);
const COLORREF GRASS_COLOR = RGB(124-55, 200, 0);
const COLORREF YELLOW_COLOR = RGB(200, 200, 0);
const COLORREF CLOUD_COLOR = RGB(128, 128, 160);
const COLORREF CUAN_COLOR = RGB(230, 230, 255);
const COLORREF TREE = RGB(80+70, 136+70, 0);

const COLORREF DD = RGB(150,75,0);

const COLORREF ST = RGB(133, 94, 66);
const COLORREF ST_P = RGB(128,128,128);

void amb()
{
    POINT krisha[5] = {{300, 300}, {350, 250}, {450, 200}, {550, 250}, {600, 300}};

    txSetColor(RED_WOOD, 5);
    txSetFillColor(REDBRICK_COLOR);
    txRectangle(300, 500, 500+100, 300);
    txPolygon(krisha, 5);
    txSetColor(TX_WHITE, 3);
    txSetFillColor(RED_WOOD);
    txRectangle(375, 500, 525, 375);
}

void domik(int x, int y)
{
    txSetColor(DD, 0);
    txSetFillColor(DD);
    POINT dom[6] = {{x, y}, {x, y-100}, {x+50, y-150}, {x+100, y-100}, {x+100, y}, {x, y}};

    txPolygon(dom, 6);

}

void stolb(int x, int y)
{

    txSetColor(ST,0);
    txSetFillColor(ST);

    txRectangle(x, y+200, x+10, y+50);

    txSetColor(TX_BLACK, 2);
    txSetFillColor(TX_BLACK);

    txArc (x, y+50-10, x+300, y+50+50-10, 183, 173);
    txArc (x, y+10+50-10, x+300, y+50+10+50-10, 183, 173);

    txSetColor(ST_P, 0);
    txSetFillColor(ST_P);

    txCircle(x+10, y+75, 6);
    txCircle(x+10, y+75+10, 6);

}

void koleso(int x, int y, int r, float a)
{
    float a1 = a;
    float a2 = a+45;
    float a3 = a+90;
    float a4 = a+135;
    float a5 = a+180;
    float a6 = a+225;
    float a7 = a+270;
    float a8 = a+315;


    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
    int x5, y5;
    int x6, y6;
    int x7, y7;
    int x8, y8;


    txSetColor(TX_BLACK, 0);
    txSetFillColor(TX_BLACK);

    txCircle(x, y, r);

    x1 = x+r*cos(a1*3.14/180);
    y1 = y+r*sin(a1*3.14/180);
    x2 = x+r*cos(a2*3.14/180);
    y2 = y+r*sin(a2*3.14/180);
    x3 = x+r*cos(a3*3.14/180);
    y3 = y+r*sin(a3*3.14/180);
    x4 = x+r*cos(a4*3.14/180);
    y4 = y+r*sin(a4*3.14/180);
    x5 = x+r*cos(a5*3.14/180);
    y5 = y+r*sin(a5*3.14/180);
    x6 = x+r*cos(a6*3.14/180);
    y6 = y+r*sin(a6*3.14/180);
    x7 = x+r*cos(a7*3.14/180);
    y7 = y+r*sin(a7*3.14/180);
    x8 = x+r*cos(a8*3.14/180);
    y8 = y+r*sin(a8*3.14/180);


    txSetColor(TX_GRAY, 2);
    txSetFillColor(TX_GRAY);

    txLine(x, y, x1, y1);
    txLine(x, y, x2, y2);
    txLine(x, y, x3, y3);
    txLine(x, y, x4, y4);
    txLine(x, y, x5, y5);
    txLine(x, y, x6, y6);
    txLine(x, y, x7, y7);
    txLine(x, y, x8, y8);

    a1+=2;
    a2+=2;
    a3+=2;
    a4+=2;
    a5+=2;
    a6+=2;
    a7+=2;
    a8+=2;

}

void track(int x, int y, float a)
{
    txSetColor(YELLOW_COLOR, 0);
    txSetFillColor(YELLOW_COLOR);
    txRectangle(x, y, x+160, y-50);

    txSetColor(YELLOW_COLOR, 4);
    txSetFillColor(CUAN_COLOR);
    txRectangle(x, y-50, x+90, y-120);

    //txSetColor(TX_BLACK, 0);
    //txSetFillColor(TX_BLACK);
    //txCircle(x+40, y, 40);
    //txCircle(x+140, y, 30);
    koleso(x+40, y, 40, a);
    koleso(x+140, y+10, 30, a*1.5);

}

void tree(int x, int y)
{
    //x = 100
    //y = 100

    txSetColor(DIRT2, 0);
    txSetFillColor(DIRT2);
    txRectangle(x+35, y+50, x+65, y+125);

    txSetColor(TREE, 0);
    txSetFillColor(TREE);
    txEllipse(x, y+100, x+100, y-50);

}

void seilka(int x, int y)
{
    //x = 100;
    //y = 200;
    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);

    txCircle(x+15, y+60, 15);

    POINT sel[5] = {{x+100, y}, {x+75, y}, {x, y+50}, {x+75, y+50}, {x+100, y+50}};
    txSetColor(REDBRICK_COLOR, 0);
    txSetFillColor(REDBRICK_COLOR);
    txPolygon(sel, 5);



}

void track2(int x1, int y1, float a)
{

    track(x1+100, y1, a);
    txSetColor(RED_WOOD, 0);
    txSetFillColor(RED_WOOD);
    txRectangle(x1, y1-10, x1+100, y1-20);
    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);
    txRectangle(x1+60, y1-10, x1+65, y1);
    txRectangle(x1+30, y1-10, x1+35, y1);
    txRectangle(x1+10, y1-10, x1+15, y1);
}

void track3(int x1, int y1, float a)
{

    track(x1+100, y1, a);
    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);

    txCircle(x1+15, y1+60-50, 15);

    POINT sel[5] = {{x1+100, y1-50}, {x1+75, y1-50}, {x1, y1+50-50}, {x1+75, y1+50-50}, {x1+100, y1+50-50}};
    txSetColor(REDBRICK_COLOR, 0);
    txSetFillColor(REDBRICK_COLOR);
    txPolygon(sel, 5);
}

void man(int x, int y, int t)
{
    if(t == 1)
    {
    txSetColor(TX_BLACK, 3);
    txSetFillColor(TX_WHITE);
    txCircle(x, y, 10);
    txLine(x, y+10, x, y+50);

    txLine(x, y+10, x-25, y+40);
    txLine(x, y+10, x+25, y+40);

    txLine(x, y+50, x+10, y+100);
    txLine(x, y+50, x-10, y+100);
    }

}

void v_pole(int x, int y)
{
        txSetColor(DIRT2, 0);
        txSetFillColor(DIRT2);
        txRectangle(0, y, x, y-100);



}

void sun(int x, int y)
{
    txSetColor(TX_YELLOW, 0);
    txSetFillColor(TX_YELLOW);
    txCircle(x, y, 50);
}

void rost1(int x, int y)
{


    txSetColor(GRASS_COLOR, 0);
    txSetFillColor(GRASS_COLOR);

    txRectangle(x, y, x+5, y+5);

    //abc = abc + 1;


}


void rost2(int x, int y)
{


    txSetColor(GRASS_COLOR, 0);
    txSetFillColor(GRASS_COLOR);

    txRectangle(x, y, x+5, y-15);

    //abc = abc + 1;


}

void rost3(int x, int y)
{


    txSetColor(GRASS_COLOR, 0);
    txSetFillColor(GRASS_COLOR);

    txRectangle(x, y, x+5, y-40);

    //abc = abc + 1;


}

void rost4(int x, int y)
{


    txSetColor(FEILD, 0);
    txSetFillColor(FEILD);

    txRectangle(x, y, x+5, y-40);

    //abc = abc + 1;


}

int main()
{

    //int l = 0;
    txCreateWindow (1000, 700);

    int time = 0;
    if(time <= 1000)
    {
    while(time <= 1000)
    {




    txSetColor(TX_WHITE, 0);
    txSetFillColor(TX_WHITE);



    txSelectFont ("Arial", 60, 0, FW_BOLD);
    txDrawText   (100, 250, 1000, 500, "Первая часть мини-фильма:\n"
                                        "Как появляются булочки");

     time = time + 5;

     Sleep(3);

    }
    }

    int timea = 0;

    if(timea <= 1000)
    {
    //l = 1;
    while(timea <= 1000)
    {
    txBegin();
    txSetColor(TX_BLACK, 0);
    txSetFillColor(TX_BLACK);
    txRectangle(0, 0, 1000, 1000);


    txSetColor(TX_RED, 0);
    txSetFillColor(TX_RED);
    txSelectFont ("Arial", 60, 0, FW_BOLD);
    txDrawText   (300, 100, 700, 300, "ДИСКЛЕЙМЕР");

    txSetColor(TX_WHITE, 0);
    txSetFillColor(TX_WHITE);



    txSelectFont ("Arial", 30, 0, FW_BOLD);
    txDrawText   (100, 250, 1000, 1000, "Фильм не является учебным пособием.\n"
                                        "Булочки не создаются именно так, если бы был "
                                        "весь процесс, то мы бы сидели не 2 минуты а минут так 10.\n"
                                        "Весь фильм разбит на несколько частей. Сколько сам не знаю.\n"
                                        "Мне дальше лень придумывать текст. \n"
                                        "Приятного просмотра!");




     timea = timea + 4;

    Sleep(1);
    txEnd();
    }
    }







///////////////////////////////////////////////////////////1 действие
int l = 0;
int x = 750;
if(x >= 200)
{

    while(x >= 200)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(800, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        tree(100, 300);
        tree(700, 300);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);


    amb();
    track2(60, 600, l);

        man(x, 600, 1);
        Sleep(10);
        x = x - 2;
        txEnd();
    }
}
//////////////////////////////////////////2 действие
int x1 = 60;
if(x1 <= 900)
{
    txPlaySound ("2.wav", SND_LOOP);
    while(x1 <= 900)
    {
        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(800, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);


        tree(100, 300);
        tree(700, 300);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);


    amb();
    track2(x1, 600, l);

    man(0, 600, 0);
    l = l+4;
    x1 = x1+3;
    Sleep(5);
    txEnd();
    }

}
//////////////////1полоса

int x2 = 60;

if(x2 <= 1000)
{
    while(x2 <= 1000)
    {

            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);

            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);


        track2(x2, 650, l);
        //////1полоса


        v_pole(x2, 700);



        l = l+4;
        //////
       x2 = x2+2;
       Sleep(5);
       txEnd();
    }
}
int x3 = -200;
if(x3 <= 1000)
{
    while(x3 <= 1000)
    {

            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);

            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);


        track2(x3, 650-100, l);
        //////1полоса

        v_pole(1000, 700);
        v_pole(x3, 600);



        l = l+4;
        //////
       x3 = x3+2;
       Sleep(5);
       txEnd();
    }
}

int x4 = -200;
if(x4 <= 1000)
{
    while(x4 <= 1000)
    {

            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);

            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);


        track2(x4, 650-200, l);
        //////1полоса
        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(x4, 500);



        l = l+4;
        //////
       x4 = x4+2;
       Sleep(5);
       txEnd();
    }
}

int t = 1200;
if(t >= 500)
{
    while(t >= 500)
    {
        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);


        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        track(t, 500, l);
        seilka(400, 470);
        l = l-4;
        t = t-2;
        Sleep(10);
        txEnd();

    }

}

t = 400;
if(t <= 1200)
{
    while(t <= 1200)
    {
        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);


        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        track3(t, 500, l);
        l = l+4;
        t = t+2;
        Sleep(10);
        txEnd();

    }

}

int x10 = 60;

if(x10 <= 1000)
{
    while(x10 <= 1000)
    {

            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);

            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);


        //////1полоса


        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);


        track3(x10, 650,l);

        l = l+4;
        //////
       x10 = x10+2;
       Sleep(5);
       txEnd();
    }
}
int x11 = -200;
if(x11 <= 1000)
{
    while(x11 <= 1000)
    {

            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);

            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);



        //////1полоса

        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);

        track3(x11, 650-100, l);

        l = l+4;
        //////
       x11 = x11+2;
       Sleep(5);
       txEnd();
    }
}

int x12 = -200;
if(x12 <= 1000)
{
    while(x12 <= 1000)
    {

            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);

            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);



        //////1полоса
        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);


        track3(x12, 650-200, l);
        l = l+4;
        //////
       x12 = x12+2;
       Sleep(5);
       txEnd();
    }
}




//////////////////////////////стадии роста
int a = 1;
if(a <= 1000)
{
    txPlaySound (NULL);
    while(a <= 1000)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);
        sun(a, 100);

    a = a+2;

    Sleep(5);
    txEnd();
    }
}
/////////////////////////////////1

int b = 1;
int lb = 0, ub = 1000;
int bl = 410, bu = 690;
int abc;
int x_h[1000];
int y_h[1000];
for(int i = 0; i <= 300; i++)
{


    x_h[i] = (rand() % (ub - lb + 1)) + lb;


    y_h[i] = (rand() % (bu - bl + 1)) + bl;

}


if(b <= 1000)
{

    txPlaySound (NULL);
    while(b <= 1000)
    while(b <= 1000)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);
        sun(b, 100);





        for(int i = 0; i <= 300; i++)
        {
            rost1(x_h[i], y_h[i]);
        }


    b = b+2;





    Sleep(3);
    txEnd();
    }
}
/////////////////////////////////2
int v = 0;
if(v <= 1000)
{


    while(v <= 1000)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);
        sun(v, 100);





        for(int i = 0; i <= 300; i++)
        {
            rost2(x_h[i], y_h[i]);
        }


    v = v+2;





    Sleep(3);
    txEnd();
    }
}

/////////////////////////////////3
int m = 0;
if(m <= 1000)
{


    while(m <= 1000)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);
        sun(m, 100);





        for(int i = 0; i <= 300; i++)
        {
            rost3(x_h[i], y_h[i]);
        }


    m = m+2;





    Sleep(3);
    txEnd();
    }
}

for(int i = 0; i <= 1000; i++)
{


    x_h[i] = (rand() % (ub - lb + 1)) + lb;


    y_h[i] = (rand() % (bu - bl + 1)) + bl;

}

int f = 0;
if(f <= 1000)
{


    while(f <= 1000)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


        v_pole(1000, 700);
        v_pole(1000, 600);
        v_pole(1000, 500);
        sun(f, 100);





        for(int i = 0; i <= 1000; i++)
        {
            rost4(x_h[i], y_h[i]);
        }


    f = f+2;





    Sleep(3);
    txEnd();
    }
}
int g = 0;
while(g <= 1000)
{


        txBegin();
        txSetColor(TX_BLACK, 0);
        txSetFillColor(TX_BLACK);
        txRectangle(0, 0, g, 1000);




g = g+2;





Sleep(3);
txEnd();



}


txSetColor(TX_WHITE, 0);
txSetFillColor(TX_WHITE);

txSelectFont ("Arial", 60, 0, FW_BOLD);
txDrawText   (100, 250, 700, 350, "Конец первой части");

    //man(800+i, 500);

    txTextCursor (false);
    return 0;
}

