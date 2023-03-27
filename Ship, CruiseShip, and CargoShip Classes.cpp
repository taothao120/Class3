/*8Design a Ship class that has the following members: 
- A member variable for the name of the ship (a string) 
- A member variable for the year that the ship was built (a string) 
- A constructor and appropriate accessors and mutators 
- A virtual print function that displays the ship’s name and the year it was built
Design a CruiseShip class that is derived from the Ship class. The CruiseShip class should have the 
following members: 
- A member variable for the maximum number of passengers (an int) 
- A constructor and appropriate accessors and mutators 
- A print function that overrides the print function in the base class. The CruiseShip class’s 
print function should display only the ship’s name and the maximum number of passengers. 
Design a CargoShip class that is derived from the Ship class. The CargoShip class should have the 
following members: 
- A member variable for the cargo capacity in tonnage (an int). 
- A constructor and appropriate accessors and mutators. 
- A print function that overrides the print function in the base class. The CargoShip class’s print 
function should display only the ship’s name and the ship’s cargo capacity.
Demonstrate the classes in a program that has an array of Ship pointers. The array elements should be 
initialized with the addresses of dynamically allocated Ship, CruiseShip, and CargoShip objects. The 
program should then step through the array, calling each object’s print function.*/

#include <iostream>
#include <string>

using namespace std;
class Ship
{
    public:
        Ship();
        string getName();
        void setName(std::string name);
        string getYearBuilt();
        void setYear(std::string yar);
        string printNameAndYear();
        ~Ship();
    private:
        string name;
        string year;
};

Ship::Ship()
{
    name = "";
    year = "";
}

string Ship::getName() {
    return name;
}

void Ship::setName(std::string nameIn) {
    name = nameIn;
}

string Ship::getYearBuilt() {
    return year;
}

void Ship::setYear(std::string yearIn) {
    //std::string yar;
    year = yearIn;
}

string Ship::printNameAndYear() {
    return "The " + name + " was built in " + year + "\n";
}

Ship::~Ship()
{
    //dtor
}

class CruiseShip : public Ship
{
    public:
        CruiseShip();
        ~CruiseShip();
    protected:
    private:
};

CruiseShip::CruiseShip()
{
    //ctor
}

CruiseShip::~CruiseShip()
{
    //dtor
}

int main()
{
    Ship *santaMariaPtr = new Ship;
    santaMariaPtr->setName("Santa Maria");
    santaMariaPtr->setYear("1763");
    cout << santaMariaPtr->printNameAndYear();

    cout << "Press and key and return to exit ";
    char c;
    cin >> c;

    return 0;
}
