#include <iostream>
#include <iomanip>

using namespace  std;


struct Vehicle {
    int id;
    string model;
    int year;
    Vehicle* next;
};

/*================ GLOBAL VARIABLES ===================*/
void insertVehicle(Vehicle*&);
void displayList(Vehicle*&);
void deleteVehicle(Vehicle*&);
/*================ GLOBAL VARIABLES ===================*/


/*
===========================================================
===                MAIN FUNCTION BEGINS                 ===
===========================================================
*/
int main () {

    char answer = 'Y';
    Vehicle* head = nullptr;

    while (toupper(answer) == 'Y'){

        insertVehicle(head);
        cout << "Insert another vehicle? ";
        cin >> answer;
    }

    cout << "Here is the list of vehicles." << endl;
    displayList(head);
    cout << endl << endl;
    deleteVehicle(head);
    cout << endl << endl;
    displayList(head);

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
void insertVehicle(Vehicle*& head){

    Vehicle* temp = new Vehicle;
    
    cout << "Enter ID: ";
    cin >> temp->id;

    cout << "Enter model: ";
    cin >> temp->model;

    cout << "Enter year: ";
    cin >> temp->year;

    temp->next = head;
    head = temp;

}

void displayList(Vehicle*& head){

    Vehicle* temp = head;

    while (temp != nullptr )
    {
        cout << temp->id << " " << temp->model << " " 
        << temp->year << endl;
        temp = temp->next;
    }
}

void deleteVehicle(Vehicle*& head){
    
    Vehicle* follow = head;
    Vehicle* lead = head;
    int idNum;

    cout << "Enter the ID of the vehicle to be deleted: ";
    cin >> idNum;

    
    while (lead != nullptr && lead->id != idNum)
    {
        follow = lead;
        lead = lead->next;
    };

    if (lead->id == idNum)
    {
        follow->next = lead->next;
        delete lead;
    }

    // if the id number is the last node
    // delete the node
    // else display not in the list
    if (lead->next == nullptr)
    {
        if (lead->id == idNum)
        {
            delete lead;
        }
        else{
            cout << "Not in the list.\n";
        }
    }
}

/*
===========================================================
===                HELPER FUNCTION ENDS                 ===
===========================================================
*/

