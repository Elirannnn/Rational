#pragma once
#include <cstring>
#include <iostream>
class Rational {
private:
	int numerator, denominator;
public:
	Rational();
	Rational(int numerator, int denomrator);
	void setNumerator(int numeratort);
	int getNumerator();
	void setDenominator(int denominator);
	int getDenominator();
	void print();
	void reduceFraction();
	int calculateGCD(int a, int b);
};