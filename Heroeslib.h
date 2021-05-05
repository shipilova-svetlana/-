//{===========================================================================
//! @brief  ����������� ������
//!
//! @author ����� �����,
//!        �. ���������, ���� "��� � 4"
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
//! ������ ��������
//!
//! @param x                    �-���������� ������ �������� ���� ���� ��������
//! @param y                    �-���������� ������ �������� ���� ���� ��������
//! @param sizeX                ������ �������� �� ��� �
//! @param sizeY                ������ �������� �� ��� Y
//! @param legsDistanceX        ��������� ���������� ����� ��� �� ��� �
//! @param legsDistanceY        ��������� ���������� ����� ��� �� ��� Y
//! @param locationHand         ��������� ���������� ����� ���,
//! @param rHandUp              �������� ������ ���� �����-����
//! @param lHandUp              �������� ����� ���� �����-����
//! @param HandRDistance        �������� ������ ���� ����-�����
//! @param HandLDistance        �������� ����� ���� ����-�����
//! @param COLORREF bodyColor   ���� ������ ��������
//!
//! @par ������ �������������
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
//! ������ �������
//!
//! @param x                   �-���������� ������� �������� �������
//! @param y                   �-���������� ������� �������� �������
//! @param sizeX               ������ ������� �� ��� �
//! @param sizeY               ������ ������� �� ��� Y
//! @param legsDistanceX       ��������� ���������� ����� ��� �� ��� �
//! @param legsDistanceY       ��������� ���������� ����� ��� �� ��� Y
//! @param locationHand        ��������� ���������� ����� ���,
//! @param rHandUp             �������� ������ ���� �����-����
//! @param lHandUp             �������� ����� ���� �����-����
//! @param HandRDistance       �������� ������ ���� ����-�����
//! @param HandLDistance       �������� ����� ���� ����-�����
//! @param COLORREF bodyColor  ���� ������ �������
//! @param COLORREF bowColor   ���� ������� �������
//!
//! @par ������ �������������
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
//! ������ ������
//!
//! @param x                    �-���������� ������ ������
//! @param y                    �-���������� ������ ������
//! @param sizeX                ������ ������ �� ��� �
//! @param sizeY                ������ ������ �� ��� Y
//! @param COLORREF carColor    ���� ������
//! @param movewheel            �������� ����� ��� Y
//!
//! @par ������ �������������
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
//! ������ ������
//!
//! @param x                    �-���������� ������ ������
//! @param y                    �-���������� ������ ������
//! @param sizeX                ������ ������ �� ��� �
//! @param sizeY                ������ ������ �� ��� Y
//! @param COLORREF bodyColor   ���� ������
//! @param smail                �������� ���
//! @param surprise             ��������� ������� �������
//! @param lengthray            ���������� ������� �����
//! @param brow                 �������� ������
//!
//! @par ������ �������������
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
