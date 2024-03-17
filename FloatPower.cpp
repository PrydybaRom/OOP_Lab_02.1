
#include "FloatPower.h"
#include <sstream> 
#include <string>
#include <iostream>
using namespace std;

// COSTRUCTOR =======================================================

FloatPower::FloatPower()
{
	first = 1;
	second = 1;
}
FloatPower::FloatPower(double f = 1, double s = 1)
{
	first = f;
	second = s;
}
FloatPower::FloatPower(const FloatPower& fp)
{
	first = fp.first;
	second = fp.second;
}
FloatPower::~FloatPower()
{ }


// SET AND GET ======================================================

void FloatPower::SetFirst(double f) { first = f; }
void FloatPower::SetSecond(double s) { second = s; }


// POW
double FloatPower::Power() const
{
	return pow(first, second);
}

//OPERATORS =========================================================

FloatPower& FloatPower::operator = (const FloatPower& fp)
{
	first = fp.first;
	second = fp.second;
	return *this;
}
FloatPower::operator string () const
{
	stringstream typestring;
	typestring << " First = " << first << " ";
	typestring << " Second = " << second << endl;
	return typestring.str();
}
FloatPower operator + (const FloatPower& x, const FloatPower& y)
{
	return FloatPower(x.first + y.first, x.second + y.second);
}
FloatPower operator - (const FloatPower& x, const FloatPower& y)
{
	return FloatPower(x.first - y.first, x.second - y.second);
}
FloatPower operator * (const FloatPower& x, const FloatPower& y)
{
	return FloatPower(x.first * y.first, x.second * y.second);
}
FloatPower operator / (const FloatPower& x, const FloatPower& y)
{
	return FloatPower(x.first / y.first, x.second / y.second);
}
FloatPower operator ^ (const FloatPower& x, const unsigned n)
{
	FloatPower y(1, 0);
	for (unsigned i = 1; i <= n; i++)
		y = y * x;
	return y;
}

ostream & operator << (ostream & out, const FloatPower& fp)
{
	out << string(fp);
	return out;
}
istream& operator >> (istream& in, FloatPower& fp)
{
	cout << " First = "; in >> fp.first;
	cout << " Second = "; in >> fp.second;
	cout << endl;
	return in;
}
FloatPower& FloatPower::operator ++()
{
	first++;
	return *this;
}
FloatPower& FloatPower::operator --()
{
	first--;
	return *this;
}
FloatPower FloatPower::operator ++(int)
{
	FloatPower t(*this);
	second++;
	return t;
}
FloatPower FloatPower::operator --(int)
{
	FloatPower t(*this);
	second--;
	return t;
}





