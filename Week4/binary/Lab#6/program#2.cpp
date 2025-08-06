#include <iostream>
#include <fstream>

using namespace std;
int main(){
    const int SIZE = 10;
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fstream file;

    // Open the file and write to the file in binary
    // Close the file once done
    file.open("test.bin", ios::out | ios::binary);
    cout << "Writing the data to the file.\n";
    file.write(reinterpret_cast<char *>(numbers), SIZE);
    file.close();

    // Open the file and read the binary contents of the file 
    // Display contents on terminal
    // Close the file
    cout << "Now reading the data back into memory.\n";
    file.open("text.bin", ios::in | ios::binary);
    file.read(reinterpret_cast<char *>(numbers), SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    file.close();
    return 0;
}