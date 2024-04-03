#include<iostream>
using namespace std;
int addition(int num1, int num2) {
	int sum = 0;
	sum = num1 + num2;
	return sum;
}

int main() {
	int num1 = 0, num2 = 0;
	cout << "Enter two number to add " << endl;
	cout << "num1 = ";
	cin >> num1;
	cout << "num2 = ";
	cin >> num2;
	cout << endl << "Sum of Two number is : " << addition(num1, num2);
}