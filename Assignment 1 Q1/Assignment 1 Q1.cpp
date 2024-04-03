#include<iostream>
using namespace std;
class BankAccount {
private:
	int currentbalance=0;
	int initDepo = 0;
public:
	int createAccount();
	int displayBalance();

	void depositBalance();
	void widthdrawBalance();
};
int BankAccount::createAccount() {

	cout << "Please Make initial Deposit to create your account in PKR : ";
	do {
		cin >> initDepo;

		cout << endl;

		if (initDepo >= 500) {
			cout << "Congrats!! Account successfully created " << endl;
		}
		else {

			cout << "Initial Deposit Must be greater then 500 PKR" << endl;

			cout << endl << endl << "Renter your initial deposit ammount ";
		}
	} while (initDepo < 500);
	

	cout << "Your Current Balance is ";
	currentbalance = initDepo;
	
	return currentbalance;
}
int BankAccount::displayBalance() {
	cout << "Balance is ";
	return currentbalance;
}
void BankAccount::depositBalance() {
	int ammount = 0;
	cout << "Enter the Ammount you want to deposit in PKR : ";
	cin >> ammount;
	cout << endl;
	currentbalance += ammount;
	cout << displayBalance();
}
void BankAccount::widthdrawBalance() {
	int ammount = 0;
	cout << "Enter the Ammount you want to Withdraw in PKR : ";
	cin >> ammount;
	cout << endl;
	if (currentbalance < 500) {
		cout << "Insufficent balance!! Balance must be greater then 500 PKR to widthdraw" << endl;
		cout << displayBalance();
	}
	else {
		currentbalance -= ammount;
		cout << displayBalance();
	}
}
int main() {
	char opt = ' ';
	BankAccount obj;
	do{
	cout << "Banking System " << endl;
	cout << "1.Create Account" << endl;
	cout << "2.Display Balance" << endl;
	cout << "3.Deposit Amount" << endl;
	cout << "4.WidthDraw Balance" << endl;
	cout << "0.Exit" << endl;
	cout << endl;
	cout << "Enter option ";
	cin >> opt;
	switch (opt) {
	case '1':
		cout << obj.createAccount() << endl;

		break;
	case '2':
		cout << obj.displayBalance() << endl;

		break;
	case '3':
		obj.depositBalance();
		cout << endl;

		break;
	case '4':
		obj.widthdrawBalance();
		cout << endl;

		break;
	}
}
	while (opt != 0);
}