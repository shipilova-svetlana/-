//{===========================================================================
//
//***Сказочная история «Прогулка летним днем»
//
//***Мультфильм создан с использованием библиотеки TXlib.h
//
//***Выполнила Шипилова СЛ
//}===========================================================================

#include "SvetlanaLib.h"
#include "Heroeslib.h"

//---------------------------------------------------------------------------

void DrawSzenaNahalo();
void DrawSzenaPrizemlenieRaketi();
void DrawSzenaPosleDojd();
void DrawSzenaOpozdanie();
void StartTitles();
void FinishTitles();

//----------------------------------------------------------------------------

int main()
    {
    txCreateWindow (1200, 800);

    txSetFillColor (RGB (175, 238, 238));
    txRectangle    (0, 0, 1200, 800);

    StartTitles();

    DrawSzenaNahalo();

    DrawSzenaLiven();

    DrawSzenaPrizemlenieRaketi();

    DrawSzenaDojd();

    DrawSzenaPosleDojd();

    DrawSzenaOpozdanie();

    FinishTitles();

    return 0;
    }

//----------------------------------------------------------------------------

void DrawSzenaNahalo()
    {
    int t = 500;
    while (t <= 1200)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawSun         (            600,      50,          (t%2) * 3,   (t/10)%2 * 2 - 1);
         DrawObloko      (              t,      70,               0.25,               0.25, TX_BLUE);
         DrawObloko      (              t,     100,                  1,                  1, TX_CYAN);
         DrawObloko      (        t + 500,     100,                  2,                  2, TX_BLUE);
         DrawObloko      (        t + 200,     120,                0.5,                0.5, TX_LIGHTBLUE);
         DrawCust        (            400,     600,                  1,   (t/10)%2 * 2 - 1);
         DrawCust        (            500,     600,  (t/10)% 2 * 2 - 1,                 1);
         DrawStrekoza    (     - t + 1000,     300,             0.25,                 0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawCust        (            600,     600, (t/10)%2 * 0.5 - 1, (t/10)%2 * 0.5 - 1);
         DrawMalchikIVAN (- t*1.15 + 1300,     350,                1.5,                1.5, 2.5 , t%2 * 2, t%2 + 2, t%2 * 5 - 3);
         DrawDevohkaLIZA (        t + 350,     350,                  2,                  2, t%9 * 2 + 10, t%7 * 2 + 10, (t%7 + 5) * 2, (t%9 + 5) * 2, t%7 * 0.5, t%9 * 0.25, t%7 * 0.5 );
         DrawCot         (        t + 250,     450,               -0.5,                0.5, TX_BROWN, 1, t%2 - 0.25, (t%2 + 1) * 3, t%4 + 2, t%4 - 2, t%4, t%4, t%6 + 2, t%4 + 2);
         DrawStrekoza    (         t - 10,  t - 30,               0.55,               0.55, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (        t + 100, t + 200,               0.25,               0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (        t + 150, t + 150,               0.25,               0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (        t + 100, t + 150,               0.25,               0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (        t + 200, t + 200,               0.25,               0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (            300, t + 100,               0.25,               0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (            350,  t + 50,               0.25,               0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (            300,  t + 50,               0.25,               0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (            400, t + 100,               0.25,               0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawCar         (- t*1.15 + 1000,     350, 1, 1, RGB (255, 155, 1), 1);

         t ++;
         txSleep (50);
         }
    }
//----------------------------------------------------------------------------

void DrawSzenaPrizemlenieRaketi()
    {
    int  t = 300;
    while (t <= 900)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawObloko (t + 300,      10,   2,   2, TX_BLUE);
         DrawObloko (t + 100,     120, 0.5, 0.5, TX_LIGHTBLUE);
         DrawObloko (t - 300,      10,   2,   2, TX_BLUE);
         DrawObloko (t - 100,     120, 0.5, 0.5, TX_LIGHTBLUE);
         DrawCar    (100 + t * 2, 350, -1, 1, RGB (255, 255, 0), 0);
         DrawMan  (550, 950 - ROUND(t * 0.5), 1, 1, 1, ((t/2)%2)*5, 0,  0, 60, 0, ((t/2)%2)*30);
         DrawGirl (650, 520, 1, 1, 0, 0, 0, 60, 0, ((t/2)%2)*30);
         DrawSun (1000 - t, 50, 1, 1, RGB (255, 255, 0), t%2 + 5, t%2, t%2 * 3, t%7 - 5);
         DrawRaketa (    600, t - 600,   2,   2);
         DrawCar    (-1300 + t * 5, 350, -1, 2, RGB (255, 20, 147), 0);
         DrawCar    (-1500 + t * 3, 350, -2, 1, RGB (178, 34, 34), 0);
         t ++;
         txSleep (15);
         }
    }
//----------------------------------------------------------------------------

void DrawSzenaPosleDojd()
    {
    int  t = 300;
    while (t <= 900)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawObloko      ( t + 300,      10,          2,    2, TX_BLUE);
         DrawObloko      ( t + 100,     120,        0.5,  0.5, TX_LIGHTBLUE);
         DrawObloko      ( t - 300,      10,          2,    2, TX_BLUE);
         DrawObloko      ( t - 100,     120,        0.5,  0.5, TX_LIGHTBLUE);
         DrawRaketa      (     600,     300,          2,    2);
         DrawStrekoza    (     500, t + 100,  t%2 * 0.2,  0.2, TX_CYAN, TX_GRAY, TX_LIGHTBLUE, -2, 3);
         DrawStrekoza    (     250, t - 100, t%2 * 0.25, 0.25, TX_YELLOW, TX_GREEN, TX_LIGHTBLUE, t%2 + 0.5, t%2 * 2 - 3);
         DrawStrekoza    ( t + 150, t - 100,       0.25, 0.25, TX_LIGHTMAGENTA, TX_DARKGRAY, TX_YELLOW, t%2 - 0.25, t%2 * 2 - 0.5);
         DrawStrekoza    ( t + 250, t + 100,       0.25, 0.25, TX_LIGHTBLUE, TX_GRAY, TX_YELLOW, t%2 * 3, t%2 * 3 - 2);
         DrawCar         ( t + 500,     350,       -0.5,  0.5, RGB (178, 34, 34), 0);
         DrawMalchikIVAN ( t + 400,     330,        0.5,  0.5, 2.5, t%2 * 2, t%2 + 2, t%2 * 5 - 3);
         DrawMalchikIVAN ( t + 380,     350,        0.5,  0.5, 2.5, t%2 * 2, t%2 + 2, t%2 * 5 - 3);
         DrawMan  (850, 950 - ROUND(t * 0.5), 0.5, 0.5, 1, ((t/2)%2)*5, 0,  0, 60, 0, ((t/2)%2)*30);
         DrawGirl (950, 520,                  0.5, 0.5, 0, 0, 0, 60, 0, ((t/2)%2)*30);
         DrawCot         (-t + 450,  t + 30,       0.25, 0.25, TX_YELLOW, 1, t%2 - 0.25, (t%2 + 1) * 3, t%4 + 2, t%4 - 2, t%4, t%4, t%6 + 2, t%4 + 2);
         DrawCot         (-t + 550,  t + 30,        0.5,  0.5, TX_BROWN, 1, t%2 - 0.25, (t%2 + 1) * 3, t%4 + 2, t%4 - 2, t%4, t%4, t%6 + 2, t%4 + 2);
         DrawCar    (-1500 + t * 3, 400, -1.5, 1, RGB (178, 34, 34), 0);
         DrawSun (1000 - t, 50, 1, 1, RGB (255, 169, 93), t%7 * 2, t%2 * 5, t%2 * 3, t%7 - 5);

         t ++;

         txSleep (25);
         }
    }
//----------------------------------------------------------------------------

void DrawSzenaOpozdanie()
    {
    int  t = 300;
    while (t <= 600)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawBackgroundPezaj();

         DrawObloko      (         t + 300,         10,                2,                2, TX_BLUE);
         DrawObloko      (         t + 100,        120,              0.5,              0.5, TX_LIGHTBLUE);
         DrawObloko      (         t - 300,         10,                2,                2, TX_BLUE);
         DrawObloko      (         t - 100,        120,              0.5,              0.5, TX_LIGHTBLUE);
         DrawCot         (- t + (t%2 + 550), t%2 + 300,              0.5,              0.5, TX_BLACK, 1, t%2 - 0.25, (t%2 + 1) * 3, t%4 + 2, t%4 - 2, t%4, t%4, t%6 + 2, t%4 + 2);
         DrawCust        (             400,        600,                1,                1);
         DrawCot         (- t + (t%2 + 550), t%2 + 500,             0.75,             0.75, TX_DARKGRAY, 1, t%2 - 0.25, (t%2 + 1) * 3, t%4 + 2, t%4 - 2, t%4, t%4, t%6 + 2, t%4 + 2);
         DrawCust        (             400,        600,                1, (t/10)%2 * 2 - 1);
         DrawCust        (             500,        600, (t/10)%2 * 2 - 1,               1);
         DrawRaketa      (             600,  - t + 600,                2,               2);
         DrawStrekoza    (         t + 500,        300,            0.075,            0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 550,        250,            0.075,            0.075, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (         t + 500,        250,            0.075,            0.075, TX_LIGHTRED ,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 600,        300,            0.075,            0.075, TX_LIGHTBLUE,    TX_LIGHTRED, TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 510,        310,            0.075,            0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 560,        265,            0.075,            0.075, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (         t + 530,        265,            0.075,            0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 620,        315,            0.075,            0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 300,    t + 200,             0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 350,    t + 150,             0.25,             0.25, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (         t + 300,    t + 150,             0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (         t + 400,    t + 200,             0.25,             0.25, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTMAGENTA, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (             500,    t + 100,             0.25,             0.25, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (             550,     t + 50,             0.25,             0.25, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (             500,     t + 50,             0.25,             0.25, TX_LIGHTMAGENTA, TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (             600,    t + 100,             0.25,             0.25, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTMAGENTA, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawMalchikIVAN (      - t + 1500,        430,             1.25,             1.25, 2.5, t%2 * 2, t%2 + 3, t%2 * 5 - 2);
         DrawMalchikIVAN (      - t + 1480,        450,             1.25,             1.25, 2.5, t%2 * 2, t%2 + 2, t%2 * 5 - 3);
         DrawDevohkaLIZA (      - t + 1320,        450,             1.25,             1.25, t%9 * 2 + 1, t%7 * 2 + 1, (t%7 + 5) * 1, (t%9 + 5) * 1, t%7 * 0.15, t%9 * 0.15, t%7 * 0.15 );
         DrawMan  (550, 950 - ROUND(t * 0.5), 1, 1, 1, ((t/2)%2)*5, 0,  0, 60, 0, ((t/2)%2)*30);
         DrawGirl (650, 520, 1, 1, 0, 0, 0, 60, 0, ((t/2)%2)*30);

         t ++;
         txSleep (50);
         }

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

        txSelectFont   ("Gabriola", 200);
        txTextOut      (1500 - t * 15, 250, "летним днем");

        txSleep (100);
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

        txTextOut      (1500 - t * 14, 250, " Шипилова Светлана Львовна");

        txTextOut      (-700 + t * 12, 350, "Воронежская обл, 2021 год");

        txSleep (100);
        t++;
        }
        txSleep (1000);
    }
