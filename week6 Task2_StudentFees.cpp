#include  <iostream> 
#include  <string> 

using namespace std;

class Student { 
	private: 
		string name; 
		int admissionNo; 
		
		double feeBalance; 
		
public: 
	void inputStudent()  {
		cout << "Enter student name: "; 
		getline(cin, name); 
		
		cout << "Enter admission number: "; 
		cin >> admissionNo; 
		
		cout << "Enter fee balance: "; 
		cin >> feeBalance; 
		
		
		
	} 
	
	void makePayment() { 
		double amount; 
		cout << "\nEnter payment amount: "; 
		cin >> amount; 
		
		if (amount <= 0) { 
			cout << "Invalid amount.\n"; 
			
		} else if (amount > feeBalance) { 
			cout  << "Payment exceeds balance. Payment rejected.\n";
		} else { 
			feeBalance -= amount; 
			cout << "Payment received.\n"; 
			
			
		} 
	}  // Closes makePayment() 
		
		void displayStatus() {
			cout << "\nName: " << name 
			      << "\nAdmission No: " << admissionNo 
			      << "\nRemaining balance: " << feeBalance << endl; 
			      
		} 
		
	}; 
	
	int maina() { 
		Student s;
		s.inputStudent(); 
		s.makePayment(); 
		s.displayStatus(); 

			return 0; 
	} 
		
		
	
	
