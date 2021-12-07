/*!
\file
\brief Заголовочный файл с описанием класса Triangle

Данный файл содержит описание класса Triangle (треугольник)
*/
#ifndef TRIANGLE_H
#define TRIANGLE_H


/*!
	\brief Класс Triangle
	\version 1.0
	\date 7.12.2021

	Класс - Треугольник
*/
class Triangle{
private:
  double a;
  double b;
  double c;
/*!
Получить угол между сторонами a и b
\param[in] a Длина стороны a
\param[in] b Длина стороны b
\param[in] c Длина стороны c
*/
  double get_angle(const double a,const double b,const double c)const;
public:
/*!
Конструктор по умолчанию
*/
    Triangle();
/*!
Конструктор с параметрами
\param[in] a_ Длина стороны a
\param[in] b_ Длина стороны b
\param[in] c_ Длина стороны c
*/
    Triangle(const double a_, const double b_, const double c_);
/*!
Деструктор
*/
    virtual ~Triangle();
/*!
Получение длины строны a
\return Длина a
*/
    double GetA() const;
/*!
Установка длины строны a
\param[in] a_ Длина стороны a
*/
    void SetA(const double a_);
/*!
Получение длины строны b
\return Длина b
*/
    double GetB()const;
/*!
Установка длины строны b
\param[in] b_ Длина стороны b
*/
    void SetB(const double b_);
/*!
Получение длины строны c
\return Длина c
*/
    double GetC()const;
/*!
Установка длины строны c
\param[in] c_ Длина стороны c
*/
    void SetC(const double c_);
/*!
Получение угла между сторонами a и c
\return Угол
*/
    double GetAngle_ac() const;
/*!
Получение угла между сторонами a и b
\return Угол
*/
    double GetAngle_ab() const;
/*!
Получение угла между сторонами b и c
\return Угол
*/
    double GetAngle_bc() const;
/*!
Получение периметра треугольника
\return Периметр
*/
    double Perimeter() const;
};

#endif // TRIANGLE_H
