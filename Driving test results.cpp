#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
	// i. Declare variables
	string studentName;
	double theoryMarks, practicalMarks, averageScore;
	
	// Prompt the user for details
	cout << "Enter student name: ";
	getline(cin, studentName);
	cout << "Enter theory test marks: ";
	cin >> theoryMarks;
	cout << "Enter practical test marks: ";
	cin >> practicalMarks;
	
	
	// ii.Calculate average score
	
	averageScore = (theoryMarks + practicalMarks) / 2;
	
	
	// iii. Display results  (pass if average >= 50)
	
	cout << fixed << setprecision(2);
	cout << "\n===== DRIVING TEST RESULT =====\n";
	cout << "Student Name  : " << studentName << endl;
	cout << "Theory Marks  : " << theoryMarks << endl;
	cout << "Practical Marks : " << practicalMarks << endl;
	cout << "Average Score  : " << averageScore << endl;
	cout << "Result         : " << (averageScore >= 50 ? "PASSED" : "FAILED") << endl;
	
	return 0;
	
	
}
