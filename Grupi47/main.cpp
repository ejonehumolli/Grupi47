#include <iostream>
#include <string>
using namespace std;



						//New code on feature-ejona branch
struct Person {

	string name;
	char chosenDestination[5]; //max 5 destinations
	int days[5];  //max 5 days
	char transport[5]; //F-Flight, T-Train, B-Bus
	char priority[5]; //H-high, m-medium, l-low
	int numChosen;

};

//Function-Show the list of destinations
void showDestinations() {

	cout << "n\Available destinations:\n";
	cout << "N-New York\n";
	cout << "L-London\n";
	cout << "P-Paris\n";
	cout << "R-Rome\n";
	cout << "T-Tokyo\n";
    

	Commit 1

// Show travel modes
void showTransport() {
cout << "Transport modes:\n";
cout << "F - Flight\n";
cout << "T - Train\n";
cout << "B - Bus\n";
}

// Show priority options
void showPriority() {
cout << "Priority:\n";
cout << "H - High\n";
cout << "M - Medium\n";
cout << "L - Low\n";
}

Commit 2

string destinationName(char c) {
switch(c) {
case 'N': return "New York";
case 'L': return "London";
case 'P': return "Paris";
case 'R': return "Rome";
case 'T': return "Tokyo";
default: return "Unknown";
}
}
Commit 1

string transportName(char c) {
switch(c) {
case 'F': return "Flight";
case 'T': return "Train";
case 'B': return "Bus";
default: return "Unknown";
}
}

string priorityName(char c) {
switch(c) {
case 'H': return "High";
case 'M': return "Medium";
case 'L': return "Low";
default: return "Unknown";
}
}

Commit 2

void displayItineraries(Person people[], int numPeople) {
cout << "\n--- Travel Itineraries ---\n";
for (int i = 0; i < numPeople; i++) {
cout << people[i].name << ":\n";
for (int j = 0; j < people[i].numChosen; j++) {
cout << " " << destinationName(people[i].chosenDestinations[j])
<< " - " << people[i].days[j] << " days"
<< ", " << transportName(people[i].transport[j])
<< ", Priority: " << priorityName(people[i].priority[j]) << endl;
}
}
}

}