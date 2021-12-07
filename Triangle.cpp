#include "Triangle.h"
#include <cmath>

#define ANGLE_180 180.0
#define PI  3.14159265358

double Triangle::get_angle(const double a,const double b,const double c)const
{
      return acos((a*a+b*b-c*c) / (2.0*a*b)) * ANGLE_180 / PI;
}

Triangle::Triangle(){
        SetC(1);
        SetA(1);
        SetB(1);
}

Triangle::~Triangle(){
}

Triangle::Triangle(const double a_, const double b_, const double c_){
        if (!((b_+c_>a_)&&(a_+c_>b_)&&(a_+b_>c_)))
            throw "Triangle does not exist!";
        SetC(c_);
        SetA(a_);
        SetB(b_);
    }

double Triangle::GetA() const{ return a;}
void Triangle::SetA(const double a_){
        if (a_<0)
            throw "Negative side dimension!";
        a = a_;
}
double Triangle::GetB()const{ return b; }
void Triangle::SetB(const double b_){
        if (b_<0)
            throw "Negative side dimension!";
        b = b_;
    }

double Triangle::GetC()const{ return c; }
void Triangle::SetC(const double c_){
        if (c_<0)
            throw "Negative side dimension!";
        c = c_;
    }
double Triangle::GetAngle_ac() const{
    return get_angle(a,c,b);
}
double Triangle::GetAngle_ab() const{
    return get_angle(a,b,c);
}
double Triangle::GetAngle_bc() const{
    return get_angle(b,c,a);
}
double Triangle::Perimeter() const{
    return a+b+c;
}
