#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int reminder = 0,reversedNo=0;
    cout << "Enter the number ";
    cin >> num;
    int num1 = num;
    cout << endl;
    while(num != 0) {
        reminder = num % 10;
        reversedNo = reversedNo * 10 + reminder;
        num /= 10;
        //cout << 'n' << num;
    }
    cout<<"reversed num is " << reversedNo << endl;
    if (num1 == reversedNo) {
        cout << "num is palindrome " << num1;
    }
    else
        cout << "Not palindrome " << endl;
}

