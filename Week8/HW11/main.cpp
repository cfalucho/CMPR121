

#include <iostream>
#include <fstream>
#include <ctime>
#include <thread>

using namespace std;

void func();
void writeRoots();
void writeSquares();

int main() {
    int min_num = 1;
    int max_num = 1000000;

    // Declare two variables of clock_t data type
    clock_t start;
    clock_t end;

    // Start time
    start = clock();

    string rootsFilename = "roots.txt";
    fstream writeFile;
    cout << "main: startup \n\n";
    cout << "Writing 1,000,000 square roots to a file \n\n";
    thread worker1(writeRoots);
    cout << "main: waiting for thread to finish\n\n";
    worker1.join();
    cout << "The square roots are ready.\n\n";

    thread worker2(writeSquares);
    cout << "Squaring 1,000,000 numbers\n\n";
    cout << "The squares are ready.\n\n";
    worker2.join();
    cout << "main: done";
    
    // End time
    end = clock();

    cout << endl << endl;
    cout << "Runtime without threads = " << (end-start)/CLOCKS_PER_SEC << " seconds.\n\n";


    return 0;
}

void writeRoots(){
    string filename = "roots.txt";
    fstream file;
    int maxNum = 1000000;
    file.open(filename);
    
    int counter = 0;
    for (int i = 0; i <= maxNum; i++)
    {
        file << "#" << i << ": " << sqrt(i) << endl;
    }
    file.close();
}

void writeSquares(){
    string filename = "roots.txt";
    fstream file;
    int maxNum = 1000000;
    file.open(filename);
    
    int counter = 0;
    for (int i = 0; i <= maxNum; i++)
    {
        file << "#" << i << ": " << pow(i, 2) << endl;
    }
    file.close();
}