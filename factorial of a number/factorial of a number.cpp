#include<iostream>
using namespace std;
int factorial(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}
	return fact;
}
int main() {
	int num=0;
	cout << "Enter the number to find factorial" << endl;
	cout << "number = ";
	cin >> num;

	cout << "Factorial of the given number is " << factorial(num) << endl;

}