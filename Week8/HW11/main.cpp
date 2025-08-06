#include <iostream>
#include <fstream>

using namespace std;

void writeRoots(int);
void writeSquares();

int main() {
    int min_num = 1;
    int max_num = 1000000;

    // Write to a file
    string rootsFilename = "roots.txt";
    ofstream writeFile;
    // writeFile.open(rootsFilenamgi);

    writeRoots(4);
    // while (min_num <= max_num)
    // { 
    //     // cout << writeRoots();
    //     writeFile << writeRoots();
    //     min_num++;
    // }
    

    return 0;
}

void writeRoots(int num){
   cout << sqrt(num);
}

// void writeSquares(int number){


// }