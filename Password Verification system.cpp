#include <iostream> 
#include <string>

using namespace std; 

int main() { 
	const string correctUsername = "admin";
	const string correctPassword = "1234";
	string username, password; 
	
	
	do { 
		cout << "Enter username: ";
		cin >> username; 
		
		
		cout << "Enter password: "; 
		cin >> password; 
		
		
		if (username == correctUsername && password == correctPassword) 
			cout << "Access Granted" << endl; 
		
		cout << "Incorrect credentials, try again" << endl; 
		
	}  while (username != correctUsername || password != correctPassword); 
	 
	 return 0; 
	 
	 
	 } 