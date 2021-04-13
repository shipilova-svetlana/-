//}===========================================================================

#include "TXLib.h"

//----------------------------------------------------------------------------

void DrawSun         (int x,int y, double sizex, double sizey);
void DrawDevohkaLIZA (int x,int y, double sizex, double sizey);
void DrawFir         (int x,int y, double sizex, double sizey,
                     COLORREF hadColor);
void DrawObloko      (int x,int y, double sizex, double sizey,
                     COLORREF hbColor);
void DrawCust        (int x,int y, double sizex, double sizey);
void DrawCot         (int x,int y, double sizex, double sizey,
                     COLORREF hdColor);
void DrawMachina     (int x,int y, double sizex, double sizey);
void DrawMalchikIVAN (int x,int y, double sizex, double sizey, double twist,
                      double crazy, double handUp, double smile);
void DrawDerevo      (int x,int y, double sizex, double sizey,
                     COLORREF bbColor);
void DrawStrekoza    (int x, int y, double sizex, double sizey,
                     COLORREF heabColor, COLORREF eyeColor, COLORREF esColor,
                      double crazy, double handUp);
void DrawElka        (int x, int y, double sizex, double sizey);
void DrawRaketa      (int x, int y, double sizex, double sizey);
void DrawOblokoDoyd  (int x,int y, double sizex, double sizey,
                     COLORREF hbColor);
void DrawSzenaNahalo();
void DrawSzenaDojd();
void DrawSzenaPrizemlenieRaketi();
void DrawSzenaPosleDojd();
void DrawSzenaOpozdanie();
void DrawBackground();
void StartTitles();
void FinishTitles();
void DrawBackgroundPezaj();

//----------------------------------------------------------------------------

int main()
    {
    txCreateWindow (1200, 800);

    txSetFillColor (RGB (175, 238, 238));
    txRectangle    (0,0,1200,800);

    DrawBackgroundPezaj();

    StartTitles();

    DrawSzenaNahalo();

    DrawSzenaDojd();

    DrawSzenaPrizemlenieRaketi();

    DrawSzenaPosleDojd();

    DrawSzenaOpozdanie();

    FinishTitles();

    return 0;
    }
//----------------------------------------------------------------------------

void DrawSzenaNahalo()
    {
    int t = 500;
    while (t <=1200)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawSun         (            600,      50,          (t%2)*3,   (t/10)%2*2 - 1);
         DrawObloko      (              t,      70,             0.25,             0.25, TX_BLUE);
         DrawObloko      (              t,     100,                1,                1, TX_CYAN);
         DrawObloko      (        t + 500,     100,                2,                2, TX_BLUE);
         DrawObloko      (        t + 200,     120,              0.5,              0.5, TX_LIGHTBLUE);
         DrawCust        (            400,     600,                1,   (t/10)%2*2 - 1);
         DrawCust        (            500,     600,  (t/10)% 2*2 - 1,                1);
         DrawStrekoza    (     - t + 1000,     300,             0.25,             0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawCust        (            600,     600, (t/10)%2*0.5 - 1, (t/10)%2*0.5 - 1);
         DrawMalchikIVAN (- t*1.15 + 1300,     350,              1.5,              1.5, 2.5 , t%2*2 , t%2 + 2, t%2*5 - 3);
         DrawStrekoza    (         t - 10,    t-30,             0.55,             0.55, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (        t + 100, t + 200,             0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (        t + 150, t + 150,             0.25,             0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2*2 + 0.5, t%2*5 + 3);
         DrawStrekoza    (        t + 100, t + 150,             0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (        t + 200, t + 200,             0.25,             0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (            300, t + 100,             0.25,             0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (            350,  t + 50,             0.25,             0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2*2 + 0.5, t%2*5 + 3);
         DrawStrekoza    (            300,  t + 50,             0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (            400, t + 100,             0.25,             0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2*2 + 0.5, t%2*5 - 3);
         t ++;

         txSleep (50);
         }
    }
//----------------------------------------------------------------------------
void DrawSzenaDojd()
    {
    int t = 500;
    for (int x = 150; x <= 1500; x+=50)
         {
         DrawOblokoDoyd ( x, 100, 1, 1, TX_CYAN);
         txSleep (500);
         }
    }
//----------------------------------------------------------------------------

void DrawSzenaPrizemlenieRaketi()
    {
    int  t = 300;
    while (t <=900)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawObloko ( t + 300,      10,   2,   2, TX_BLUE);
         DrawObloko ( t + 100,     120, 0.5, 0.5, TX_LIGHTBLUE);
         DrawObloko ( t - 300,      10,   2,   2, TX_BLUE);
         DrawObloko ( t - 100,     120, 0.5, 0.5, TX_LIGHTBLUE);
         DrawRaketa (     600, t - 600,   2,   2);
         t ++;

         txSleep (15);
         }
    }
//----------------------------------------------------------------------------

void DrawSzenaPosleDojd()
    {
    int  t = 300;
    while (t <=900)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawObloko      ( t + 300,      10,        2,    2, TX_BLUE);
         DrawObloko      ( t + 100,     120,      0.5,  0.5, TX_LIGHTBLUE);
         DrawObloko      ( t - 300,      10,        2,    2, TX_BLUE);
         DrawObloko      ( t - 100,     120,      0.5,  0.5, TX_LIGHTBLUE);
         DrawRaketa      (     600,     300,        2,    2);
         DrawStrekoza    (     500, t + 100,  t%2*0.6,  0.6, TX_CYAN, TX_GRAY, TX_LIGHTBLUE, -2, 3);
         DrawStrekoza    (     250, t - 100, t%2*0.25, 0.25, TX_YELLOW, TX_GREEN, TX_LIGHTBLUE, t%2 + 0.5, t%2*2 - 3);
         DrawStrekoza    ( t + 150, t - 100,     0.65, 0.65, TX_LIGHTMAGENTA, TX_DARKGRAY, TX_YELLOW, t%2 - 0.25, t%2*2 - 0.5);
         DrawStrekoza    ( t + 250, t + 100,     0.75, 0.75, TX_LIGHTBLUE, TX_GRAY, TX_YELLOW, (t%2)*3, (t%2)*3 - 2);
         DrawMachina     ( t + 700,     370,        1,    1);
         DrawMalchikIVAN ( t + 400,     330,      0.5,  0.5, 2.5, t%2*2, t%2 + 2, t%2*5 - 3);
         DrawMalchikIVAN ( t + 380,     350,      0.5,  0.5, 2.5, t%2*2, t%2 + 2, t%2*5 - 3);
         DrawCot         (-t + 450,  t + 30,     0.25, 0.25, TX_YELLOW);
         DrawCot         (-t + 550,  t + 30,      0.5,  0.5, TX_BROWN);

         t ++;

         txSleep (25);
         }
    }
//----------------------------------------------------------------------------

void DrawSzenaOpozdanie()
    {
    int  t = 300;
    while (t <=600)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawObloko      (         t + 300,         10,              2,               2, TX_BLUE);
         DrawObloko      (         t + 100,        120,            0.5,             0.5, TX_LIGHTBLUE);
         DrawObloko      (         t - 300,         10,              2,               2, TX_BLUE);
         DrawObloko      (         t - 100,        120,            0.5,             0.5, TX_LIGHTBLUE);
         DrawCot         (- t + (t%2 + 550), t%2 + 300,            0.5,             0.5, TX_BLACK);
         DrawCust        (             400,        600,              1,               1);
         DrawCot         (- t + (t%2 + 550), t%2 + 500,           0.75,            0.75, TX_DARKGRAY);
         DrawCust        (             400,        600,              1, (t/10)%2*2 - 1);
         DrawCust        (             500,        600, (t/10)%2*2 - 1,               1);
         DrawRaketa      (             600,  - t + 600,              2,               2);
         DrawStrekoza    (         t + 500,        300,          0.075,            0.075, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 550,        250,          0.075,            0.075, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2*2 + 0.5, t%2*5 + 3);
         DrawStrekoza    (         t + 500,        250,          0.075,            0.075, TX_LIGHTRED , TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 600,        300,          0.075,            0.075, TX_LIGHTBLUE, TX_LIGHTRED , TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 510,        310,          0.075,            0.075, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 560,        265,          0.075,            0.075, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2*2 + 0.5, t%2*5 + 3);
         DrawStrekoza    (         t + 530,        265,          0.075,            0.075, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 620,        315,          0.075,            0.075, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 300,    t + 200,           0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 350,    t + 150,           0.25,             0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2*2 + 0.5, t%2*5 + 3);
         DrawStrekoza    (         t + 300,    t + 150,           0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (         t + 400,    t + 200,           0.25,             0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (             500,    t + 100,           0.25,             0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (             550,     t + 50,           0.25,             0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2*2 + 0.5, t%2*5 + 3);
         DrawStrekoza    (             500,     t + 50,           0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2*2 + 0.5, t%2*5 - 3);
         DrawStrekoza    (             600,    t + 100,           0.25,             0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2*2 + 0.5, t%2*5 - 3);
         DrawMalchikIVAN (      - t + 1500,        330,            0.5,              0.5, 2.5, t%2*2, t%2 + 3, t%2*5 - 2);
         DrawMalchikIVAN (      - t + 1480,        350,            0.5,              0.5, 2.5, t%2*2, t%2 + 2, t%2*5 - 3);

         t ++;

         txSleep (50);
         }

    }

//----------------------------------------------------------------------------

void DrawObloko (int x, int y, double sizex, double sizey,
                COLORREF hbColor)
    {
    txSetFillColor (hbColor);
    txSetColor (hbColor, sizex);
    txCircle (x - 170*sizex, y - 20*sizey, 30*sizex);
    txCircle (x - 100*sizex, y - 20*sizey, 50*sizex);
    txCircle (x - 100*sizex, y - 50*sizey, 60*sizex);
    txCircle (x + sizex,     y + sizey,    70*sizex);
    }
//----------------------------------------------------------------------------

void DrawOblokoDoyd (int x, int y, double sizex, double sizey,
                COLORREF hbColor)
    {
    txSetFillColor (hbColor);
    txSetColor (hbColor, sizex);
    txCircle (x - 170*sizex,  y - 20*sizey, 30*sizex);
    txCircle (x - 100*sizex,  y - 20*sizey, 50*sizex);
    txCircle (x - 100*sizex,  y - 50*sizey, 60*sizex);
    txCircle (x + sizex,      y + sizey,    70*sizex);
    txLine   (x ,           y ,           x + 50*sizex, y + 600*sizey);
    txLine   (x + 5*sizex,  y + 5*sizey,  x + 55*sizex, y + 600*sizey);
    txLine   (x + 10*sizex, y + 10*sizey, x + 60*sizex, y + 605*sizey);
    txLine   (x + 15*sizex, y + 15*sizey, x + 65*sizex, y + 610*sizey);
    txLine   (x + 20*sizex, y + 20*sizey, x + 70*sizex, y + 615*sizey);
    txLine   (x + 25*sizex, y + 25*sizey, x + 75*sizex, y + 620*sizey);
    }

//----------------------------------------------------------------------------

void DrawSun (int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_YELLOW, 4);
    txSetFillColor (TX_YELLOW);
    txLine   (x + sizex, y + sizey, x - 200*sizex, y + 100*sizey);
    txLine   (x + sizex, y + sizey, x - 100*sizex, y + 150*sizey);
    txLine   (x + sizex, y + sizey, x - 150*sizex, y + 125*sizey);
    txLine   (x + sizex, y + sizey, x - 200*sizex, y + sizey    );
    txLine   (x + sizex, y + sizey, x - 10*sizex,  y + 125*sizey);
    txLine   (x + sizex, y + sizey, x + 100*sizex, y + 100*sizey);
    txLine   (x + sizex, y + sizey, x + 100*sizex, y + sizey    );
    txLine   (x + sizex, y + sizey, x + 190*sizex, y + 125*sizey);
    txCircle (x + sizex, y + sizey, 50);
    }
//----------------------------------------------------------------------------

void DrawFir (int x, int y, double sizex, double sizey,
             COLORREF hadColor)
    {
    txSetFillColor (hadColor);
    txSetColor (hadColor, 80*sizex);
    txLine   (x + sizex,    y + sizey,     x + 60*sizex,  y + sizey);
    txLine   (x + sizex,    y + sizey,     x + 30*sizex,  y - 80*sizey);
    txLine   (x + 60*sizex, y + sizey,     x + 30*sizex,  y - 80*sizey);
    txLine   (x - 20*sizex, y + 50*sizey,  x + 80*sizex,  y + 50*sizey);
    txLine   (x + 30*sizex, y - 20*sizey,  x - 20*sizex,  y + 50*sizey);
    txLine   (x + 30*sizex, y - 20*sizey,  x + 80*sizex,  y + 50*sizey);
    txLine   (x - 50*sizex, y + 150*sizey, x + 110*sizex, y + 150*sizey);
    txLine   (x + 30*sizex, y + 40*sizey,  x - 50*sizex,  y + 150*sizey);
    txLine   (x + 30*sizex, y + 40*sizey,  x + 110*sizex, y + 150*sizey);
    }

//----------------------------------------------------------------------------

void DrawCust(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x - 50*sizex, y - 100*sizey, 80*sizex);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (x + 20*sizex, y - 50*sizey, 100*sizex);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (x - 50*sizex, y - 50*sizey, 100*sizex);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x + 50*sizex, y - 50*sizey, 70*sizex);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x - 50*sizex, y - 30*sizey, 60*sizex);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (x + sizex, y + sizey, 50*sizex);
    }

//----------------------------------------------------------------------------

void DrawCot(int x, int y, double sizex, double sizey,
            COLORREF hdColor)
    {
    txSetFillColor (hdColor);
    txSetColor (hdColor, sizex);
    txCircle (x + sizex,    y + sizey,    30*sizex);
    txCircle (x + 40*sizex, y + 40*sizey, 10*sizex);
    txCircle (x - 40*sizex, y + 40*sizey, 10*sizex);
    txCircle (x + sizex,    y + 70*sizey, 50*sizex);

    txSetColor (hdColor, 20*sizex);
    txLine (x - 20*sizex, y + 100*sizey, x - 20*sizex, y + 140*sizey);
    txLine (x + 30*sizex, y + 100*sizey, x + 30*sizex, y + 140*sizey);
    txLine (x + 80*sizex, y + 50*sizey,  x + 30*sizex, y + 100*sizey);
    txSetColor (hdColor, 20);
    txLine (x - 30*sizex, y - 15*sizey,  x - 30*sizex, y - 50*sizey);
    txLine (x - 30*sizex, y - 50*sizey,  x + sizex,    y - 30*sizey);
    txLine (x + sizex,    y - 30*sizey,  x + 30*sizex, y - 50*sizey);
    txLine (x + 30*sizex, y - 50*sizey,  x + 30*sizex, y - 15*sizey);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x - 15*sizex, y - 15*sizey, 5*sizex);
    txCircle (x + 15*sizex, y - 15*sizey, 5*sizex);

    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    txCircle (x + sizex, y + sizey, 10*sizex);

    txSetColor (TX_BLACK, 3*sizex);
    txLine (x + sizex, y + sizey, x - 80*sizex, y - 30*sizey);
    txLine (x + sizex, y + sizey, x - 80*sizex, y - 15*sizey);
    txLine (x + sizex, y + sizey, x - 80*sizex, y + sizey);
    txLine (x + sizex, y + sizey, x + 80*sizex, y + sizey);
    txLine (x + sizex, y + sizey, x + 80*sizex, y - 30*sizey);
    txLine (x + sizex, y + sizey, x + 80*sizex, y - 15*sizey);
    }
//----------------------------------------------------------------------------

void DrawDevohkaLIZA(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_YELLOW );
    txSetFillColor (TX_YELLOW );
    txCircle (x + sizex, y - 10*sizey, 10*sizex);

    txSetColor (TX_PINK, 3*sizex);
    POINT star[6] = {{x - 15*sizex, y - 25*sizey}, {x + sizex,    y - 20*sizey},
                     {x + 15*sizex, y - 25*sizey}, {x + 15*sizex, y - 15*sizey},
                     {x + sizex,    y - 20*sizey}, {x - 15*sizex, y - 15*sizey}};
                     txPolygon (star, 6);
    txFloodFill (x + 10*sizex, y - 20*sizey);
    txFloodFill (x - 10*sizex, y - 20*sizey);

    txSetColor (TX_YELLOW, 6*sizex);
    txLine (x + sizex,    y + sizey,    x + 15*sizex, y + 10*sizey);
    txLine (x + sizex,    y + sizey,    x - 15*sizex, y + 10*sizey);
    txLine (x + 10*sizex, y + 40*sizey, x + 10*sizex, y + 50*sizey);
    txLine (x - 10*sizex, y + 40*sizey, x - 10*sizex, y + 50*sizey);

    txSetColor (TX_ORANGE, 5*sizex);
    txSetFillColor (TX_ORANGE);
    txLine (x + sizex,    y + sizey,    x + 15*sizex, y + 40*sizey);
    txLine (x + 15*sizex, y + 40*sizey, x - 15*sizex, y + 40*sizey);
    txLine (x - 15*sizex, y + 40*sizey, x + sizex,    y + sizey);
    txFloodFill (x + sizex,  y + 10*sizey);

    txSetColor (TX_BLACK, 1*sizex);
    txLine (x - 5*sizex, y - 12*sizey, x - 10*sizex, y - 15*sizey);
    txLine (x - 5*sizex, y - 12*sizey, x - 5*sizex,  y - 15*sizey);
    txLine (x - 5*sizex, y - 12*sizey, x + sizex,    y - 15*sizey);
    txLine (x + 5*sizex, y - 12*sizey, x + 10*sizex, y - 15*sizey);
    txLine (x + 5*sizex, y - 12*sizey, x + 5*sizex,  y - 15*sizey);
    txLine (x + 5*sizex, y - 12*sizey, x + sizex,    y - 15*sizey);

    txSetColor (TX_DARKGRAY);
    txSetFillColor (TX_DARKGRAY);
    txCircle (x - 5*sizex, y - 12*sizey, 2*sizex);
    txCircle (x + 5*sizex, y - 12*sizey, 2*sizex);

    txSetColor (TX_LIGHTRED);
    txSetFillColor (TX_LIGHTRED);
    txCircle (x + sizex, y - 5*sizey, 2*sizex);
    }
//----------------------------------------------------------------------------

void DrawMachina(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_YELLOW );
    txSetFillColor (TX_YELLOW );
    txCircle (x + 55*sizex, y - 10*sizey, 5*sizex);

    txSetColor (TX_BROWN, 3*sizex);
    POINT star[8] = {{x - 50*sizex, y + sizey},    {x - 50*sizex, y - 15*sizey},
                     {x - 30*sizex, y - 15*sizey}, {x - 25*sizex, y - 30*sizey},
                     {x + 15*sizex, y - 30*sizey}, {x + 35*sizex, y - 15*sizey},
                     {x + 55*sizex, y - 10*sizey}, {x + 55*sizex, y - sizey}};
                     txPolygon (star, 8);
    txFloodFill (x + 10*sizex, y - 20*sizey);

    txSetColor (TX_DARKGRAY);
    txSetFillColor (TX_DARKGRAY);
    txCircle (x - 20*sizex, y + sizey, 10*sizex);
    txCircle (x + 20*sizex, y + sizey, 10*sizex);
    }
//----------------------------------------------------------------------------

void DrawMalchikIVAN(int x, int y, double sizex, double sizey, double twist,
     double crazy, double handUp, double smile)
    {
    txSetColor (TX_YELLOW );
    txSetFillColor (TX_YELLOW );
    txCircle (x + sizex, y - 10*sizey, 10*sizex);

    txSetColor (TX_YELLOW, 6*sizex);
    txLine (x + 15*sizex,      y + sizey,    x + 15*sizex*handUp, y + 15*sizey);
    txLine (x - 15*sizex,      y + sizey,    x - 15*sizex*handUp, y + 15*sizey);
    txLine (x + twist*sizex,   y + 20*sizey, x + 5*sizex*handUp,  y + 50*sizey);
    txLine (x + twist*sizex,   y + 20*sizey, x - 5*sizex*handUp,  y + 50*sizey);

    txSetColor (TX_LIGHTCYAN, 5*sizex);
    txSetFillColor (TX_LIGHTCYAN);
    txLine (x + twist*sizex,  y + 20*sizey,  x + 15*sizex,     y + sizey);
    txLine (x + 15*sizex,     y + sizey,     x - 15*sizex,     y + sizey);
    txLine (x - 15*sizex,     y + sizey,     x + twist*sizex,  y + 20*sizey);
    txFloodFill (x + sizex,  y + 10*sizey);

    txSetColor (TX_BLACK, 1*sizex);
    txLine (x - 5*sizex, y - 12*sizey, x - 10*sizex, y - 15*sizey);
    txLine (x - 5*sizex, y - 12*sizey, x - 5*sizex,  y - 15*sizey);
    txLine (x - 5*sizex, y - 12*sizey, x + sizex,    y - 15*sizey);
    txLine (x + 5*sizex, y - 12*sizey, x + 10*sizex, y - 15*sizey);
    txLine (x + 5*sizex, y - 12*sizey, x + 5*sizex,  y - 15*sizey);
    txLine (x + 5*sizex, y - 12*sizey, x + sizex,    y - 15*sizey);

    txSetColor (TX_DARKGRAY);
    txSetFillColor (TX_DARKGRAY);
    txCircle (x - 5*sizex, y - 12*sizey - crazy, 2*sizex - crazy/2);
    txCircle (x + 5*sizex, y - 12*sizey + crazy, 2*sizex + crazy/2);

    txSetColor (TX_LIGHTRED);
    txSetFillColor (TX_LIGHTRED);
    txLine (x - 5*sizex, y - 5*sizey,       x ,          y - 5*sizey+smile);
    txLine (x ,          y - 5*sizey+smile, x + 5*sizex, y - 5*sizey);
    }
//----------------------------------------------------------------------------

void DrawDerevo (int x, int y, double sizex, double sizey,
             COLORREF bbColor)
    {
    txSetFillColor (bbColor);
    txSetColor (bbColor, sizex);
    txCircle (x - 150*sizex, y - 150*sizey, 100*sizex);
    txCircle (x + 150*sizex, y - 150*sizey, 100*sizex);
    txCircle (x + sizex,     y - 200*sizey, 200*sizex);
    txCircle (x - 150*sizex, y + sizey,     150*sizex);
    txCircle (x + 150*sizex, y + sizey,     150*sizex);

    txSetColor (TX_RED , 50*sizex);
    txSetFillColor (TX_GREEN );
    txLine (x + sizex, y + sizey, x + sizex,  y + 500*sizey);
    }
//----------------------------------------------------------------------------

void DrawStrekoza (int x, int y, double sizex, double sizey,
                  COLORREF heabColor, COLORREF eyeColor, COLORREF esColor,
                  double crazy, double handUp)
    {
    txSetFillColor (heabColor);
    txEllipse (x + sizex, y + sizey,    x - 80*sizex, y - 25*sizey*handUp);
    txEllipse (x + sizex, y + sizey,    x + 80*sizex, y - 25*sizex*handUp );
    txEllipse (x + sizex, y - 25*sizex, x - 60*sizex, y - 50*sizey*handUp);
    txEllipse (x + sizex, y - 25*sizey, x + 60*sizex, y - 50*sizey*handUp);

    txSetFillColor (eyeColor);
    txSetColor (TX_DARKGRAY, sizex);
    txCircle (x + sizex, y + 30*sizey, 30*sizex);

    txSetFillColor (esColor);
    txSetColor (TX_DARKGRAY,2*sizex);
    txCircle (x - 15*sizex, y + 30*sizey - crazy, 10*sizex - crazy/2);
    txCircle (x + 15*sizex, y + 30*sizey + crazy, 10*sizex + crazy/2);

    txSetColor (TX_DARKGRAY, 5*sizex);
    txLine (x + sizex, y + sizey, x + sizex, y - 80*sizey);
    }
//----------------------------------------------------------------------------

void DrawElka(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_YELLOW, 3*sizex);
    POINT star[11] = {{x - 40*sizex, y + 35*sizey}, {x - 15*sizex, y + 10*sizey},
                     { x - 30*sizex, y + 10*sizey}, {x - 5*sizex,  y - 10*sizey},
                     { x - 20*sizex, y - 10*sizey}, {x + sizex,    y - 50*sizey},
                     { x + 20*sizex, y - 10*sizey}, {x + 5*sizex,  y - 10*sizey},
                     { x + 30*sizex, y + 10*sizey}, {x + 15*sizex, y + 10*sizey},
                     { x + 40*sizex, y + 35*sizey}};
                     txPolygon (star, 11);
    txFloodFill (x + sizex, y + sizey);

    txSetColor (TX_YELLOW, 6*sizex);
    txLine (x - 5*sizex, y + 35*sizey, x - 5*sizex, y + 40*sizey);
    txLine (x - 5*sizex, y + 40*sizey, x + 5*sizex, y + 40*sizey);
    txLine (x + 5*sizex, y + 40*sizey, x + 5*sizex, y + 35*sizey);
    }
//----------------------------------------------------------------------------

void DrawRaketa(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_DARKGRAY , 3*sizex);
    txSetFillColor (TX_DARKGRAY);
    POINT star[10] = {{x - 45*sizex, y + 60*sizey}, {x - 15*sizex, y + 35*sizey},
                     { x - 15*sizex, y - 15*sizey}, {x + 1*sizex,  y - 35*sizey},
                     { x + 15*sizex, y - 15*sizey}, {x + 15*sizex, y + 35*sizey},
                     { x + 45*sizex, y + 60*sizey}, {x + 15*sizex, y + 60*sizey},
                     { x + sizex,    y + 50*sizey}, {x - 15*sizex, y + 60*sizey}};
                     txPolygon (star, 10);
    txFloodFill (x + sizex, y + sizey);

    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (x + sizex, y + sizey, 10*sizex);
    }

//----------------------------------------------------------------------------

void DrawBackground()
    {
    DrawCot         ( 250, 250,  0.5,  0.5, TX_BLACK);
    DrawFir         ( 100, 150,    1,    1, TX_GREEN);
    DrawFir         (1000, 150,    1,    1, TX_GREEN);
    DrawFir         ( 300, 100,  0.5,  0.5, TX_YELLOW);
    DrawFir         ( 200, 180, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         ( 300, 250,  0.5,  0.5, TX_GREEN);
    DrawSun         ( 600,  50,    1,    1);
    DrawCust        ( 400, 600,    1,    1);
    DrawCot         ( 350, 500, 0.75, 0.75, TX_DARKGRAY);
    DrawCust        ( 500, 600,    1,    1);
    DrawCust        ( 600, 600,  0.5,  0.5);
    DrawObloko      (1000, 100,    2,    2, TX_BLUE);
    DrawObloko      ( 700, 120,  0.5,  0.5, TX_LIGHTBLUE);
    DrawFir         ( 900, 150, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         (1000, 100,  0.5,  0.5, TX_YELLOW);
    DrawFir         ( 900, 250, 0.25, 0.25, TX_CYAN );
    DrawSun         ( 600,  50,    1,    1);
    DrawDerevo      ( 950, 150, 0.25, 0.25, TX_GREEN);
    DrawDerevo      ( 950, 150, 0.15, 0.15, TX_LIGHTGREEN);
    DrawDerevo      (1050, 150, 0.25, 0.25, TX_CYAN);
    DrawDerevo      ( 850, 150, 0.12, 0.25, TX_YELLOW);
    DrawDerevo      ( 800, 150, 0.25, 0.12, TX_LIGHTGREEN);
    DrawElka        (1000, 270,    1,    1);
    }
//----------------------------------------------------------------------------
void StartTitles()
    {
    int t = 0;

    while (t <= 85)
        {
        txClear();
        txSetFillColor (RGB (175, 238, 238));
        txFloodFill    (5, 5);
        txSetColor     (TX_BLACK);
        txSelectFont   ("Arial", 200);
        txTextOut      (-700 + t * 10, 100, "Прогулка");
        txSetColor     (TX_BLACK);
        txSelectFont   ("Gabriola", 200);
        txTextOut      (1500 - t * 15, 250, "летним днем");
        txSleep        (100);
        t++;
        }
        txSleep (1000);
    }

//----------------------------------------------------------------------------
void FinishTitles()
    {
    int t = 0;

    while (t <= 85)
        {
        txClear();
        txSetFillColor (RGB (175, 238, 238));
        txFloodFill    (5, 5);
        txSetColor     (TX_BLACK);
        txSelectFont   ("Gabriola", 100);
        txTextOut      (-700 + t * 12, 100, "Выполнила учитель информатики");
        txSetColor     (TX_BLACK);
        txSelectFont   ("Gabriola", 100);
        txTextOut      (1500 - t * 14, 250, " Шипилова Светлана Львовна");
        txSetColor     (TX_BLACK);
        txSelectFont   ("Gabriola", 100);
        txTextOut      (-700 + t * 12, 350, "Воронежская обл, 2021 год");
        txSleep        (100);
        t++;
        }
        txSleep (1000);
    }
//----------------------------------------------------------------------------//----------------------------------------------------------------------------

void DrawBackgroundPezaj()
    {
    txSetFillColor (RGB (175, 238, 238));
    txClear();

    DrawCot         (  250, 250,  0.5,  0.5, TX_BLACK);
    DrawFir         (  100, 150,    1,    1, TX_GREEN);
    DrawFir         ( 1000, 150,    1,    1, TX_GREEN);
    DrawFir         (  300, 100,  0.5,  0.5, TX_YELLOW);
    DrawFir         (  200, 180, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         (  300, 250,  0.5,  0.5, TX_GREEN);
    DrawObloko      (  700,  70, 0.25, 0.25, TX_BLUE);
    DrawObloko      (  300, 100,    1,    1, TX_CYAN);
    DrawObloko      (   50, 100,    2,    2, TX_BLUE);
    DrawObloko      (  120, 120,  0.5,  0.5, TX_LIGHTBLUE);
    DrawCust        (  500, 700,    1,    1);
    DrawCust        (  600, 700,  0.5,  0.5);
    DrawCust        (  200, 700,    1,    1);
    DrawCust        (  300, 700,  0.5,  0.5);
    DrawCust        (  700, 700,    1,    1);
    DrawCust        (  800, 700,  0.5,  0.5);
    DrawCust        (  900, 700,    1,    1);
    DrawCust        ( 1000, 700,  0.5,  0.5);
    DrawCust        ( 1100, 700,    1,    1);
    DrawCust        (  400, 700,  0.5,  0.5);
    DrawObloko      ( 1000, 100,    2,    2, TX_BLUE);
    DrawObloko      (  700, 120,  0.5,  0.5, TX_LIGHTBLUE);
    DrawFir         (  900, 150, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         ( 1000, 100,  0.5,  0.5, TX_YELLOW);
    DrawFir         (  900, 250, 0.25, 0.25, TX_CYAN );
    DrawDerevo      (  950, 150, 0.25, 0.25, TX_GREEN);
    DrawDerevo      (  950, 150, 0.15, 0.15, TX_LIGHTGREEN);
    DrawDerevo      ( 1050, 150, 0.25, 0.25, TX_CYAN);
    DrawDerevo      (  850, 150, 0.12, 0.25, TX_YELLOW);
    DrawDerevo      (  800, 150, 0.25, 0.12, TX_LIGHTGREEN);
    DrawElka        ( 1100, 270,    1,    1);
    DrawElka        (  800, 270,    1,    1);
    DrawElka        (  760, 250,    1,    1);
    DrawElka        (  900, 170,    1,    1);
    DrawElka        (  610,  50,    1,    1);
    DrawElka        (  280, 250,    2,    1);
    DrawElka        (  600, 250,    3,    2);
    DrawElka        (  100, 170,    1,    3);
    DrawElka        (  150, 150,  1.5,    5);
    DrawSun         (  600,  50,    2,    2);

    }
