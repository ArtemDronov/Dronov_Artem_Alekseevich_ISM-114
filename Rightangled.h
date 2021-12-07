/*!
\file
\brief ������������ ���� � ��������� ������ Rightangled

������ ���� �������� �������� ������ Rightangled (������������� �����������)
*/

#ifndef RIGHTANGLED_H
#define RIGHTANGLED_H
#include "Triangle.h"


/*!
	\brief ����� Rightangled
	\version 1.0
	\date 7.12.2021

	����� - ������������� �����������
*/
class Rightangled: public Triangle{
private:
    double square;
    void calcSquare();
public:
/*!
����������� �� ���������
*/
    Rightangled();
/*!
����������� � �����������
\param[in] a_ ����� ������� a
\param[in] b_ ����� ������� b
\param[in] c_ ����� ������� c
*/
    Rightangled(const double a_, const double b_, const double c_);
/*!
����������
*/
    ~Rightangled();
/*!
��������� ������� ������������
\return �������
*/
    double GetSquare()const;
};

#endif // RIGHTANGLED_H
