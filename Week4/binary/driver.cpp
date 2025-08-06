#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Cats.h"


using namespace std;

int main(){

    // string filename = "critters.bin";
    fstream catFile;
    Cat cats;
    // fstream writeFile;

    catFile.open("critters.bin", ios::binary | ios::app);

    cout << "Enter cat record: \n";
    cout << "NAME: ";
    cin.getline(cats.name, sizeof(cats.name));

    cout << "AGE: ";
    cin >> cats.age;
    catFile.write(reinterpret_cast<char *>(&cats), sizeof(cats));
    catFile.close();

    cout << endl;
    cout << "Now reading the file. \n\n";
    // Open and read the binary file
    catFile.open("critters.bin", ios::in | ios::binary);

    if (!catFile)
    {
        cout << "File does not open.";
    }
    catFile.read(reinterpret_cast<char *>(&cats), sizeof(cats));
    
    cout << "Here is a list of all cats:\n";
    while (!catFile.eof())
    {
        cout << setw(10) << left << cats.name << cats.age << endl;
        catFile.read(reinterpret_cast<char *>(&cats), sizeof(cats));
    }
    
    // cout << "That's all the data in the file. \n";
    catFile.close();
    

}