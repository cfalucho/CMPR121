#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void showInfo(vector<int>);

int main() {

    vector<int> numbers {1,3,5,7,9};

    showInfo(numbers);

    return 0;
}

void showInfo(vector<int> numbers){
  
    cout << endl;
    cout << "Removing the last value in the vector...\n\n";
    numbers.pop_back();
    cout << "There are " << numbers.size() << " values in the vector. ";
   
    cout << endl << endl;
    cout << "There are " << numbers.capacity() << " array elements in the vector." << endl;
    cout << "Maximum number of int values the vector can hold is: " << numbers.max_size() << endl;
    cout << endl;

    cout << "Value at the front of the vector: " << numbers.front() << endl;
    cout << "Value at the back of the vector: " << numbers.back() << endl;
    cout << endl << endl;
    cout << "Display all vector values: " << endl;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    cout << "Resizing the vector down so that it holds only 2 values.\n\n";
    numbers.resize(2);
    
    
    cout << "After resizing, there are " << numbers.size() << " values in the vector. \n";

}   