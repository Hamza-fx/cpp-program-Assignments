#include <iostream> 
#include <string> 

using namespace std; 

class RoomBooking {
	
	private: 
		string guestName; 
		int roomNumber; 
		int days; 
		
		
		public: 
			RoomBooking(string name, int room, int numDays) { 
				guestName = name; 
				roomNumber = room; 
				days = numDays; 
				 
				 cout << "Room booking confirmed" << endl; 
				 
			} 
			
			void displayBooking() { 
				
				cout << "Guest name: " << guestName << endl; 
				cout << "Room number: " << roomNumber << endl; 
				cout << "Days booked: " << days << endl;
			} 
			
			~RoomBooking() { 
				
				 cout << "Booking ended, room released" << endl;
			} 
};

int main() { 
	RoomBooking booking("Jane Smith", 204, 3);
	booking.displayBooking(); 
	
	return 0; 
	
} 
