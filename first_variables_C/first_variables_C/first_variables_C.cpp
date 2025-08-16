// first_variables_C.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int jahr = 2025; // ganze zahl = integer
    string name = "Nico"; // text = string
    double kommazahl = 7.1993; // komma zahlen = double (double precision) // ausserdem ist double genauer
    bool magCoding = true; // wahr falsch = bool (boolean) // 1 war 0 falsch

    cout << "Name: " << name << "\n";
    cout << "Jahr: " << jahr << "\n";
    cout << "Komma Zahl: " << kommazahl << "\n";
    cout << "Mag Coding? " << magCoding << "\n";

    return 0;

}