/*!
\file
\brief ������������ ���� � ��������� ������ Triangle

������ ���� �������� �������� ������ Triangle (�����������)
*/
#ifndef TRIANGLE_H
#define TRIANGLE_H


/*!
	\brief ����� Triangle
	\version 1.0
	\date 7.12.2021

	����� - �����������
*/
class Triangle{
private:
  double a;
  double b;
  double c;
/*!
�������� ���� ����� ��������� a � b
\param[in] a ����� ������� a
\param[in] b ����� ������� b
\param[in] c ����� ������� c
*/
  double get_angle(const double a,const double b,const double c)const;
public:
/*!
����������� �� ���������
*/
    Triangle();
/*!
����������� � �����������
\param[in] a_ ����� ������� a
\param[in] b_ ����� ������� b
\param[in] c_ ����� ������� c
*/
    Triangle(const double a_, const double b_, const double c_);
/*!
����������
*/
    virtual ~Triangle();
/*!
��������� ����� ������ a
\return ����� a
*/
    double GetA() const;
/*!
��������� ����� ������ a
\param[in] a_ ����� ������� a
*/
    void SetA(const double a_);
/*!
��������� ����� ������ b
\return ����� b
*/
    double GetB()const;
/*!
��������� ����� ������ b
\param[in] b_ ����� ������� b
*/
    void SetB(const double b_);
/*!
��������� ����� ������ c
\return ����� c
*/
    double GetC()const;
/*!
��������� ����� ������ c
\param[in] c_ ����� ������� c
*/
    void SetC(const double c_);
/*!
��������� ���� ����� ��������� a � c
\return ����
*/
    double GetAngle_ac() const;
/*!
��������� ���� ����� ��������� a � b
\return ����
*/
    double GetAngle_ab() const;
/*!
��������� ���� ����� ��������� b � c
\return ����
*/
    double GetAngle_bc() const;
/*!
��������� ��������� ������������
\return ��������
*/
    double Perimeter() const;
};

#endif // TRIANGLE_H
