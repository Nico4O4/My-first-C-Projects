// guess_the_number.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cstdlib> // für rand() und srand() -> random Zahlengenerierung
#include <ctime>   // für time()

using namespace std;

int main() {
   srand(static_cast<unsigned int>(time(0))); 

   int dieZahl = rand() % 6 + 25; // "die zahl" ist eine variable als integer / rand generiert zufallszahl / das % damit die zahl in einem bestimmten bereich landet / von 25 - 30 / rand() % 6 erzeugt 1,2,3,4,5,6 + 25 verschiebt den Bereich auf 25,26,27,28,29,30 (die logik)

   cout << "Die generierte Zahl: " << dieZahl << endl; // gibt es aus

   return 0;
}

