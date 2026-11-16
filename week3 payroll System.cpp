#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double OVERTIME_RATE = 10.0; // rate per hour 

void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
	cout << "Enter employee name: ";
	getline(cin, name);
	
	cout << "Enter basic salary: ";
	cin >> basicSalary;
	
	cout << "Enter overtime hours: ";
	cin >> overtimeHours;
} 

double calculateOvertimePay(double overtimeHours) { 
	return overtimeHours * OVERTIME_RATE;
	
	
}

double  calculateNetSalary(double basicSalary, double overtimePay) {
	return basicSalary + overtimePay; 
	
} 

void displayPayslip(string name, double basicSalary, double overtimeHours, double overtimePay, double netSalary) {
	     
	     cout << fixed << setprecision(2); 
	     
	     cout << "\n===== PAYSLIP =====\n"; 
	     
	     cout << "Employee Name : " << name << endl; 
	     
	     cout << "Basic Salary : " << basicSalary << endl;
	     
	     cout << "Overtime : " << overtimeHours << endl;
	     
	     cout << "OvertimePay : " << overtimePay << endl;
	     
	     cout << "-------------------------\n";
	     
	     cout << "Net Salary    : " << netSalary << endl;
	     
	     cout << "=========================\n";
	     
	     
} 

int main() {
	string name;
	double basicSalary, overtimeHours; 
	
	
	getEmployeeDetails(name,  basicSalary, overtimeHours); 
	
	double overtimePay = calculateOvertimePay(overtimeHours);
	
	double netSalary = calculateNetSalary(basicSalary, overtimePay);
	displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary); 
	
	
	return 0; 
	
	
} 


