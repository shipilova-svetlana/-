//{
//*** Пример использования библиотеки SvetlanaLib.h
//
//*** Создан с использованием библиотеки TXlib.h
//
//}*** Выполнила Шипилова СЛ

#include "SvetlanaLib.h"


//----------------------------------------------------------------------------

int main()
    {
    txCreateWindow (1200, 800);

    int  t = 300;
    while (t <= 600)
         {
         txSetFillColor (RGB (175, 238, 238));
         txClear();

         txSetColor     (RGB (181, 181, 181));
         txSetFillColor (RGB (181, 181, 181));

         POINT pesok[4] = {{0, 350},    {1200, 350},
                          {1200, 500}, {0, 500}};
         txPolygon (pesok, 4);

         DrawMachina  (t * 2 - 500, 400,     2,    2);
         DrawSun      (    600,      50, (t%2) * 3, (t)%2 * 2 - 1);
         DrawFir      (    300,     100,  0.50,  0.50, TX_YELLOW);
         DrawFir      (    200,     180,  0.75,  0.75, TX_LIGHTGREEN);
         DrawDerevo   (    950,     150,  0.25,  0.25, TX_GREEN);
         DrawDerevo   (    950,     150,  0.15,  0.15, TX_LIGHTGREEN);
         DrawElka     (   1000,     270,  1.00,  1.00);
         DrawObloko   (    700,      70,  0.25,  0.25, TX_BLUE);
         DrawObloko   (    300,     100,     1,     1, TX_CYAN);
         DrawObloko   (     50,     100,     2,     2, TX_BLUE);
         DrawObloko   (    120,     120,  0.50,  0.50, TX_LIGHTBLUE);
         DrawDerevo   (    850,     150,  0.12,  0.25, TX_YELLOW);
         DrawDerevo   (    800,     150,  0.25,  0.12, TX_LIGHTGREEN);
         DrawElka     (   1100,     270,     2,     1);
         DrawElka     (    800,     270,     1,     2);
         DrawObloko   (      t,      70,  0.25,  0.25, TX_BLUE);
         DrawObloko   (      t,     100,     1,     1, TX_CYAN);
         DrawObloko   (t + 500,     100,     2,     2, TX_BLUE);
         DrawObloko   (t + 200,     120,   0.5,   0.5, TX_LIGHTBLUE);
         DrawObloko   (t + 300,      10,     2,     2, TX_BLUE);
         DrawObloko   (t + 100,     120,   0.5,   0.5, TX_LIGHTBLUE);
         DrawObloko   (t - 300,      10,     2,     2, TX_BLUE);
         DrawObloko   (t - 100,     120,   0.5,   0.5, TX_LIGHTBLUE);
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

         DrawSzenaLiven();
    return 0;
    }
//----------------------------------------------------------------------------
