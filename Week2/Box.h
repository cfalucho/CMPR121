#include <iostream>

using namespace std;


struct Box{
    int ID;
    double width;
    double height;
    double length;
    Box* next;
};

Box* head;