#include<iostream>
using namespace std;
int square(int num) {
	num *= num;
	return num;
}
int main() {
	for (int i = 1; i <= 10; i++) {
		int squar = square(i);
		cout << "square of [" << i << "] is "<<squar << endl;
	}
}