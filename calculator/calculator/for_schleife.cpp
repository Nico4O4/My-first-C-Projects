#include <iostream> // lib. für ein / ausgabe
using namespace std; //damit ich cin und cout ohne std:: schreiben muss


int main()
{
	//for schleife hat 3 phasen -> Start, bedingung und der schritt
	//das ist für + zählen bis zu einer zahl sobald es FALSE wird -> bricht ab

	//start: int zahl = 1 -> startet bei 1 variable "zahl" speichert 1
	
	//bedingung: 1 <= 10 -> läuft solange zahl kleiner oder gleich (<=) 10 ist -> 11 = false weil nicht gleich oder weniger ALS 10 also stop
	
	//schritt i++ -> nach jedem druchlauf wird i um 1 erhöht -> also damit es hoch zählt 1, 2, 3, 4 usw.
	
	cout << "--HIER PLUS--\n";


	for (int zahl = 1; //start: hier zahl festlegen + variable  + variablen art (integer)
		zahl <= 5;		// bedingung: <= kleiner(<) oder gleich(=) als zahl = True sonst FALSE
		zahl++) {		//schritt: hier +
		
		
		cout << zahl << endl; //gibt die aktuelle zahl (zahl) aus
	
	}

	cout << "--AB HIER MINUS--\n";

	for (int zahl_minus = 5; //start: zahl festlegen + variable + variablen art
		zahl_minus >= 1; // bedingung: >= grösser(>) oder gleich(=) als zahl = True sonst FaLSE
		zahl_minus--) { //schritt: hier -

		cout << zahl_minus << endl;
	}

	return 0; // programm endet hier
}

