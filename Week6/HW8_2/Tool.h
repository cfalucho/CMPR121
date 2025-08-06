#include <iostream>
#include <string>
#ifndef TOOL_H
#define TOOL_H
using namespace std;

class Tool{
        protected:
            int ID;
            string name;
            double price;
        public:
            Tool();
            Tool(int, string, double);
            ~Tool();
            void setTool(int, string, double);
            double getPrice() const;
            void showTool() const;
};
#endif