#include <iostream>
#include <list>

using namespace std;
int main(){

    const int NUM_STUDENTS = 5;
    list<double> testScores(NUM_STUDENTS);
    double student_Total_Scores = 0;
    int studentCounter = 0;
    
    cout << "Enter 5 test scores.\n";
    // Read in user input
    for (list<double>::iterator it = testScores.begin(); it != testScores.end(); it++)
    {
        double studentTestScore;
        cout << "Student #" << ++studentCounter << ": ";
        cin >> studentTestScore;
        testScores.push_front(studentTestScore);
        if (studentCounter == NUM_STUDENTS)
        {
            testScores.resize(5);
            break;
        }
    }
    cout << endl;
    // Add up all the five scores
    for (list<double>::iterator it = testScores.begin(); it != testScores.end(); it++)
    {
        student_Total_Scores += *it;
    }
    
    // Display the average score
    student_Total_Scores /= NUM_STUDENTS;
    cout << "Average Score: " << student_Total_Scores << ".\n" ;    
}