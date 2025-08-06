#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    
    cout << "The greater of value of 1 and 2 = " << max(1, 2) << endl;
    cout << "The greater of value of 2 and 1 = " << max(2, 1) << endl;
    cout << "The greater of value of 'a' and 'z' = " << max('a', 'z') << endl;
    cout << "The greater of value of 3.14 and 2.72 = " << max(3.14, 2.72) << endl;

    return 0;
}