#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

int main() { 
	string name;
	double basicSalary, bonus, totalSalary;
	
	for (int i = 1; i <=5; i++) {
		cout << "\nEmployee " << i << endl; 
		cout << "Enter name: "; 
		cin >> ws; 
		
		getline(cin, name); 
		cout << "Enter basic salary: "; 
		cin >> basicSalary; 
		
		
		bonus = 0.05 * basicSalary; 
		totalSalary = basicSalary + bonus; 
		
		
		
		cout << fixed << setprecision(2); 
		cout << "\n--- Report ---\n"; 
		cout << "Name       : " << name  << endl; 
		cout << "Basic Salary : " << basicSalary << endl; 
		cout << "Bonus    : " << bonus << endl;
		cout << "Total Salary : " << totalSalary << endl;  
		
		
		
	} 
	 return 0; 
} 
