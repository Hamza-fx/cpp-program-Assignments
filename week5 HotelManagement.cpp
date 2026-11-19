#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std;


int main() { 
	srand(time(0)); 
	
	// ---------- 1D Array: Weekly Revenue ----------
	double revenue[7], total = 0; 
	 
	 cout << "Enter revenue for each day:\n"; 
	 for (int i = 0; i < 7;  i++) { 

		 cout << "Day " << i + 1 << ": "; 
		 
		 cin >> revenue[i]; 
		 total += revenue[i]; 
	 } 
	 
	 cout << "\nTotal weekly revenue: " << total << endl; 
	 cout << "Average daily revenue: " << total / 7 << endl; 
	 
	 // ---------- 2D Array: One Branch ----------
	 int occupancy[5][10];
	 for (int f = 0; f < 5; f++) 
	 	for  (int r = 0; r < 10; r++)  
	 		
	 		occupancy[f][r] = rand() % 2;  // 1 = occupied, 0 = vacant 
	 	
	 	cout << "\nRoom occupancy (one branch):\n"; 
	 	for (int f = 0; f < 5; f++) { 
			 int occupied = 0, vacant = 0; 
			 for (int r = 0; r < 10; r++) { 
				 if (occupancy[f][r] == 1) occupied++; 
				 else  vacant++; 
				 
				 } 
			 cout << "Floor " << f + 1 << "  -> Occupied: " << occupied 
			       << ", Vacant: " << vacant << endl;
			       
			       
			       
			 } 
			 
			 // ------------- 3D Array: Multiple Branches ----------------
			 int chain[3][5][10]; 
			 int totalOccupied = 0; 
			 
			 for  (int b = 0; b < 3; b++) 
			 	for (int f = 0; b < 5; f++) 
			 		for (int r = 0; r < 10; r++)  { 
			 			chain[b][f][r] = rand() % 2; 
			 			
			 			if (chain[b][f][r] == 1)  totalOccupied++; 
		 } 
	 cout << "\nTotal occupied rooms across all branches:  " 
	 
	      << totalOccupied << " out of 150" << endl;  
	      
	      return 0;
}  