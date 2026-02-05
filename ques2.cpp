#include <iostream>
using namespace std;

class BankAccount {
	int AccountNumber = 123456;
	double Balance = 2000;
	
	public:
		string name = "Usman";
		
		void deposit(double amount) {
			if (amount > 0) {
				Balance += amount;
			}
			else {
				cout << "Error" << endl;
			}
		}
		
		void withdraw(double amount) {
			if (amount > 0) {
				Balance -= amount;
			}
			else {
				cout << "Error" << endl;
			}
		}
		
		void showBalance() {
			cout << "Your balance: " << Balance << endl;
		}
		
		void displayDetails() {
			cout << "Account Name: " << name << endl;
			cout << "Account Number: " << AccountNumber << endl;
			cout << "Balance: " << Balance << endl;
		}
};

int main() {
	int choice;
	double amount;
	BankAccount acc;
	
	do {
		cout << "1. View Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
		cout << "Enter a digit: ";
		cin >> choice;
		
		switch (choice){
			case 1:
				acc.showBalance();
				break;
				
			case 2:
				cout << "Enter the amount: ";
				cin >> amount;
				acc.deposit(amount);
				acc.showBalance();
				break;
				
			case 3:
				cout << "Enter the amount: ";
				cin >> amount;
				acc.withdraw(amount);
				acc.showBalance();
				break;
		}
		
	} while (choice != 4);
	
	acc.displayDetails();
	
	return 0;
}
