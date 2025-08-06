#include <iostream>
#include <fstream>

using namespace std;

int main (){

    ifstream inputFile;       // Create input file object

    char readNum;           
    
    inputFile.open("data.txt", ios::in);

    if (!inputFile){
        cout << "Error opening file!\n";
        exit(EXIT_SUCCESS);
    }
    else{
        cout << "File opened successfully. \n";
        cout << "Here are the numbers in the file. \n";
        while(inputFile >> readNum)
        {
            cout << readNum << endl;
        }
    }


    
    return 0;
}