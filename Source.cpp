#include <iostream>
using namespace std;
void main() {
	int num1, num2, zarb=0, i=1;
	cout << "inter first number\n";
	cin >> num1;
	cout << "inter seccond number\n";
	cin >> num2;
	for (i;i<= num2;i++)
		zarb += num1;
	cout << "the multiplication of your number is:"<< zarb;
}
