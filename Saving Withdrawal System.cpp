#include <iostream> 
using namespace std; 

int main() {
	
	double balance = 1000;
	double withdrawal; 
	
	
	cout << "Starting balance:  "<< balance  << endl;
	 
	 while (balance > 0) { 
		 cout << "\nEnter amount to withdraw: "; 
		 cin >> withdrawal; 
		 
		 
		  if (withdrawal > balance) { 
			  cout << "Insufficient balance. Transaction stopped." << endl; 
			  break; 
		  
		  } 
		  
		  balance -= withdrawal;
		  cout << "Remaining balance: " << balance << endl; 
		  
	 } 
	  
	  if (balance == 0) 
	  	cout << "Your balance is now zero. Goodbye." << endl; 
	  
	  return 0;
	  
	 } 
	 
