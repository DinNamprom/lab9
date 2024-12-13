#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,rate,p_amount,interest,total;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> p_amount;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	int i=1;
	do {
	interest = 	loan * (rate/100);
	total = loan + interest;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i;
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	if (p_amount > total) {
		p_amount = total;
	}
	cout << setw(13) << left << p_amount;
	loan = total - p_amount;
	cout << setw(13) << left << loan;
	cout << "\n";
	i++;
	}while( loan != 0);
	
	return 0;
}
