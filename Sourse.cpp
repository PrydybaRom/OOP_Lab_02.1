
#include <iostream>
#include "FloatPower.h"
using namespace std;

int main()
{
	FloatPower one;
	FloatPower two(5, 2);
	cout <<"Pow 5^2 " << two.Power() << endl;

	FloatPower three;
	three = one + two;

	cout << "Operatir " << one.GetFirst()<< " + " << two.GetFirst() << " and  " 
		<< one.GetSecond() <<" + "<< two.GetSecond() << " = " << three << endl;

	FloatPower fp;
	cout << "Enter two number -> " << endl;
	cin >> fp;
	cout << "fp" << endl << fp << endl;
	cout << "++fp" << ++fp;
	
	cout << "operator * " << endl;
	one = two * two;
	cout << "5*5 and 2*2 " << one;

	


	return 0;
}

