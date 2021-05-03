//{====================================================================================================
//
//***@file       SvetlanaLib.h
//
//***@date           2021
//
//***@author Выполнила Шипилова СЛ
//}====================================================================================================

#include "TXLib.h"

//------------------------------------------------------------------------------------------------------
void DrawSun         (int x, int y, double sizex, double sizey);
void DrawDevohkaLIZA (int x, int y, double sizex, double sizey, double rukaL, double rukaR,
                      double nogaL, double nogaR, double rot, double glazL, double glazR);
void DrawFir         (int x, int y, double sizex, double sizey,
                     COLORREF hadColor);
void DrawObloko      (int x, int y, double sizex, double sizey,
                     COLORREF hbColor);
void DrawCust        (int x, int y, double sizex, double sizey);
void DrawCot         (int x, int y, double sizex, double sizey,
                     COLORREF hdColor, double hvostx, double hvosty, double us,
                      double lapax, double lapay, double uhoR, double uhoL, double glazR, double glazL);
void DrawMachina     (int x, int y, double sizex, double sizey);
void DrawMalchikIVAN (int x, int y, double sizex, double sizey, double twist,
                      double crazy, double handUp, double smile);
void DrawDerevo      (int x, int y, double sizex, double sizey,
                     COLORREF bbColor);
void DrawStrekoza    (int x, int y, double sizex, double sizey,
                     COLORREF heabColor, COLORREF eyeColor, COLORREF esColor,
                      double crazy, double handUp);
void DrawElka        (int x, int y, double sizex, double sizey);
void DrawRaketa      (int x, int y, double sizex, double sizey);
void DrawOblokoDoyd  (int x, int y, double sizex, double sizey,
                     COLORREF hbColor);
void DrawRain        (int x0, int y0, int sizeY);
void DrawSzenaDojd();
void DrawSzenaLiven();
void DrawBackground();
void DrawBackgroundPezaj();
void DrawOblokaPlivut();
void DrawStrekoziMalenkie();
void DrawPoletStrekoz();
//{--------------------------------------------------------------------------------------------------------
//! Рисует облако!
//!
//! @param x                       x-координата центра облака!
//! @param y                       y-координата центра облака!
//! @param sizex                   Размер облака!
//! @param sizey                   Размер облака!
//! @param COLORREF hbColor        Цвет облака!
//!
//! @note                          Функция хорошая, но всегда её можно улучшить!
//!
//! @see                           DrawOblokaPlivut()
//!
//! @par                           Пример использования:
//! @code
//!                                DrawObloko      (1000, 100, 2.00, 2.00, TX_BLUE);
//!                                DrawObloko      ( 700, 120, 0.50, 0.50, TX_LIGHTBLUE);
//! @endcode
//}--------------------------------------------------------------------------------------------------------

void DrawObloko (int x, int y, double sizex, double sizey,
                COLORREF hbColor)
    {
    txSetFillColor (hbColor);
    txSetColor (hbColor, sizex);
    txCircle (x - 170 * sizex, y - 20 * sizey, 30 * sizex);
    txCircle (x - 100 * sizex, y - 20 * sizey, 50 * sizex);
    txCircle (x - 100 * sizex, y - 50 * sizey, 60 * sizex);
    txCircle (x + sizex,       y + sizey,      70 * sizex);
    }
//{--------------------------------------------------------------------------------------------------------
//! Рисует облако с дождем!
//!
//! @param x                       x-координата центра облака!
//! @param y                       y-координата центра облака!
//! @param sizex                   Размер облака!
//! @param sizey                   Размер облака!
//! @param COLORREF hbColor        Цвет облака!
//!
//! @note                          Функция не плохая, но всегда её можно улучшить!
//!
//! @see                           DrawSzenaDojd()
//!
//! @par                           Пример использования:
//! @code
//!                                DrawOblokoDoyd ( x, 100, 1, 1, TX_CYAN);
//! @endcode
//}--------------------------------------------------------------------------------------------------------

void DrawOblokoDoyd (int x, int y, double sizex, double sizey,
                COLORREF hbColor)
    {
    txSetFillColor (hbColor);
    txSetColor (hbColor, sizex);
    txCircle (x - 170 * sizex, y - 20 * sizey, 30 * sizex);
    txCircle (x - 100 * sizex, y - 20 * sizey, 50 * sizex);
    txCircle (x - 100 * sizex, y - 50 * sizey, 60 * sizex);
    txCircle (x + sizex,       y + sizey,      70 * sizex);
    txLine   (x ,              y ,             x + 50 * sizex, y + 600 * sizey);
    txLine   (x + 5 * sizex,   y + 5 * sizey,  x + 55 * sizex, y + 600 * sizey);
    txLine   (x + 10 * sizex,  y + 10 * sizey, x + 60 * sizex, y + 605 * sizey);
    txLine   (x + 15 * sizex,  y + 15 * sizey, x + 65 * sizex, y + 610 * sizey);
    txLine   (x + 20 * sizex,  y + 20 * sizey, x + 70 * sizex, y + 615 * sizey);
    txLine   (x + 25 * sizex,  y + 25 * sizey, x + 75 * sizex, y + 620 * sizey);
    }
//{--------------------------------------------------------------------------------------------------------
//! Рисует капли дождя!
//!
//! @param x0                      x0- начальные координаты капель дождя!
//! @param y0                      y0- начальные координаты капель дождя!
//!
//! @param sizeY                   Размер капель!
//!
//!
//! @note                          Функция хорошая, но всегда её можно улучшить!
//!
//! @see                           DrawSzenaLiven()
//!
//! @par                           Пример использования:
//! @code
//!                                DrawRain(10, 10, 10);
//!                                DrawRain(20, 20, 30);
//! @endcode
//}--------------------------------------------------------------------------------------------------------

void DrawRain     (int x0, int y0, int sizeY)
    {
    int t = -20;

    while (t < 20)
        {
        for (int x = x0; x <= 1300; x += 15)
            {
            txSetColor (TX_BLUE);

            DrawObloko (t * 70 + 300,  50,   2,   2, TX_BLUE);

            DrawObloko (t * 60 - 300,  50,   2,   2, TX_BLUE);


            txLine (x, t * 50 + x%2 * 20 + y0, x, t * 50 + x%2 * 20 + y0 + sizeY);

            }

        txSleep (5 * t);
        t++;
        }
    }
//-------------------------------------------------------------------------------------------------------

void DrawSzenaLiven()
    {
    DrawRain(10, 10, 10);

    DrawRain(20, 20, 30);

    DrawRain(20, 30, 20);

    DrawRain(30, 40, 50);
    }
//--------------------------------------------------------------------------------------------------------

void DrawSzenaDojd()
    {
    int t = 500;
    for (int x = 150; x <= 1500; x += 50)
         {
         DrawOblokoDoyd ( x, 100, 1, 1, TX_CYAN);
         txSleep (500);
         }
    }

//{---------------------------------------------------------------------------------------------------------
//! Рисует солнце!
//!
//! @param x                      x-координата центра солнца!
//! @param y                      y-координата центра солнца!
//! @param sizeX                  Размер лучей солнца по x!
//! @param sizeY                  Размер лучей солнца по y!
//!
//! @note                         Функция работает, но есть что исправить!
//!
//! @par                          Пример использования:
//! @code
//!                               DrawSun    (600, 50, (t%2) * 3, (t/10)%2 * 2 - 1);
//! @endcode
//}----------------------------------------------------------------------------------------------------------

void DrawSun (int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_YELLOW, 4);
    txSetFillColor (TX_YELLOW);
    txLine   (x + sizex, y + sizey, x - 200 * sizex, y + 100 * sizey);
    txLine   (x + sizex, y + sizey, x - 100 * sizex, y + 150 * sizey);
    txLine   (x + sizex, y + sizey, x - 150 * sizex, y + 125 * sizey);
    txLine   (x + sizex, y + sizey, x - 200 * sizex, y + sizey);
    txLine   (x + sizex, y + sizey, x -  10 * sizex, y + 125 * sizey);
    txLine   (x + sizex, y + sizey, x + 100 * sizex, y + 100 * sizey);
    txLine   (x + sizex, y + sizey, x + 100 * sizex, y + sizey);
    txLine   (x + sizex, y + sizey, x + 190 * sizex, y + 125 * sizey);
    txCircle (x + sizex, y + sizey, 50);
    }
//------------------------------------------------------------------------------------------------------------

void DrawFir (int x, int y, double sizex, double sizey,
             COLORREF hadColor)
    {
    txSetFillColor (hadColor);
    txSetColor (hadColor, 80 * sizex);
    txLine   (x + sizex,      y + sizey,       x +  60 * sizex, y + sizey);
    txLine   (x + sizex,      y + sizey,       x +  30 * sizex, y -  80 * sizey);
    txLine   (x + 60 * sizex, y + sizey,       x +  30 * sizex, y -  80 * sizey);
    txLine   (x - 20 * sizex, y +  50 * sizey, x +  80 * sizex, y +  50 * sizey);
    txLine   (x + 30 * sizex, y -  20 * sizey, x -  20 * sizex, y +  50 * sizey);
    txLine   (x + 30 * sizex, y -  20 * sizey, x +  80 * sizex, y +  50 * sizey);
    txLine   (x - 50 * sizex, y + 150 * sizey, x + 110 * sizex, y + 150 * sizey);
    txLine   (x + 30 * sizex, y +  40 * sizey, x -  50 * sizex, y + 150 * sizey);
    txLine   (x + 30 * sizex, y +  40 * sizey, x + 110 * sizex, y + 150 * sizey);
    }

//------------------------------------------------------------------------------------------------------------

void DrawCust(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x - 50 * sizex, y - 100 * sizey, 80 * sizex);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (x + 20 * sizex, y - 50 * sizey, 100 * sizex);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (x - 50 * sizex, y - 50 * sizey, 100 * sizex);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x + 50 * sizex, y - 50 * sizey, 70 * sizex);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x - 50 * sizex, y - 30 * sizey, 60 * sizex);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (x + sizex,      y + sizey,      50 * sizex);
    }

//-------------------------------------------------------------------------------------------------------------

void DrawCot(int x, int y, double sizex, double sizey,
            COLORREF hdColor, double hvostx, double hvosty, double us,
            double lapax, double lapay, double uhoR, double uhoL, double glazR, double glazL)
    {
    txSetFillColor (hdColor);
    txSetColor (hdColor, sizex);

    txCircle (x + sizex,      y + sizey,      30 * sizex);
    txCircle (x + 40 * sizex, y + 40 * sizey, 10 * sizex);
    txCircle (x - 40 * sizex, y + 40 * sizey, 10 * sizex);
    txCircle (x + sizex,      y + 70 * sizey, 50 * sizex);

    txSetColor (hdColor, 20 * sizex);
    txLine (x - 20 * sizex, y + 100 * sizey, x - 20 * sizex + lapax/2, y + 140 * sizey + lapay/8);
    txLine (x + 30 * sizex, y + 100 * sizey, x + 30 * sizex - lapax/2, y + 140 * sizey + lapay/8);
    txLine (x + 80 * sizex, y + 50 * sizey * hvosty,  x + 30 * sizex, y + 100 * sizey);

    txSetColor (hdColor, 20);
    txLine (x - 30*sizex, y - 15*sizey,  x - 30*sizex + uhoL, y - 50*sizey + uhoL);
    txLine (x - 30*sizex + uhoL, y - 50*sizey + uhoL,  x + sizex,    y - 30*sizey);
    txLine (x + sizex,    y - 30*sizey,  x + 30*sizex + uhoR, y - 50*sizey + uhoR);
    txLine (x + 30*sizex + uhoR, y - 50*sizey + uhoR,  x + 30*sizex, y - 15*sizey);

    txSetColor (TX_CYAN);
    txSetFillColor (TX_CYAN);
    txCircle (x - 15 * sizex, y - 15 * sizey, 5 * sizex + glazR);
    txCircle (x + 15 * sizex, y - 15 * sizey, 5 * sizex + glazL);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x - 15 * sizex, y - 15 * sizey, 2 * sizex);
    txCircle (x + 15 * sizex, y - 15 * sizey, 2 * sizex);

    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    txCircle (x + sizex, y + sizey, 10 * sizex);

    txSetColor (TX_BLACK, 3 * sizex);
    txLine (x + sizex, y + sizey, x - 80 * sizex + us, y - 30 * sizey + us);
    txLine (x + sizex, y + sizey, x - 80 * sizex + us, y - 15 * sizey + us);
    txLine (x + sizex, y + sizey, x - 80 * sizex + us, y + sizey + us);
    txLine (x + sizex, y + sizey, x + 80 * sizex + us, y + sizey + us);
    txLine (x + sizex, y + sizey, x + 80 * sizex + us, y - 30 * sizey + us);
    txLine (x + sizex, y + sizey, x + 80 * sizex + us, y - 15 * sizey + us);
    }

//--------------------------------------------------------------------------------------------------------------

void DrawDevohkaLIZA(int x, int y, double sizex, double sizey, double rukaL,
     double rukaR, double nogaL, double nogaR, double rot, double glazL, double glazR)
    {
    txSetColor (TX_YELLOW );
    txSetFillColor (TX_YELLOW );
    txCircle (x + sizex, y - 10 * sizey, 10 * sizex);

    txSetColor (TX_PINK, 3 * sizex);
    POINT star[6] = {{x - 15 * sizex, y - 25 * sizey}, {x + sizex,      y - 20 * sizey},
                     {x + 15 * sizex, y - 25 * sizey}, {x + 15 * sizex, y - 15 * sizey},
                     {x + sizex,      y - 20 * sizey}, {x - 15 * sizex, y - 15 * sizey}};
                     txPolygon (star, 6);

    txFloodFill (x + 10 * sizex, y - 20 * sizey);
    txFloodFill (x - 10 * sizex, y - 20 * sizey);

    txSetColor (TX_YELLOW, 6 * sizex);
    txLine (x + sizex,      y + sizey,      x + 15 * sizex, y + 10 * sizey + rukaL);
    txLine (x + sizex,      y + sizey,      x - 15 * sizex, y + 10 * sizey + rukaR);
    txLine (x + 10 * sizex, y + 40 * sizey, x + 10 * sizex, y + 50 * sizey + nogaL);
    txLine (x - 10 * sizex, y + 40 * sizey, x - 10 * sizex, y + 50 * sizey + nogaR);

    txSetColor (TX_ORANGE, 5 * sizex);
    txSetFillColor (TX_ORANGE);
    txLine (x + sizex,      y + sizey,      x + 15 * sizex, y + 40 * sizey);
    txLine (x + 15 * sizex, y + 40 * sizey, x - 15 * sizex, y + 40 * sizey);
    txLine (x - 15 * sizex, y + 40 * sizey, x + sizex,      y + sizey);
    txFloodFill (x + sizex, y + 10 * sizey);

    txSetColor (TX_BLACK, 1 * sizex);
    txLine (x - 5 * sizex, y - 12 * sizey, x - 10 * sizex, y - 15 * sizey);
    txLine (x - 5 * sizex, y - 12 * sizey, x - 5 * sizex,  y - 15 * sizey);
    txLine (x - 5 * sizex, y - 12 * sizey, x + sizex,      y - 15 * sizey);
    txLine (x + 5 * sizex, y - 12 * sizey, x + 10 * sizex, y - 15 * sizey);
    txLine (x + 5 * sizex, y - 12 * sizey, x + 5 * sizex,  y - 15 * sizey);
    txLine (x + 5 * sizex, y - 12 * sizey, x + sizex,      y - 15 * sizey);

    txSetColor (TX_LIGHTCYAN);
    txSetFillColor (TX_LIGHTCYAN);
    txCircle (x - 5 * sizex, y - 12 * sizey, 2 * sizex + glazL);
    txCircle (x + 5 * sizex, y - 12 * sizey, 2 * sizex + glazR);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x - 5 * sizex, y - 12 * sizey, 1 * sizex);
    txCircle (x + 5 * sizex, y - 12 * sizey, 1 * sizex);

    txSetColor (TX_LIGHTRED);
    txSetFillColor (TX_LIGHTRED);
    txCircle (x + sizex, y - 5 * sizey, 2 * sizex + rot);
    }
//--------------------------------------------------------------------------------------------------------------

void DrawMachina(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_YELLOW );
    txSetFillColor (TX_YELLOW );
    txCircle (x + 55 * sizex, y - 10 * sizey, 5 * sizex);

    txSetColor (TX_BROWN, 3 * sizex);
    POINT star[8] = {{x - 50 * sizex, y + sizey},      {x - 50 * sizex, y - 15 * sizey},
                     {x - 30 * sizex, y - 15 * sizey}, {x - 25 * sizex, y - 30 * sizey},
                     {x + 15 * sizex, y - 30 * sizey}, {x + 35 * sizex, y - 15 * sizey},
                     {x + 55 * sizex, y - 10 * sizey}, {x + 55 * sizex, y - sizey}};
                     txPolygon (star, 8);
    txFloodFill (x + 10 * sizex, y - 20 * sizey);

    txSetColor (TX_DARKGRAY);
    txSetFillColor (TX_DARKGRAY);
    txCircle (x - 20 * sizex, y + sizey, 10 * sizex);
    txCircle (x + 20 * sizex, y + sizey, 10 * sizex);
    }
//--------------------------------------------------------------------------------------------------------------

void DrawMalchikIVAN(int x, int y, double sizex, double sizey, double twist,
     double crazy, double handUp, double smile)
    {
    txSetColor (TX_YELLOW );
    txSetFillColor (TX_YELLOW );
    txCircle (x + sizex, y - 10 * sizey, 10 * sizex);

    txSetColor (TX_YELLOW, 6 * sizex);
    txLine (x + 15 * sizex,      y + sizey,      x + 15 * sizex * handUp, y + 15 * sizey);
    txLine (x - 15 * sizex,      y + sizey,      x - 15 * sizex * handUp, y + 15 * sizey);
    txLine (x + twist * sizex,   y + 20 * sizey, x + 5 * sizex * handUp,  y + 50 * sizey);
    txLine (x + twist * sizex,   y + 20 * sizey, x - 5 * sizex * handUp,  y + 50 * sizey);

    txSetColor (TX_LIGHTCYAN, 5 * sizex);
    txSetFillColor (TX_LIGHTCYAN);
    txLine (x + twist * sizex,  y + 20 * sizey,  x + 15 * sizex,     y + sizey);
    txLine (x + 15 * sizex,     y + sizey,       x - 15 * sizex,     y + sizey);
    txLine (x - 15 * sizex,     y + sizey,       x + twist * sizex,  y + 20 * sizey);
    txFloodFill (x + sizex,     y + 10 * sizey);

    txSetColor (TX_BLACK, 1 * sizex);
    txLine (x - 5 * sizex, y - 12 * sizey, x - 10 * sizex, y - 15 * sizey);
    txLine (x - 5 * sizex, y - 12 * sizey, x - 5 * sizex,  y - 15 * sizey);
    txLine (x - 5 * sizex, y - 12 * sizey, x + sizex,      y - 15 * sizey);
    txLine (x + 5 * sizex, y - 12 * sizey, x + 10 * sizex, y - 15 * sizey);
    txLine (x + 5 * sizex, y - 12 * sizey, x + 5 * sizex,  y - 15 * sizey);
    txLine (x + 5 * sizex, y - 12 * sizey, x + sizex,      y - 15 * sizey);

    txSetColor (TX_DARKGRAY);
    txSetFillColor (TX_DARKGRAY);
    txCircle (x - 5 * sizex, y - 12 * sizey - crazy, 2 * sizex - crazy/2);
    txCircle (x + 5 * sizex, y - 12 * sizey + crazy, 2 * sizex + crazy/2);

    txSetColor (TX_LIGHTRED);
    txSetFillColor (TX_LIGHTRED);
    txLine (x - 5 * sizex, y - 5 * sizey,       x ,            y - 5 * sizey + smile);
    txLine (x ,            y - 5 * sizey+smile, x + 5 * sizex, y - 5 * sizey);
    }
//--------------------------------------------------------------------------------------------------------------

void DrawDerevo (int x, int y, double sizex, double sizey,
             COLORREF bbColor)
    {
    txSetFillColor (bbColor);
    txSetColor (bbColor, sizex);
    txCircle (x - 150 * sizex, y - 150 * sizey, 100 * sizex);
    txCircle (x + 150 * sizex, y - 150 * sizey, 100 * sizex);
    txCircle (x + sizex,       y - 200 * sizey, 200 * sizex);
    txCircle (x - 150 * sizex, y + sizey,       150 * sizex);
    txCircle (x + 150 * sizex, y + sizey,       150 * sizex);

    txSetColor (TX_RED , 50*sizex);
    txSetFillColor (TX_GREEN );
    txLine (x + sizex, y + sizey, x + sizex,  y + 500 * sizey);
    }
//--------------------------------------------------------------------------------------------------------------

void DrawStrekoza (int x, int y, double sizex, double sizey,
                  COLORREF heabColor, COLORREF eyeColor, COLORREF esColor,
                  double crazy, double handUp)
    {
    txSetFillColor (heabColor);
    txEllipse (x + sizex, y + sizey,      x - 80 * sizex, y - 25 * sizey * handUp);
    txEllipse (x + sizex, y + sizey,      x + 80 * sizex, y - 25 * sizex * handUp);
    txEllipse (x + sizex, y - 25 * sizex, x - 60 * sizex, y - 50 * sizey * handUp);
    txEllipse (x + sizex, y - 25 * sizey, x + 60 * sizex, y - 50 * sizey * handUp);

    txSetFillColor (eyeColor);
    txSetColor (TX_DARKGRAY, sizex);
    txCircle (x + sizex, y + 30 * sizey, 30 * sizex);

    txSetFillColor (esColor);
    txSetColor (TX_DARKGRAY,2 * sizex);
    txCircle (x - 15 * sizex, y + 30 * sizey - crazy, 10 * sizex - crazy/2);
    txCircle (x + 15 * sizex, y + 30 * sizey + crazy, 10 * sizex + crazy/2);

    txSetColor (TX_DARKGRAY, 5 * sizex);
    txLine (x + sizex, y + sizey, x + sizex, y - 80 * sizey);
    }
//---------------------------------------------------------------------------------------------------------------

void DrawElka(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_YELLOW, 3 * sizex);
    POINT star[11] = {{x - 40 * sizex, y + 35 * sizey}, {x - 15 * sizex, y + 10 * sizey},
                     { x - 30 * sizex, y + 10 * sizey}, {x - 5 * sizex,  y - 10 * sizey},
                     { x - 20 * sizex, y - 10 * sizey}, {x + sizex,      y - 50 * sizey},
                     { x + 20 * sizex, y - 10 * sizey}, {x + 5 * sizex,  y - 10 * sizey},
                     { x + 30 * sizex, y + 10 * sizey}, {x + 15 * sizex, y + 10 * sizey},
                     { x + 40 * sizex, y + 35 * sizey}};
                     txPolygon (star, 11);
    txFloodFill (x + sizex, y + sizey);

    txSetColor (TX_YELLOW, 6 * sizex);
    txLine (x - 5 * sizex, y + 35 * sizey, x - 5 * sizex, y + 40 * sizey);
    txLine (x - 5 * sizex, y + 40 * sizey, x + 5 * sizex, y + 40 * sizey);
    txLine (x + 5 * sizex, y + 40 * sizey, x + 5 * sizex, y + 35 * sizey);
    }
//---------------------------------------------------------------------------------------------------------------

void DrawRaketa(int x, int y, double sizex, double sizey)
    {
    txSetColor (TX_DARKGRAY , 3 * sizex);
    txSetFillColor (TX_DARKGRAY);
    POINT star[10] = {{x - 45 * sizex, y + 60 * sizey}, {x - 15 * sizex, y + 35 * sizey},
                     { x - 15 * sizex, y - 15 * sizey}, {x + 1 * sizex,  y - 35 * sizey},
                     { x + 15 * sizex, y - 15 * sizey}, {x + 15 * sizex, y + 35 * sizey},
                     { x + 45 * sizex, y + 60 * sizey}, {x + 15 * sizex, y + 60 * sizey},
                     { x + sizex,      y + 50 * sizey}, {x - 15 * sizex, y + 60 * sizey}};
                     txPolygon (star, 10);
    txFloodFill (x + sizex, y + sizey);

    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (x + sizex, y + sizey, 10 * sizex);
    }
//---------------------------------------------------------------------------------------------------------------

void DrawBackground()
    {
    DrawCot         ( 250, 250, 0.50, 0.50, TX_BLACK, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    DrawFir         ( 100, 150, 1.00, 1.00, TX_GREEN);
    DrawFir         (1000, 150, 1.00, 1.00, TX_GREEN);
    DrawFir         ( 300, 100, 0.50, 0.50, TX_YELLOW);
    DrawFir         ( 200, 180, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         ( 300, 250, 0.50, 0.50, TX_GREEN);
    DrawCust        ( 400, 600, 1.00, 1.00);
    DrawCot         ( 350, 500, 0.75, 0.75, TX_DARKGRAY, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    DrawCust        ( 500, 600, 1.00, 1.00);
    DrawCust        ( 600, 600, 0.50, 0.50);
    DrawObloko      (1000, 100, 2.00, 2.00, TX_BLUE);
    DrawObloko      ( 700, 120, 0.50, 0.50, TX_LIGHTBLUE);
    DrawFir         ( 900, 150, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         (1000, 100, 0.50, 0.50, TX_YELLOW);
    DrawFir         ( 900, 250, 0.25, 0.25, TX_CYAN );
    DrawDerevo      ( 950, 150, 0.25, 0.25, TX_GREEN);
    DrawDerevo      ( 950, 150, 0.15, 0.15, TX_LIGHTGREEN);
    DrawDerevo      (1050, 150, 0.25, 0.25, TX_CYAN);
    DrawDerevo      ( 850, 150, 0.12, 0.25, TX_YELLOW);
    DrawDerevo      ( 800, 150, 0.25, 0.12, TX_LIGHTGREEN);
    DrawElka        (1000, 270, 1.00, 1.00);
    }
//---------------------------------------------------------------------------------------------------------------

void DrawBackgroundPezaj()
    {
    txSetFillColor (RGB (175, 238, 238));
    txClear();

    DrawCot         ( 250, 250, 0.50, 0.50, TX_BLACK, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    DrawFir         ( 100, 150, 1,    1,    TX_GREEN);
    DrawFir         (1000, 150, 1,    1,    TX_GREEN);
    DrawFir         ( 300, 100, 0.5,  0.50, TX_YELLOW);
    DrawFir         ( 200, 180, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         ( 300, 250, 0.50, 0.50, TX_GREEN);
    DrawObloko      ( 700,  70, 0.25, 0.25, TX_BLUE);
    DrawObloko      ( 300, 100, 1,    1,    TX_CYAN);
    DrawObloko      (  50, 100, 2,    2,    TX_BLUE);
    DrawObloko      ( 120, 120, 0.50, 0.50, TX_LIGHTBLUE);
    DrawCust        ( 500, 700, 1,    1);
    DrawCust        ( 600, 700, 0.50, 0.5);
    DrawCust        ( 200, 700, 1,    1);
    DrawCust        ( 300, 700, 0.50, 0.5);
    DrawCust        ( 700, 700, 1,    1);
    DrawCust        ( 800, 700, 0.50, 0.5);
    DrawCust        ( 900, 700, 1,    1);
    DrawCust        (1000, 700, 0.50, 0.5);
    DrawCust        (1100, 700, 1,    1);
    DrawCust        ( 400, 700, 0.50, 0.5);
    DrawObloko      (1000, 100, 2,    2,    TX_BLUE);
    DrawObloko      ( 700, 120, 0.50, 0.50, TX_LIGHTBLUE);
    DrawFir         ( 900, 150, 0.75, 0.75, TX_LIGHTGREEN);
    DrawFir         (1000, 100, 0.50, 0.50, TX_YELLOW);
    DrawFir         ( 900, 250, 0.25, 0.25, TX_CYAN );
    DrawDerevo      ( 950, 150, 0.25, 0.25, TX_GREEN);
    DrawDerevo      ( 950, 150, 0.15, 0.15, TX_LIGHTGREEN);
    DrawDerevo      (1050, 150, 0.25, 0.25, TX_CYAN);
    DrawDerevo      ( 850, 150, 0.12, 0.25, TX_YELLOW);
    DrawDerevo      ( 800, 150, 0.25, 0.12, TX_LIGHTGREEN);
    DrawElka        (1100, 270, 1,    1);
    DrawElka        ( 800, 270, 1,    1);
    DrawElka        ( 760, 250, 1,    1);
    DrawElka        ( 900, 170, 1,    1);
    DrawElka        ( 410, 230, 1,    1);
    DrawElka        ( 280, 250, 2,    1);
    DrawElka        ( 600, 250, 3,    2);
    DrawElka        ( 100, 170, 1,    3);
    DrawElka        ( 150, 150, 1.50, 5);

    }
//---------------------------------------------------------------------------------------------------------------

void drawRain     (int x0, int y0, int sizeY)
    {
    int t = -20;

    while (t < 20)
        {
        for (int x = x0; x <= 1300; x += 15)
            {
            txSetColor (TX_BLUE);

            DrawObloko (t * 70 + 300,  50,   2,   2, TX_BLUE);

            DrawObloko (t * 60 - 300,  50,   2,   2, TX_BLUE);


            txLine (x, t * 50 + x%2 * 20 + y0, x, t * 50 + x%2 * 20 + y0 + sizeY);

            }

        txSleep (5 * t);
        t++;
        }
    }
//---------------------------------------------------------------------------------------------------------------

void DrawStrekoziMalenkie()
    {
    int  t = 300;
    while (t <= 600)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawStrekoza (t + 500,     300, 0.075, 0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (t + 550,     250, 0.075, 0.075, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza (t + 500,     250, 0.075, 0.075, TX_LIGHTRED ,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (t + 600,     300, 0.075, 0.075, TX_LIGHTBLUE,    TX_LIGHTRED, TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (t + 510,     310, 0.075, 0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (t + 560,     265, 0.075, 0.075, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza (t + 530,     265, 0.075, 0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (t + 620,     315, 0.075, 0.075, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (t + 300, t + 200,  0.25,  0.25, TX_LIGHTMAGENTA, TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (t + 350, t + 150,  0.25,  0.25, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza (t + 300, t + 150,  0.25,  0.25, TX_LIGHTMAGENTA, TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (    500, t + 100,  0.25,  0.25, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (    550,  t + 50,  0.25,  0.25, TX_GRAY,         TX_YELLOW,   TX_DARKGRAY,     t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza (    500,  t + 50,  0.25,  0.25, TX_LIGHTMAGENTA, TX_GREEN,    TX_LIGHTBLUE,    t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza (    600, t + 100,  0.25,  0.25, TX_LIGHTBLUE,    TX_GREEN,    TX_LIGHTMAGENTA, t%2 * 2 + 0.5, t%2 * 5 - 3);

         t ++;
         txSleep (50);
         }

    }
//-----------------------------------------------------------------------------------------------------------------------

void DrawOblokaPlivut()
    {
    int t = 500;
    while (t <= 1200)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         DrawSun    (600,      50, (t%2) * 3, (t/10)%2 * 2 - 1);
         DrawObloko (t,        70,      0.25, 0.25, TX_BLUE);
         DrawObloko (t,       100,         1,    1, TX_CYAN);
         DrawObloko (t + 500, 100,         2,    2, TX_BLUE);
         DrawObloko (t + 200, 120,       0.5,  0.5, TX_LIGHTBLUE);
         DrawObloko (t + 300,  10,         2,    2, TX_BLUE);
         DrawObloko (t + 100, 120,       0.5,  0.5, TX_LIGHTBLUE);
         DrawObloko (t - 300,  10,         2,    2, TX_BLUE);
         DrawObloko (t - 100, 120,        0.5, 0.5, TX_LIGHTBLUE);
         t ++;
         txSleep (50);
         }
    }
//---------------------------------------------------------------------------------------------------------------------

void DrawPoletStrekoz()
    {
    int t = 500;
    while (t <= 1200)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();


         DrawStrekoza    (- t + 1000,     300, 0.25, 0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (  t - 10,   t - 30,  0.55, 0.55, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (  t + 100,  t + 200, 0.25, 0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (  t + 150,  t + 150, 0.25, 0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (  t + 100,  t + 150, 0.25, 0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (  t + 200,  t + 200, 0.25, 0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (      300,  t + 100, 0.25, 0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (      350,  t + 50,  0.25, 0.25, TX_GRAY, TX_YELLOW, TX_DARKGRAY, t%2 * 2 + 0.5, t%2 * 5 + 3);
         DrawStrekoza    (      300,  t + 50,  0.25, 0.25, TX_LIGHTMAGENTA, TX_GREEN, TX_LIGHTBLUE, t%2 * 2 + 0.5, t%2 * 5 - 3);
         DrawStrekoza    (      400,  t + 100, 0.25, 0.25, TX_LIGHTBLUE, TX_GREEN, TX_LIGHTMAGENTA, t%2 * 2 + 0.5, t%2 * 5 - 3);

         t ++;
         txSleep (50);
         }
    }
//--------------------------------------------------------------------------------------------------------------------------
