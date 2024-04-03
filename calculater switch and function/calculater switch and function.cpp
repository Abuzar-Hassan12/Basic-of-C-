#include<iostream>
using namespace std;
int sum(float num1, float num2) {
	int sum = 0;
	sum = num1 + num2;
	return sum;
}
int subtract(float num1, float num2) {
	int subt = 0;
	subt = num1 - num2;
	return subt;
}int multiply(float num1, float num2) {
	int mul = 0;
	mul = num1 * num2;
	return mul;
}float divide(float num1, float num2) {
	float div = 0;
	div = num1 / num2;
	return div;
}
int main() {
	float num1 = 0, num2 = 0;
	char operation = ' ';
	cout << "Enter two numbers " << endl;
	cout << "num1 = ";
	cin >> num1;
	cout << "num2 = ";
	cin >> num2;
	cout << endl;
	cout << "Enter the mathematicall Operation from(+,-,*,/)" << endl;
	cout << "Mathematical Operaton = ";
	cin >> operation;
	cout << endl;
	switch (operation)
	{
	case '+':
		cout << "Sum of Two number is : " << sum(num1, num2) << endl;
		break;

	case '-':
		cout << "Subtraction of Two number is : " << subtract(num1, num2) << endl;
		break;
	case '*':
		cout << "Multiplication of Two number is : " << multiply(num1, num2) << endl;
		break;
	case '/':
		cout << "Division of Two number is : " << divide(num1, num2) << endl;
		break;
	default:
		cout << "you have invalid operator" << endl;
		break;
	}
	
}