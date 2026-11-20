#include <iostream> 
#include <string> 

using namespace std; 

class BankAccount { 
	
	private: 
		string holderName; 
		int accountNumber; 
		double balance; 
		
		
		public: 
			
			BankAccount(string name, int number, double bal)  { 
				holderName = name; 
				accountNumber = number; 
				balance = bal; 
				
				cout << "Account successfully created" << endl; 
			} 
			
			void displayAccount() { 
				cout << "Account holder: " << holderName << endl; 
				 cout << "Account number: " << accountNumber << endl; 
				 cout << "Balance: " << balance  << endl; 
				 
				 
			} 
			
			~BankAccount() { 
				cout << "Account closed successfully" << endl; 
				
				
			}
}; 

int main() { 
	BankAccount acc("John Doe",  100234, 5000.50); 
	
	acc.displayAccount(); 
	
	return 0; 
	
} 