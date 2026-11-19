#include <iostream> 
#include <string> 

using namespace std; 

class Book { 
	private: 
		string title, author; 
		int copies; 
		
		public: 
			void inputDetails() { 
				cout << "Enter book title: ";
				getline(cin, title); 
				
				cout << "Enter author: "; 
				getline(cin, author);
				
				cout << "Enter number of copies available: ";
				cin >> copies; 
				
				
			} 
			
			void borrowBook() { 
				if (copies > 0) { 
					copies--; 
					
					cout << "\nBook borrowed successfully.\n"; 
				} else { 
					cout << "\nNo copies available. \n"; 
					
					
				} 
				
			} 
			
			void displayDetails() { 
				cout << "\nTitle: " << title 
				      << "\nAuthor: " << author 
				      << "\nCopies available: " << copies  << endl; 
				      
			} 
			
}; 

int  main() { 
	Book b; 
	b.inputDetails(); 
	cout << "\nBefore borrowing:";
	b.displayDetails(); 
	b.borrowBook(); 
	cout << "\nAfter borrowing:"; 
	b.displayDetails(); 
	
	return 0; 
} 
