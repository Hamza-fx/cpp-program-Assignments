#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	double marks;
	char grade;
	
	
	cout << "Enter student name: ";
	getline(cin, name);
	cout << "Enter exam marks: ";
	cin >> marks;
	
	
	
	if (marks >= 70 && marks <= 100) grade = 'A';
	else if (marks >= 60 && marks < 70) grade = 'B';
	else if (marks >= 50 && marks < 60) grade = 'C';
	else if (marks >= 40 && marks < 50) grade = 'D';
	else if (marks >= 0 && marks < 40) grade = 'E';
	
	else { 
		
		cout << "Invalid marks. Enter a value between 0 and 100." << endl;
		
		return 1;
		
		cout << "\nName: " << name << endl;
		cout << "Marks: " << marks << endl;
		cout << "Grade: " << grade << endl;
		
		return 0;
	}
	
	
	
}