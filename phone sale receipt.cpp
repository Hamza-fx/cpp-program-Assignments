#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
	// i.  Declare variables
	string customerName, phoneModel;
	int quantity;
	double pricePerPhone, totalSales;
	
	
	// Prompt the user for details
	cout << "Enter customer name: ";
	getline(cin, customerName); 
	cout << "Enter phone model purchased: ";
	getline(cin, phoneModel);
	cout << "Enter quantity bought: ";
	cin >> quantity;
	cout << "Enter price per phone: ";
	cin >> pricePerPhone;
	
	
	// ii.Calculate the total sales amount
	totalSales = quantity * pricePerPhone;
	
	
	
	// iii.Display formatted receipt
	
	cout << fixed << setprecision(2);
	cout << "\n===== SALES RECEIPT =====\n";
	cout << left << setw(20) << "Customer Name:" << customerName << endl;
	cout << left << setw(20) << "Phone Model:" << phoneModel << endl;
	cout << left << setw(20) << "Quantity:" << quantity << endl;
	cout << left << setw(20) << "Price per Phone:" << pricePerPhone << endl;
	cout << left << setw(20) << "Total Sales:" << totalSales << endl;
	cout << "===================\n";
	
	
	
	return 0;
	
	
}
