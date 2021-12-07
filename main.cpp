#include <iostream>
#include "Triangle.h"
#include "Rightangled.h"
using namespace std;


int main(){
    Triangle t(2,3,4);
    cout << "Angle ac = " << t.GetAngle_ac() << endl;
    cout << "Angle ab = " << t.GetAngle_ab() << endl;
    cout << "Angle bc = " << t.GetAngle_bc() << endl;
    cout << "Perimeter = " << t.Perimeter() << endl;

    Rightangled r(5,10,11.180339887498949);
    cout << "Square = " << r.GetSquare() << endl;

    return 0;
}
