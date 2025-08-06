#include <iostream>
#include <fstream>

using namespace std;

void copyFiles(ofstream &, ifstream &, string, string);
void appendToFile(ofstream &, string);

int main (){

    ifstream inputFile;       // Create input file object
    ofstream outputFile;      // Create output file object
    
    string readFileName = "data.txt";
    string writeFileName = "results.txt";
    
    
    // inputFile.open(readFileName, ios::in);

    // if (!inputFile){
    //     cout << "Error opening file!\n";
    //     exit(EXIT_SUCCESS);
    // }
    // else{
    //     cout << "File opened successfully. \n";
    //     cout << "Here are the numbers in the file. \n";
        
    //     while (!inputFile.eof())
    //     {
    //         inputFile >> text;
    //     }
    //     inputFile.close();
    // }
    



    // Call the write to file function
    copyFiles(outputFile, inputFile, readFileName, writeFileName);

    // Append to file
    appendToFile(outputFile, writeFileName);


    // for (int i = 0; i < strlen(numbers); i++)
    // {
    //     cout << numbers[i] << endl;
    // }
    
    return 0;
}


void copyFiles(ofstream &writeFile, ifstream &readFile, string src, string dest){
    
    readFile.open(src, ios::in);
    writeFile.open(dest, ios::in | ios::out);
    
    string line;

    if (!writeFile.is_open())
    {
        // create file and write data to it from another array
        cout << "File does not exist. Will be creating the file now.\n\n";
        
        writeFile.open("results.txt", ios::out);
        while (getline(readFile, line)){
            // cout << line;
            writeFile << line << endl;
        }
        cout << "The data has been written to the file.\n";
    }
    else{
        cout << "The file already exists.\n";
        writeFile.close();
    }
}

void appendToFile(ofstream &file, string filename){

    file.open(filename, ios::app);

    int numCount = 3;
    int inputNum;
    cout << "Enter " << numCount << " more numbers: \n";
    for (int i = 0; i < numCount; i++)
    {
        cin >> inputNum;
        file << inputNum << endl;
    }
    cout << "The numbers have been written (appended) to " << filename << ".";

}
