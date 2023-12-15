#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
  double balance, rate, amount;
	cout << "Enter initial loan: ";
  cin >> balance;
	cout << "Enter interest rate per year (%): ";
  cin >> rate;
	cout << "Enter amount you can pay per year: ";
  cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
  for (int year = 1; balance > 0; year++) {
    cout << setw(13) << left << year;
    cout << setw(13) << left << balance;
    double interest = balance * rate / 100;
    cout << setw(13) << left << interest;
    double total = balance + interest;
    cout << setw(13) << left << total;
    double payment = (amount > total) ? total : amount;
    cout << setw(13) << left << payment;
    balance = total - payment;
    cout << setw(13) << left << balance;
    cout << "\n";
  }
	return 0;
}
