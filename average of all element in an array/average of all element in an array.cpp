#include<iostream>
using namespace std;
int averageOfArrayEle(int arr[], int & size) {
	int sum = 0;
	double average = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	
	average = sum / size;

	return average;
}

int main() {
	int size = 0;
	int arr[100];
	cout << "Enter size of an array ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];

	}
	cout << endl << "        printing an array " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";

	}
	cout << endl << "Average of all element of an array is : " << averageOfArrayEle(arr, size);
}