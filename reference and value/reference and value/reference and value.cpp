

#include <iostream>
using namespace std;

int passByValue(int num) {
	num = num + 10;
	return num;
}
int passByReference(int& num) {
	num = num + 10;
	return num;
}


int main()
{
	int num = 0;
	cout << "Enter the num ";
	cin >> num;
	cout << "pass by value " << passByValue(num) << endl;
	cout << "num is " << num << endl;
	cout << "Pass By Reference " << passByReference(num) << endl;
	cout << "num is " << num;
}
