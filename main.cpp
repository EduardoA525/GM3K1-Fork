//Eduardo Avila
//COMSC - 210 - 5293
//Lab 23 - Goat Manager 3001

#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();

    //main menu testing
    int choice;

    do {
        choice = main_menu();

        switch (choice) {
            case 1:
                cout << "adding goat" << endl;
                break;
            
            case 2:
                cout << "deleting goat" << endl;
                break;
            
            case 3:
                cout << "listing goats" << endl;
                break;
            
            case 4:
                cout << "Exiting Program..." << endl;
                break;
        }

    } while (choice != 4);



    return 0;
}

int main_menu(){
    int choice;

    cout << "*** GOAT MANAGER 3001 ***" << endl;
    cout << "[1] Add a goat" << endl;
    cout << "[2] Delete a goat" << endl;
    cout << "[3] List goats" << endl;
    cout << "[4] Quit" << endl;
    cout << "Choice --> ";

    cin >> choice;

    while (choice < 1 || choice > 4){
        cout << "ERROR! Please choose 1-4: ";
        cin >> choice;
    }
    return choice;
}

void add_goat(list<Goat> &trip, string names[], string colors[]){

    return;
}

int select_goat(list<Goat> trip){

    return;
}

void delete_goat(list<Goat> &trip){

    return;
}

void display_trip(list<Goat> trip){

    return;
}
