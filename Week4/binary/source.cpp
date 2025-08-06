#include <iostream>
#include <fstream>
#include <string>
#include "Cats.h"


using namespace std;

int main (){
    int count = 3;
    int i = 0;

    Cat cats;

    fstream writeFile;

    writeFile.open("critters.bin", ios::binary | ios::out);
    
    
    cout << "Enter 3 cat records. \n";
    while (i < count)
    {
        cout << "Enter information about a cat: \n";
        
        cout << "NAME: ";
        cin.getline(cats.name, sizeof(cats.name));

        cout << "AGE: ";
        cin >> cats.age;   
        writeFile.write(reinterpret_cast<char *>(&cats), sizeof(cats));
        cin.ignore(); 
        i++;
    }
    writeFile.close();
    return 0;
}