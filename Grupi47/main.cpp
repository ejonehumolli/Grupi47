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

}