#include <iostream>
#include <string>
#include <list>
using namespace std;

int main () {

    list<char> characters;
    string word;

    cout << "Enter a word: ";
    getline(cin, word);
    cout << endl;
    for (int i = 0; i < word[i] != '\0'; i++)
    {
        characters.push_back(word[i]);
    }
    
    // m o m
    // d a d 
    // r a c e c a r

    for (list<char>::iterator it = characters.begin(); it != characters.end(); it++)
    {   
        // if the first character and last character does not equal
        // end the loop
        int i = 0;
        if (characters.front() != characters.back() - i)
        {
            cout << word << " is not a palindrome.\n";
            break;
        }
        else{
            cout << word << " is a palindrome.\n";
            break;
        }
    }
    return 0;
}