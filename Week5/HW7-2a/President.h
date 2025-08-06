#include <iostream>
#include <string>
using namespace std;

class President{
        private:
            int number;
            string name;
            string quote;
        public: 
            President();
            ~President();
            void setNumber(int);
            void setName(string);
            void setQuote(string);
            void displayPresident()const;
};

