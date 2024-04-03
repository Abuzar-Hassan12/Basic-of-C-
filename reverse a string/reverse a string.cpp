#include<iostream>
using namespace std;

void getstring(char arr[], int size) {
	cout << "please enter string " << endl;
	for (int i = 0; i < size; i++) {
		cin>>arr[i];
	}
	cout << endl;
}


void display(char arr[], int size) {
	cout << "The String you Entered: ";
	for (int i = 0; i < size; i++) {
		cout <<arr[i];
	}
	cout << endl;
}

void reverseString(char arr[], int size) {
	int s = 0;
	int e = size-1;
	while (s < e) {
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
	cout << endl << "after reverse " << endl;
	display(arr, size);
}
int main() {
	int size = 0;
	char arr[100];
	cout << "Enter the size of an array ";
	cin >> size;
	getstring(arr, size);
	display(arr, size);
	reverseString(arr, size);
	
	
}