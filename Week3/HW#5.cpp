#include <iostream>
#include <string>

using namespace std;

void showEvens(int, int);
void showOdds(int, int);
int countVowels(char[], int, int);

const int SIZE = 20;

int main (){
    int minNum = 1;                 // Minimum value
    int maxNum = 20;                // Maximum value

    int index = 0;                  // Index to increment through array
    int numVowels = 0;              // Hold the value of vowels
    char statement[SIZE] = "\0";    // Character array to hold statement

    
    cout << "Here are all even numbers from "<< minNum << 
    " to " << maxNum << ":" << endl << endl;
    showEvens(minNum, maxNum);

    cout << endl << endl;

    cout << "Here are all odd numbers from "<< maxNum << 
    " to " << minNum << ":" << endl << endl;
    showOdds(minNum, maxNum);

    cout << endl << endl;

    cout << "Enter a statement: \n";
    cin.getline(statement, SIZE);
    numVowels = countVowels(statement, index, SIZE);
    cout << endl;
    cout << "There are " << numVowels << " vowels in the statement.";
    
    return 0;
}

void showEvens(int minNum, int maxNum){

    if (minNum <= (maxNum / 2))
    {
        cout << 2 * minNum << " ";
        showEvens(minNum + 1, maxNum);
    }
}

void showOdds(int minNum, int oddNum){

    int maxNum = oddNum - 1;
    if (oddNum > minNum)
    {
        cout << oddNum - 1 << " ";
        showOdds(minNum, maxNum - 1);
    }
}

int countVowels(char arr[],int index, int SIZE){

    // convert all characters to lowercase
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = tolower(arr[i]);
    }
    // Base case if index equals null
    if (arr[index] == '\0')
    {
        return 0;
    }
    // If arr[index] equals A,E,I,O,U
    // return 1 and call function again
    else if (arr[index] == tolower('a') || arr[index] == 'e' || arr[index] == 'i' || 
        arr[index] == 'o' || arr[index] == 'u')
    {
        return 1 + countVowels(arr, index + 1, SIZE);
    }
    // Else, move to the next index
    else{
        return countVowels(arr, index + 1, SIZE);
    }
}


