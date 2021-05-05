//{===========================================================================
//! @brief  Бибилиотека героев
//!
//! @author Усова Ольга,
//!        г. Соликамск, МАОУ "ООШ № 4"
//!
//! @date   2021
//!
//!
//}===========================================================================


#include "TXlib.h"


void DrawMan           (int x, int y, double sizeX, double sizeY, int legsDistanceX = 0, int legsDistanceY = 0,
                       int locationHand = 0, int rHandUp = 0, int lHandUp = 0,
                       int HandRDistance = 0, int HandLDistance = 0, COLORREF bodyColor = RGB (0, 191, 255));

void DrawGirl          (int x, int y, double sizeX, double sizeY, int legsDistanceX = 0, int legsDistanceY = 0,
                       int locationHand = 0, int rHandUp = 0, int lHandUp = 0,
                       int HandRDistance = 0, int HandLDistance = 0,
                       COLORREF bodyColor = RGB (255, 0, 255),COLORREF bowColor = RGB (255, 182, 193));

void DrawCar           (int x, int y, double sizeX, double sizeY, COLORREF carColor, int movewheel = 0);

void DrawSun           (int x, int y, double sizeX, double sizeY, COLORREF bodyColor,
                       int smail,    double surprise, double lengthray, int brow);



//{=============================================================================
//! Рисуем Мальчика
//!
//! @param x                    х-координата левого верхнего угла тела Мальчика
//! @param y                    у-координата левого верхнего угла тела Мальчика
//! @param sizeX                размер Мальчика по оси Х
//! @param sizeY                размер Мальчика по оси Y
//! @param legsDistanceX        изменение расстояния между ног по оси Х
//! @param legsDistanceY        изменение расстояния между ног по оси Y
//! @param locationHand         изменение расстояния между рук,
//! @param rHandUp              движение правой руки вверх-вниз
//! @param lHandUp              движение левой руки вверх-вниз
//! @param HandRDistance        движение правой руки лево-право
//! @param HandLDistance        движение левой руки лево-право
//! @param COLORREF bodyColor   цвет одежды Мальчика
//!
//! @par Пример использования
//!
//! @code
//!         DrawMan (550, 300, 1, 1, 0, 0, 0, 60, 60, 0, 0, RGB (0, 255, 0);
//! @endcode
//!
//}=============================================================================


void DrawMan (int x, int y, double sizeX, double sizeY, int legsDistanceX, int legsDistanceY,
              int locationHand, int rHandUp, int lHandUp, int HandRDistance, int HandLDistance,
              COLORREF bodyColor)
    {
    txSetColor     (RGB (0, 0, 0), 3);
    txSetFillColor (bodyColor);

    txLine      (x + (20*sizeX - 5*locationHand), y, x + (40 + legsDistanceX + HandLDistance)*sizeX - 15*locationHand, y + (30 - lHandUp)*sizeY);
    txRectangle (x,                               y, x +  20*sizeX,                                                    y + 50*sizeY);
    txLine      (x +   5*locationHand,            y, x - (20 + legsDistanceX + HandRDistance)*sizeX +  5*locationHand, y + (30 - rHandUp)*sizeY);

    txLine (x +   5*sizeX, y + 50*sizeY, x + ( 5 - legsDistanceX)*sizeX, y + (80 + legsDistanceY) *sizeY);
    txLine (x +  15*sizeX, y + 50*sizeY, x + (15 + legsDistanceX)*sizeX, y + (80 - legsDistanceY)*sizeY);

    txSetFillColor (RGB (255, 228, 196));
    txCircle       (x + 10*sizeX, y - 15*sizeY, 15);
    }

//{=============================================================================
//! Рисуем Девочку
//!
//! @param x                   х-координата вершины туловища Девочки
//! @param y                   у-координата вершины туловища Девочки
//! @param sizeX               размер Девочки по оси Х
//! @param sizeY               размер Девочки по оси Y
//! @param legsDistanceX       изменение расстояния между ног по оси Х
//! @param legsDistanceY       изменение расстояния между ног по оси Y
//! @param locationHand        изменение расстояния между рук,
//! @param rHandUp             движение правой руки вверх-вниз
//! @param lHandUp             движение левой руки вверх-вниз
//! @param HandRDistance       движение правой руки лево-право
//! @param HandLDistance       движение левой руки лево-право
//! @param COLORREF bodyColor  цвет платья Девочки
//! @param COLORREF bowColor   цвет бантика Девочки
//!
//! @par Пример использования
//!
//! @code
//!         DrawGirl (600, 250, 1, 1, 0, 0, 0, 0, 0, 0, 0, RGB (255, 255, 0), RGB (220, 20, 60);
//! @endcode
//!
//}=============================================================================

void DrawGirl(int x, int y, double sizeX, double sizeY, int legsDistanceX, int legsDistanceY,
              int locationHand, int rHandUp, int lHandUp, int HandRDistance, int HandLDistance,
              COLORREF bodyColor, COLORREF bowColor)
    {
    txSetColor     (RGB (0, 0, 0), 3);
    txSetFillColor (bodyColor);

    txLine (x + (5*sizeX - 5*locationHand), y, x + (35 + legsDistanceX + HandLDistance)*sizeX - 15*locationHand, y + (30 - lHandUp)*sizeY);

    POINT body[4] = {{ROUND (x - 5*sizeX), y}, {ROUND (x + 5*sizeX), y},
                    {ROUND (x + 25*sizeX), ROUND (y + 50*sizeY)}, {ROUND (x - 25*sizeX), ROUND (y + 50*sizeY)}};
    txPolygon (body, 4);

    txSetFillColor (bowColor);
    POINT bow[5] = {{x, ROUND (y - 30*sizeY)}, {ROUND (x + 15*sizeX), ROUND (y - 25*sizeY)},
                    {ROUND (x + 15*sizeX), ROUND (y - 40*sizeY)}, {ROUND (x - 15*sizeX), ROUND (y - 25*sizeY)},
                    {ROUND (x - 15*sizeX), ROUND (y - 40*sizeY)}};
    txPolygon (bow, 5);

    txLine (x - 5 + locationHand, y,            x - (35 + legsDistanceX + HandRDistance)*sizeX +  5*locationHand, y + (30 - rHandUp)*sizeY);

    txLine (x - 5*sizeX,          y + 50*sizeY, x - (5 + legsDistanceX)*sizeX,                                    y + (80 + legsDistanceY) *sizeY);
    txLine (x + 5*sizeX,          y + 50*sizeY, x + (5 + legsDistanceX)*sizeX,                                    y + (80 - legsDistanceY)*sizeY);

    txSetFillColor (RGB (255, 228, 196));
    txCircle       (x, y - 15*sizeY, 15);
    }

//{=============================================================================
//! Рисуем Машину
//!
//! @param x                    х-координата капота машины
//! @param y                    у-координата капота машины
//! @param sizeX                размер машины по оси Х
//! @param sizeY                размер машины по оси Y
//! @param COLORREF carColor    цвет машины
//! @param movewheel            движение колес оси Y
//!
//! @par Пример использования
//!
//! @code
//!         DrawCar (600, 350, 1, 1, RGB (255, 255, 0), 0);
//! @endcode
//!
//}==============================================================================

void DrawCar (int x, int y, double sizeX, double sizeY, COLORREF carColor, int movewheel)
    {
    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (carColor);

    txRectangle    (x, y, x + 200*sizeX, y + 40*sizeY);

    txSetFillColor (RGB (255, 255, 255));
    POINT roof[4] = {{ROUND (x + 50*sizeX), y}, {ROUND (x + 75*sizeX), ROUND(y - 25*sizeY)},
                     {ROUND (x + 155*sizeX), ROUND (y - 25*sizeY)}, {ROUND (x + 170*sizeX), y}};
    txPolygon (roof, 4);
    txLine         (x +  75*sizeX, y - 25*sizeY, x +  75*sizeX, y + 40*sizeY);
    txLine         (x + 155*sizeX, y - 25*sizeY, x + 155*sizeX, y + 40*sizeY);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle       (x +  40*sizeX, y + 40*sizeY - movewheel, 20);
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x +  40*sizeX, y + 40*sizeY - movewheel, 10);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle       (x + 170*sizeX, y + 40*sizeY - movewheel, 20);
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x + 170*sizeX, y + 40*sizeY - movewheel, 10);
    }

//{=============================================================================
//! Рисуем Солнце
//!
//! @param x                    х-координата центра солнца
//! @param y                    у-координата центра солнца
//! @param sizeX                размер солнца по оси Х
//! @param sizeY                размер солнца по оси Y
//! @param COLORREF bodyColor   цвет солнца
//! @param smail                движение рта
//! @param surprise             изменение размера зрачков
//! @param lengthray            измененеие размера лучей
//! @param brow                 движение бровей
//!
//! @par Пример использования
//!
//! @code
//!        DrawSun (1150, 50, 1, 1, RGB (255, 255, 0), 5, 0, 1, 5);
//! @endcode
//!
//}=============================================================================

void DrawSun (int x, int y, double sizeX, double sizeY, COLORREF bodyColor,
              int smail, double surprise, double lengthray, int brow)
    {
    txSetColor     (bodyColor, 3);
    txSetFillColor (bodyColor);

    txCircle (x,            y,            45 * sizeX);
    txLine   (x - 45*sizeX, y           , x - 95*lengthray*sizeX,  y                     );
    txLine   (x,            y + 45*sizeY, x,                       y + 95*lengthray*sizeY);
    txLine   (x - 25*sizeX, y + 25*sizeY, x - 75*lengthray*sizeX,  y + 75*lengthray*sizeY);
    txLine   (x - 25*sizeX, y - 25*sizeY, x - 50*lengthray*sizeX,  y - 50*lengthray*sizeY);
    txLine   (x + 25*sizeX, y + 25*sizeY, x + 50*lengthray*sizeX,  y + 50*lengthray*sizeY);

    txSetColor     (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle       (x - 15*sizeX, y - 12*sizeY, (10 - surprise)*sizeX);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 15*sizeX, y - 12*sizeY, 3 * sizeX);

    txSetFillColor (TX_WHITE);
    txCircle       (x + 15*sizeX, y - 12*sizeY, (10 + surprise)*sizeX);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 15*sizeX, y - 12*sizeY, 3 * sizeX);

    txSetColor (RGB (220, 20, 60), 3);
    txLine     (x - 10*sizeX, y + (20 + smail)*sizeY, x, y + (30 - smail)*sizeY);
    txLine     (x + 10*sizeX, y + (20 + smail)*sizeY, x, y + (30 - smail)*sizeY);

    txSetColor (RGB (139, 69, 19), 2);
    txLine     (x - 25*sizeX, y - 30*sizeY, x - 5*sizeX, y - (30 + brow)*sizeY);
    txLine     (x + 25*sizeX, y - 30*sizeY, x + 5*sizeX, y - (30 + brow)*sizeY);
    }
