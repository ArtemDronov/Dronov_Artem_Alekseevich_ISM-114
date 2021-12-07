#include "Rightangled.h"
#include <cmath>

#define ANGLE_90  90.0
#define EPSILON 1e-8

void Rightangled::calcSquare(){
        square = -1;
        if(fabs(GetAngle_ac() - ANGLE_90)<EPSILON)
            square = GetB()*GetC()/2.0;
        else if(fabs(GetAngle_ab() - ANGLE_90)<EPSILON)
            square = GetA()*GetC()/2.0;
        else if(fabs(GetAngle_bc() - ANGLE_90)<EPSILON)
            square = GetA()*GetB()/2.0;
        else throw"Ошибка! Треугольник не прямоугольный!";
    }

Rightangled::Rightangled(): Triangle(){
        calcSquare();
}

Rightangled::Rightangled(const double a_, const double b_, const double c_):Triangle(a_,b_,c_){
        calcSquare();
}

Rightangled::~Rightangled(){
}

double Rightangled::GetSquare()const{
    return square;
}


