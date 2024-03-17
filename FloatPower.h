#pragma once
#include <sstream> 
#include <string>
using namespace std;

class FloatPower
{
private:
	double first;
	double second;
public:
	// COSTRUCTOR
	FloatPower();
	FloatPower(double f, double s);
	FloatPower(const FloatPower&);
	~FloatPower();

	// SET AND GET
	void SetFirst(double value);
	void SetSecond(double value);
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }

	//POW
	double Power() const;

	//OPERATORS
	FloatPower& operator = (const FloatPower&);
	operator string() const;

	friend FloatPower operator + (const FloatPower&, const FloatPower&);
	friend FloatPower operator - (const FloatPower&, const FloatPower&);
	friend FloatPower operator * (const FloatPower&, const FloatPower&);
	friend FloatPower operator / (const FloatPower&, const FloatPower&);
	friend FloatPower operator ^ (const FloatPower&, const unsigned);

	friend ostream& operator << (ostream&, const FloatPower&);
	friend istream& operator >> (istream&, FloatPower&);

	FloatPower& operator ++();
	FloatPower& operator --();
	FloatPower operator ++(int);
	FloatPower operator --(int); 
	

};