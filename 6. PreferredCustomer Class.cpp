
/*A retail store has a preferred customer plan where customers may earn discounts on all their purchases. 
The amount of a customer’s discount is determined by the amount of the customer’s cumulative 
purchases in the store. 
- When a preferred customer spends $500, he or she gets a 5% discount on all future purchases.
- When a preferred customer spends $1,000, he or she gets a 6% discount on all future purchases.
- When a preferred customer spends $1,500, he or she gets a 7% discount on all future purchases.
- When a preferred customer spends $2,000 or more, he or she gets a 10% discount on all future 
purchases. 
Design a class named PreferredCustomer, which is derived from the CustomerData class you created 
in Problem 5. The PreferredCustomer class should have the following member variables:
- purchasesAmount (a double )
- discountLevel (a double ) 
The purchasesAmount variable holds the total of a customer’s purchases to date. The discountLevel
variable should be set to the correct discount percentage, according to the store’s preferred customer 
plan. Write appropriate member functions for this class and demonstrate it in a simple program.*/


#include <iostream>
#include <string>
using namespace std;

// Base class
class CustomerData {
protected:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;
public:
    CustomerData(string lName, string fName, string addr, string c, string st, string z, string ph) {
        lastName = lName;
        firstName = fName;
        address = addr;
        city = c;
        state = st;
        zip = z;
        phone = ph;
    }
};

// Derived class
class PreferredCustomer : public CustomerData {
private:
    double purchasesAmount;
    double discountLevel;
public:
    PreferredCustomer(string lName, string fName, string addr, string c, string st, string z, string ph, double purchases) : CustomerData(lName, fName, addr, c, st, z, ph) {
        purchasesAmount = purchases;
        if (purchasesAmount >= 2000) {
            discountLevel = 0.10;
        }
        else if (purchasesAmount >= 1500) {
            discountLevel = 0.07;
        }
        else if (purchasesAmount >= 1000) {
            discountLevel = 0.06;
        }
        else if (purchasesAmount >= 500) {
            discountLevel = 0.05;
        }
        else {
            discountLevel = 0.00;
        }
    }

    void display() {
        cout << "Preferred Customer Information\n";
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Address: " << address << endl;
        cout << city << ", " << state << " " << zip << endl;
        cout << "Phone: " << phone << endl;
        cout << "Total Purchases: $" << purchasesAmount << endl;
        cout << "Discount Level: " << discountLevel * 100 << "%" << endl;
    }
};

int main() {
    PreferredCustomer customer1("Smith", "John", "123 Main St", "Anytown", "CA", "12345", "555-1234", 750.00);
    PreferredCustomer customer2("Doe", "Jane", "456 Maple Ave", "Smallville", "NY", "54321", "555-5678", 2500.00);

    customer1.display();
    cout << endl;
    customer2.display();

    return 0;
}
