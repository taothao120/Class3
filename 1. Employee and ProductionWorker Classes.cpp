/*Design a class named Employee. The class should keep the following information in 
- Employee name 
- Employee number 
- Hire date 
Write one or more constructors and the appropriate accessor and mutator functions for the class.
Next, write a class named ProductionWorker that is derived from the Employee class. The 
ProductionWorker class should have member variables to hold the following information: 
- Shift (an integer) 
- Hourly pay rate (a double )
The workday is divided into two shifts: day and night. The shift variable will hold an integer value 
representing the shift that the employee works. The day shift is shift 1, and the night shift is shift 2. Write 
one or more constructors and the appropriate accessor and mutator functions for the class. Demonstrate 
the classes by writing a program that uses a ProductionWorker object*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int number;
    string hire_date;

public:
    Employee() {}  // Default constructor
    
    Employee(string name, int number, string hire_date) {
        this->name = name;
        this->number = number;
        this->hire_date = hire_date;
    }
    
    void set_name(string name) {
        this->name = name;
    }
    
    void set_number(int number) {
        this->number = number;
    }
    
    void set_hire_date(string hire_date) {
        this->hire_date = hire_date;
    }
    
    string get_name() const {
        return name;
    }
    
    int get_number() const {
        return number;
    }
    
    string get_hire_date() const {
        return hire_date;
    }
};

class ProductionWorker : public Employee {
private:
    int shift;
    double pay_rate;

public:
    ProductionWorker() {}  // Default constructor
    
    ProductionWorker(string name, int number, string hire_date,
                      int shift, double pay_rate) :
                      Employee(name, number, hire_date) {
        this->shift = shift;
        this->pay_rate = pay_rate;
    }
    
    void set_shift(int shift) {
        this->shift = shift;
    }
    
    void set_pay_rate(double pay_rate) {
        this->pay_rate = pay_rate;
    }
    
    int get_shift() const {
        return shift;
    }
    
    double get_pay_rate() const {
        return pay_rat;}
        
 };
 
 int main() {
    // Create a ProductionWorker object with the given information
    ProductionWorker worker("John Doe", 123, "01/01/2022", 1, 12.50);
    
    // Print out the worker's information
    cout << "Name: " << worker.get_name() << endl;
    cout << "Employee Number: " << worker.get_number() << endl;
    cout << "Hire Date: " << worker.get_hire_date() << endl;
    cout << "Shift: " << worker.get_shift() << endl;
    cout << "Pay Rate: " << worker.get_pay_rate() << endl;
    
    // Change the worker's information
    worker.set_shift(2);
    worker.set_pay_rate(15.00);
    
    // Print out the updated information
    cout << "Updated Shift: " << worker.get_shift() << endl;
    cout << "Updated Pay Rate: " << worker.get_pay_rate() << endl;
    
    return 0;
}


