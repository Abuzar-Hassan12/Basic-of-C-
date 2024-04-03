using namespace std;

int main() {
    int findfact(int);
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    cout << "Factorial: " << findfact(num);
    return 0;
}

int findfact(int n) {
    int fact = 1;
    if (n > 0) {
        for (int i = n; i >= 1; i--)
            fact = fact * i;
    }
    else {
        cout<< "Invalid input: Enter a positive number";
    }
    return fact;
}