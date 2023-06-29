#include "Rational.h"
#include <iostream>
using namespace std;

void Biggest() {
    int x1;
    int y1;
    cout << "enter your first rational ";
    cin >> x1 >> y1;
    int x2;
    int y2;
    cout << "enter your secend rational ";
    cin >> x2 >> y2;
    Rational first(x1, y1);
    Rational second(x2, y2);
    double first1 = first.getNumerator() / first.getDenominator();
    double second1 = second.getNumerator() / second.getDenominator();
    cout << "This is the biggest number ";
    if (first1 > second1) {
        first.print();
    }
    else {
        second.print();
    }
}

int main() {
    Rational r1;
    r1.setNumerator(5);
    r1.setDenominator(2);
    cout << r1.getNumerator() << "/" << r1.getDenominator() << endl;

    Rational r2(8, 16);
    r2.print();
    r2.reduceFraction();
    r2.print();

    Biggest();
}