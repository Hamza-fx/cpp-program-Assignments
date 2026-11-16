#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

const double RATE_PER_UNIT = 2.5; // change as needed

void getCustomerDetails(string &name, double &units) { 
	cout << "Enter customer name: ";
	
	getline(cin, name); 
	
	cout << "Enter units consumed: ";
	cin >> units; 
	
} 

double calculateBill(double units) {
	return units * RATE_PER_UNIT;
	
} 

double applyDiscount(double bill, double units) {
	if (units > 100) 
		
		return bill * 0.10; // returns the discount amount
	
	return 0.0;
	
	
} 

void displayBill(string name, double units, double bill,
   double discount, double finalBill) {
	   
	   cout << fixed << setprecision(2); 
	   
	   cout << "\n===== WATER BILL =====\n";
	   
	   cout << "Customer Name : " << name << endl;
	   cout << "Units Consumed : " << units << endl;
	   cout << "Total Bill  : " << bill << endl;
	   cout << "Discount  : " << discount << endl; 
	   cout << "Amount Payable : " << finalBill << endl;
	   
	   cout << "===============================\n";
	   
   } 
   
   int main() { 
   	
   	string name;
   	double units; 
   	
   	getCustomerDetails(name, units);
   	double bill = calculateBill(units);
   	double discount = applyDiscount(bill, units);
   	double finalBill = bill - discount;
   	displayBill(name, units, bill, discount, finalBill); 
   	
   	return 0;
   	
	   
	   
   } 
   