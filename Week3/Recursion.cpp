#include <iostream>

using namespace std;

/*================ FUNCTION PROTOTYPE ===================*/

int countChar(char[], char, int, int);

/*================ FUNCTION PROTOTYPE ===================*/

/*================ GLOBAL VARIABLES ===================*/

const int SIZE = 30;

/*================ GLOBAL VARIABLES ===================*/

/*
===========================================================
===                MAIN FUNCTION BEGINS                 ===
===========================================================
*/

// Program to find the number of times a character appears in a word or phrase
int main(){

    char letter = '\0';             // Letter to store
    char words[SIZE] = "\0";        // Size of array
    int index = 0;                  // Incrememt through the array
    int letterCounter = 0;          // Stores number of a character

    // Enter a word or phrase
    cout << "Enter a word or phrase: ";
    cin.getline(words, SIZE);    
    
    cout << endl;

    cout << "Enter a letter: ";
    cin >> letter;

    letterCounter = countChar(words, letter, index, SIZE);

    cout << endl;
    cout << "The letter " << "\"" << letter << "\"" << " in " << words << " appears " << 
             letterCounter << " times." << endl << endl;

    return 0;
}

/*
===========================================================
===                MAIN FUNCTION ENDS                   ===
===========================================================
*/


/*
===========================================================
===                HELPER FUNCTION BEGINS               ===
===========================================================
*/


// Function that returns the number of times a character appears in a string

// Example: 
// Word = mercedes 
// Letter = e
// e appears in mercedes => 3 times.
int countChar(char arr[], char letter, int index, int SIZE){

    // Declare a new array
    char arrCopy[SIZE];

    // Copy original array to new array
    strcpy(arrCopy, arr);

    // convert character string arrays all to lower case characters
    for (int i = 0; i < SIZE; i++)
    {
        arrCopy[index] = tolower(arr[index]);
    }
    
    // Base case
    // If array's index is equal to null
    // return
    if (arrCopy[index] == '\0')
    {
        return 0;
    }
    else if (arrCopy[index] == tolower(letter))
    {
        return 1 + countChar(arr, letter, index + 1, SIZE);
    }
    else{
        return countChar(arr, letter, index + 1, SIZE);
    }
}


/*
===========================================================
===                HELPER FUNCTION ENDS                 ===
===========================================================
*/
