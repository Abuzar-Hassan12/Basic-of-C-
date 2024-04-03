#include<iostream>
using namespace std;

void getarray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void diparray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout<<"[ " << arr[i]<<" ] , ";
	}
}
int main() {

	int arr[100];
	cout << "Enter element into array " << endl;
	getarray(arr, 5);
	cout << "Displaying element into array " << endl;

	diparray(arr, 5);




}