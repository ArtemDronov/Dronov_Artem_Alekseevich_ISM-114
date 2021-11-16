#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a;
    double b;
    double c;

public:
    Triangle() {
        a = 1;
        b = 1;
        c = 1;
    }

    Triangle(double a_, double b_, double c_) {
        a = a_;
        b = b_;
        c = c_;
    }

    double getA() { return a; }
    void setA(double a_) { a = a_; }

    double getB() { return b; }
    void setB(double b_) { b = b_; }

    double getC() { return c; }
    void setC(double c_) { c = c_; }

    int La() { return acos((a * a + c * c - b * b) / (2 * a * c)) * 180.0 / 3.14; }
    int Lb() { return acos((a * a + b * b - c * c) / (2 * a * b)) * 180.0 / 3.14; }
    int Lc() { return acos((b * b + c * c - a * a) / (2 * b * c)) * 180.0 / 3.14; }

    double P() { return a + b + c; }
};

class Rightangled : public Triangle {
private:
    double S;
public:
    Rightangled() : Triangle() {
        setS();
    }

    Rightangled(double a_, double b_, double c_) :Triangle(a_, b_, c_) {
        setS();
    }

    void setS() {
        if (La() == 90) S = 0.5 * getB() * getC();
        else if (Lb() == 90) S = 0.5 * getA() * getC();
        else if (Lc() == 90) S = 0.5 * getA() * getB();
        else cout << "Ошибка! Треугольник не прямоугольный!" << endl;
    }

    double getS() { return S; }
};

int main() {
    Triangle t(2, 3, 4);
    cout << "La = " << t.La() << endl;
    cout << "Lb = " << t.Lb() << endl;
    cout << "Lc = " << t.Lc() << endl;
    cout << "P = " << t.P() << endl;

    Rightangled r(5, 10, 11.18);
    cout << "S = " << r.getS() << endl;

    return 0;
}