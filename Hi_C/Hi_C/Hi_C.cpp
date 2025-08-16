// Hi_C.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream> //Bilbiothek für ein und ausgaben
#include <string> // für std

using namespace std; //für kürzere schreibweise für cout/cin

int main() //hauptfunktion alles was am anfang da ist / braucht eine start funktion python fürt immer von zeile 1 aus
{	//cout = character output und std ist standard namespace der "ordner" imdem cout liegt std::cout = druckt Text auf den Bildschirm // << = „schiebe diesen Text in cout“(statt runde Klammern wie bei Python)
	cout << "Hello World!\n"; 
	cout << "Hello " << "C " << 2025 << endl; //endl -> end line neue zeile ausgeben + ausgabe erzwingen leer puffer dazu
	cout << "I " << "like " << "coding </>";
	return 0;
}
