#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, percent, pay, interest, total, balance;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> percent;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	int i = 1;
	while(loan > 0){
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	    interest = loan*(percent/100);
	cout << setw(13) << left << interest;
	    total = loan + interest;
	cout << setw(13) << left << total;
	if(pay > total){
	    pay = total;
	    balance = 0.00;
	}else{
	    balance = total - pay;
	}
	cout << setw(13) << left << pay;
	cout << setw(13) << left << balance;
	cout << "\n";
	loan = balance;
	i++;
	}
	return 0;
}