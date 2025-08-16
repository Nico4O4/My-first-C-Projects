// first_cin_C.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int alter;
	string sprache;
	// << und >> sind schiebebewegungen sie bwegen etwas ob strings oder integer in etwas rein man muss sich bildlich vorstellen
	
	cout << "Dein Name: ";
	cin >> name; // user gibt namen ein (text)
	
	cout << "Dein Alter ";
	cin >> alter; // user gibt alter ein (zahl)

	cout << "Was ist deine Lieblings Programmiersprache? ";
	cin.ignore();// WICHTIG: damit C den abstand von wort zu wort ignoriert und man so schreiben kann wie hier im kommi
	getline(cin, sprache);
	// getline für ganze Zeilen -> das man mit abstand schreiben kann etc.


	cout << "Hallo " << name << "! du bist " << alter << " Jahre alt\n";

	cout << "und deine Lieblings Programmiersprache ist: " << sprache;

	return 0;
}