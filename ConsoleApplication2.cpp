#include <string>
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Wie alt Bist Du? ";
    int alter;
    cin >> alter;
    if (alter < 18) {
        cout << "sie sind Minderjährig.";
        return 0;
    }

    cout << "Sie sind Volljährig.";
    std::string name;
    cout << " Wie heißen Sie? ";
    cin >> name;
    cout << "Hallo " << name;


    cout << " Willkommen in der Lotterie. ";



    int  erste_Zahl;
    cout << "Bitte geben Sie eine Zahl zwischen 1 und 9 ein: ";
    cin >> erste_Zahl;

    while (erste_Zahl > 9) {
        cout << "Die Zahl ist gößer als 9";
        cin >> erste_Zahl;
    }




    int  zweite_Zahl;
    cout << "Bitte geben Sie eine Zahl zwischen 1 und 9 ein: ";
    cin >> zweite_Zahl;

    while (zweite_Zahl > 9) {
        cout << "Die Zahl ist gößer als 9";
        cin >> zweite_Zahl;
    }

    while (zweite_Zahl == erste_Zahl) {
        cout << "Die Zahl wurde schon eingeben, versuchen Sie es erneut" << endl;
        cin >> zweite_Zahl;

    }

    int  dritte_Zahl;
    cout << "Bitte geben Sie eine Zahl zwischen 1 und 9 ein: ";
    cin >> dritte_Zahl;

    while (dritte_Zahl > 9) {
        cout << "Die Zahl ist gößer als 9";
        cin >> dritte_Zahl;
    }

    while (dritte_Zahl == erste_Zahl || dritte_Zahl == zweite_Zahl) {
        cout << "Die Zahl wurde schon eingeben, versuchen Sie es erneut" << endl;
        cin >> dritte_Zahl;

    }

    int  vierte_Zahl;
    cout << "Bitte geben Sie eine Zahl zwischen 1 und 9 ein: ";
    cin >> vierte_Zahl;

    while (vierte_Zahl > 9) {
        cout << "Die Zahl ist gößer als 9";
        cin >> vierte_Zahl;
    }

    while (vierte_Zahl == erste_Zahl || vierte_Zahl == zweite_Zahl || vierte_Zahl == dritte_Zahl) {
        cout << "Die Zahl wurde xschon eingeben, versuchen Sie es erneut" << endl;;
        cin >> vierte_Zahl;
    }


    int Lerste_Zahl = 4;
    int Lzweite_Zahl = 5;
    int Ldritte_Zahl = 6;
    int Lvierte_Zahl = 1;

    if (erste_Zahl == Lerste_Zahl || zweite_Zahl == Lerste_Zahl || dritte_Zahl == Ldritte_Zahl || vierte_Zahl == Lerste_Zahl) {

        if (erste_Zahl == Lzweite_Zahl || zweite_Zahl == Lzweite_Zahl || dritte_Zahl == Lzweite_Zahl || vierte_Zahl == Lzweite_Zahl) {

            if (erste_Zahl == Ldritte_Zahl || zweite_Zahl == Ldritte_Zahl || dritte_Zahl == Ldritte_Zahl || vierte_Zahl == Ldritte_Zahl) {

                if (erste_Zahl == Lvierte_Zahl || zweite_Zahl == Lvierte_Zahl || dritte_Zahl == Lvierte_Zahl || vierte_Zahl == Lvierte_Zahl) {
                    cout << "Sie haben gewonnen, die Zahlen sind" << Lerste_Zahl << Lzweite_Zahl << Ldritte_Zahl << Lvierte_Zahl << endl;
                }
                else {
                    cout << "Sie haben verloren, die Zahlen waren " << erste_Zahl << Lzweite_Zahl << Ldritte_Zahl << Lvierte_Zahl << endl;
                    return 0;
                }
            }
            else {
                cout << "Sie haben verloren, die Zahlen waren " << erste_Zahl << Lzweite_Zahl << Ldritte_Zahl << Lvierte_Zahl << endl;
                return 0;
            }
        }
        else {
            cout << "Sie haben verloren, die Zahlen waren " << erste_Zahl << Lzweite_Zahl << Ldritte_Zahl << Lvierte_Zahl << endl;
            return 0;
        }
    }
    else {
        cout << "Sie haben verloren, die Zahlen waren " << erste_Zahl << Lzweite_Zahl << Ldritte_Zahl << Lvierte_Zahl << endl;
        return 0;
    }
}
