#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;



double loan,irpy,ppp,interest,newbalance;
int date = 1;
int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> irpy;
	cout << "Enter amount you can pay per year: ";
	cin >> ppp;


	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

	do{
	interest = loan*irpy/100;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << date;
	if(date >= 2) loan = newbalance;
	date++;
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << loan+interest;
	if(loan+interest < ppp) ppp = loan+interest;
	cout << setw(13) << left << ppp;
	newbalance = loan+interest-ppp;
	cout << setw(13) << left << newbalance;
	loan = newbalance;
	cout << "\n";	
}while(newbalance > 0);

	return 0;
}
