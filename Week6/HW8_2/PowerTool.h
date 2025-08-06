#include <iostream>
#include <string>
#include "Tool.h"

using namespace std;

class PowerTool: public Tool{
            private:
                string motorType;
                char cordless;
            public:
                PowerTool();
                PowerTool(string, char, int, string, double);
                ~PowerTool();
                void setPowerTool(string, char, int, string, double);
                void showTool() const;
};