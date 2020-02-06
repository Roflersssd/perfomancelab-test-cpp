
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string itoBase(unsigned int nb, string base);
string number_case(int num);
int main()
{
	setlocale(LC_ALL, "rus");
	string system_base;
	int number_base;
	cin >> number_base;
	cin >> system_base;
	if (system_base.size() > 16 || system_base.size() == 0) {
		cout << "usage\n";
		return 1;
	}
	if (number_base < 0) {
		cout << "usage\n";
		return 2;
	}
	cout << itoBase(number_base, system_base) << endl;
	return 0;
}
string itoBase(unsigned int nb, string base) {
	int number_system=0;
	int i,mod;
	string result;
	number_system = base.size();
	while (nb !=0) {
		mod = nb % number_system;
		nb = nb / number_system;
		result += number_case(mod);
	}
	if(*result.begin()=='0')
		result.erase(result.begin());
	return result;
}

string number_case(int num) {
	switch (num) {
	case 0:
		return "0";
	case 1:
		return "1";
	case 2:
		return "2";
	case 3:
		return "3";
	case 4:
		return "4";
	case 5:
		return "5";
	case 6:
		return "6";
	case 7:
		return "7";
	case 8:
		return "8";
	case 9:
		return "9";
	case 10:
		return "a";
	case 11:
		return "b";
	case 12:
		return "c";
	case 13:
		return "d";
	case 14:
		return "e";
	case 15:
		return "f";
	}
}



