#include<iostream>

using namespace std;

int main() {
	float a, b;
	char ope;
	cout << "Enter the 1st value : ";
	cin >> a;
	cout << "Enter the 2nd value : ";
	cin >> b;
	cout << "Enter the operator : (+,-,*,/)";
	cin >> ope;
	switch (ope) {
	case '+':
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case '-':
		cout << a << " - " << b << "=" << a-b << endl;
		break;
	case '*':
		cout << a <<"*"<< b <<"="<< a*b <<endl;
		break;
	case '/':
		cout << a << "/" << b << "=" << a/b << endl;
		break;
	default:
		cout << "incorrect opperator";
		break;
	}
	return 0;
}
