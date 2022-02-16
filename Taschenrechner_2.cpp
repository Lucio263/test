#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

/*
-Menü mit void und so
-verlauf in Datei speichern
-verschiedene Berechnungen ermöglichen, vllt auch welche von Physik
*/

void print_menu()
{
    cout << setw(100) << setfill("~") << left << endl;
    cout << setw(100) << setfill(" ") << "Der C++ Taschenrechner. Was möchten sie tun?" << endl;
    cout << setw(100) << setfill(" ") << "- 1 - Einfache Mathematische Berechnungen" << endl;
    cout << setw(100) << setfill(" ") << "- 2 - Physikalische Berechnungen" << endl;
    cout << setw(100) << setfill(" ") << "- 3 - Kompliziertere Berechnungen" << endl;
    cout << setw(100) << setfill(" ") << "- 4 - Den Berechnungsverlauf in einer Datei speichern" << endl;
    cout << setw(100) << setfill(" ") << "- 5 - Den letzten gespeicherten Verlauf anzeigen" << endl;
}

int main()
{
    // Letsgoo
    print_menu;
}