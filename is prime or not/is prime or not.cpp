#include<iostream>
using namespace std;

void isPrime(int num) {
	bool index = 1;//number   prime
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			index = 0;
			break;

		}
	}
	if (index == 1) {
		cout << "Number " << num << " is prime ";
		
	}
	else {
		cout << "Number " << num << " is not  prime ";
	}


}
int main() {
	int numb;
	cout << "Enter the number ";
	cin >> numb;
	//function call
    isPrime(numb);
}