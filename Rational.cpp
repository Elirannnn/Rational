#include "Rational.h"
#include <iostream>
using namespace std;
Rational::Rational() {
    setNumerator(0);
    setDenominator(1);
}

Rational::Rational(int numerator, int denominator) {
    if (denominator == 0) {
        setNumerator(0);
        setDenominator(1);
    }
    else {
        setNumerator(numerator);
        setDenominator(denominator);
    }
}


void Rational::setNumerator(int numerator) {
    this->numerator = numerator;
}

int Rational::getNumerator() {
    return numerator;
}

void Rational::setDenominator(int denominator) {
    this->denominator = denominator;
}

int Rational::getDenominator() {
    return denominator;
}

void Rational::print() {
    cout << getNumerator() << "/" << getDenominator() << endl;
}

void Rational::reduceFraction() {
    int gcd = calculateGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

int Rational::calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}