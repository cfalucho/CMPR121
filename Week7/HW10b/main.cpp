#include <iostream>
#include <vector>

using namespace std;
int main () {

    vector<int> values;

    values.push_back(1);
    values.push_back(2);
    values.push_back(4);
    values.push_back(9);
    values.push_back(5);
    
    // Display all values in the vector
    for (size_t i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // Insert the value 3 in the beginning of the vector
    values.insert(values.begin(), 3);

    for (size_t i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // Remove the value in the beginning of the vector
    values.erase(values.begin());

    for (size_t i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // Remove the value in the end of the vector
    values.erase(values.end() - 1);
    
    for (size_t i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // Display the value size of the vector
    cout << "There are "<< values.size() << " values." << endl;
    
    


    


    return 0;
}