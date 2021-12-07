/*!
\file
\brief Заголовочный файл с описанием класса Rightangled

Данный файл содержит описание класса Rightangled (прямоугольный треугольник)
*/

#ifndef RIGHTANGLED_H
#define RIGHTANGLED_H
#include "Triangle.h"


/*!
	\brief Класс Rightangled
	\version 1.0
	\date 7.12.2021

	Класс - Прямоугольный треугольник
*/
class Rightangled: public Triangle{
private:
    double square;
    void calcSquare();
public:
/*!
Конструктор по умолчанию
*/
    Rightangled();
/*!
Конструктор с параметрами
\param[in] a_ Длина стороны a
\param[in] b_ Длина стороны b
\param[in] c_ Длина стороны c
*/
    Rightangled(const double a_, const double b_, const double c_);
/*!
Деструктор
*/
    ~Rightangled();
/*!
Получение площади треугольника
\return Площадь
*/
    double GetSquare()const;
};

#endif // RIGHTANGLED_H
